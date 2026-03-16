/* Copyright (C) logi.cals GmbH. All rights reserved. */

#ifndef LC_PROT_LCFU_IEC61131__EXPT_C
#define LC_PROT_LCFU_IEC61131__EXPT_C


#include <lcfu_iec61131__EXPT.h>

#if 1
#define TRACELINE(line)
#else
#include <LC3RTLibSpecial.h>
#include <RTSTrace.h>
#define TRACELINE(line)        RT_TRACE(printf("%s(%d): MSG\n",__FILE__,line));
#endif

/*
 ** recursive function to calculate base**exp, method is divide and conquer
 ** returns 0 on overflow (over ulonglong max)
 ** does not handle singed values!
 */
static lc_uint64_t integerPow(lc_uint64_t base, lc_uint32_t exp)
{
  lc_uint64_t a;
  if (exp == 1)
  {
    TRACELINE(1)
    return base;
  }
  a = integerPow(base, exp / 2);
  if (a == 0)
  {
    TRACELINE(2)
    return 0;
  }
  if (a >= LC_UINT64_MAX / a)
  {
    TRACELINE(3)
    return 0;
  }
  a *= a;

  if (exp % 2 == 0)
  {
    TRACELINE(4);
    return a;
  }
  if (a >= LC_UINT64_MAX / base)
  {
    TRACELINE(5)
    return 0;
  }

  TRACELINE(6)
  return a * base;
}

/*
 ** impl for a**b for signed values, range up to maxval
 */
lc_int64_t LC_MF_EXPT_SINTEGER_IMPL(lc_uint64_t maxval, lc_int64_t in1, lc_int64_t in2, LC_TD_BOOL *pENO)
{
  lc_uint64_t underflowMaxVal = maxval / 2 + 1;
  lc_uint64_t overflowMaxVal = maxval / 2;
  lc_uint8_t isNeg = 0;
  LC_TD_BOOL localEno;
  lc_uint64_t result;

  if (pENO == NULL)
  {
    /* not reachable if called correctly with pENO!=NULL */
    TRACELINE(-1)
    pENO = &localEno;
  }

  if ((in2 == 0) || (in1 == 1))
  {
    TRACELINE(13)
    return 1;
  }
  if (in1 == -1)
  {
    if (in2 % 2 == 0)
    {
      TRACELINE(14)
      return 1;
    }
    TRACELINE(15)
    return -1;
  }
  if (in1 == 0)
  {
    if (in2 > 0)
    {
      TRACELINE(16)
      return 0;
    }
    *pENO = LC_EL_false;
    TRACELINE(17)
    return overflowMaxVal;
  }
  if (in2 < 0)
  {
    TRACELINE(18)
    return 0;
  }
  if (in2 == 1)
  {
    TRACELINE(19)
    return in1;
  }

  if (in1 == underflowMaxVal)
  {
    TRACELINE(10)
    *pENO = LC_EL_false;
    return in1;
  }

  if (in1 < 0)
  {
    if (in2 % 2 != 0)
    {
      isNeg = 1;
    }
    in1 = -in1;
  }

  /* 2**64 is not more possible. so max exponent is 63 */
  if (in2 >= 64)
  {
    *pENO = LC_EL_false;
    if (!isNeg)
    {
      TRACELINE(11)
      return overflowMaxVal;
    }
    /* special handling for long-long-min necessary. - else compilers change it to 0 */
    if (maxval == LC_UINT64_MAX)
    {
      TRACELINE(12)
      return LC_INT64_MIN;
    }
    TRACELINE(20)
    /* underflowmaxval is 2**31 or 2**15, ... (64bit handled above) */
    return -(lc_int64_t) underflowMaxVal;
  }

  result = integerPow((lc_uint64_t) in1, (lc_uint32_t) in2);

  if (isNeg && (result > underflowMaxVal || result == 0))
  {
    *pENO = LC_EL_false;
    /* special handling for long-long-min necessary. - else compilers change it to 0 */
    if (maxval == LC_UINT64_MAX)
    {
      TRACELINE(21)
      return LC_INT64_MIN;
    }
    TRACELINE(22)
    /* underflowmaxval is 2**31 or 2**15, ... (64bit handled above) */
    return -(lc_int64_t) underflowMaxVal;
  }

  if ((!isNeg) && (result > overflowMaxVal || result == 0))
  {
    TRACELINE(23)
    *pENO = LC_EL_false;
    return overflowMaxVal;
  }

  if (isNeg)
  {
    TRACELINE(24)
    return -(lc_int64_t)result;
  }

  TRACELINE(25)
  return result;
}

/*
 ** impl for a**b for unsigned values, range up to maxval
 */
lc_uint64_t LC_MF_EXPT_UINTEGER_IMPL(lc_uint64_t maxval, lc_uint64_t in1, lc_uint64_t in2, LC_TD_BOOL *pENO)
{
  LC_TD_BOOL localEno;
  lc_uint64_t result;

  if (pENO == NULL)
  {
    /* not reachable if called correctly with pENO!=NULL */
    TRACELINE(-1)
    pENO = &localEno;
  }

  if ((in2 == 0) || (in1 == 1))
  {
    TRACELINE(31)
    return 1;
  }
  if (in1 == 0)
  {
    TRACELINE(32)
    return 0;
  }
  if (in2 == 1)
  {
    TRACELINE(33)
    return in1;
  }

  /* 2**64 is not more possible. so max exponent is 63 */
  if (in2 >= 64)
  {
    TRACELINE(34)
    *pENO = LC_EL_false;
    return maxval;
  }
  result = integerPow(in1, (lc_uint32_t) in2);

  if (result > maxval || result == 0)
  {
    TRACELINE(35)
    *pENO = LC_EL_false;
    return maxval;
  }

  TRACELINE(36)
  return result;
}

/*
  ul2Exp32 : ULINT := UDINT#MAX;
  EXPT(ul2Exp32, 8); // 1,4,3,2
  EXPT(2, 3); // 1,6
  EXPT(ULINT#2642246, 3); // 1,5
  EXPT(LINT#MIN, 3); // 10
  EXPT(SINT#2, 64); // 11
  EXPT(LINT#-2, 101); // 12
  EXPT(USINT#2, 10); // 20
  EXPT(INT#2, 0); // 13
  EXPT(INT#1, 8); // 13
  EXPT(-1, 2); // 14
  EXPT(-1, 3); // 15
  EXPT(INT#0, 4); // 16
  EXPT(0, -2); // 17
  EXPT(3, -3); // 18
  EXPT(SINT#7, 1); // 19
  EXPT(-3, 65); // 20

  EXPT(LINT#-2642246, 3); // 21
  EXPT(SINT#-2,11); // 22
  EXPT(SINT#2,10); // 23
  EXPT(INT#-2,3);  // 24
  EXPT(INT#2,4); // 25

  EXPT(UINT#2,0); // 31
  EXPT(UINT#1,8); // 31	
  EXPT(UINT#0,2);  // 32
  EXPT(UINT#4,1);  // 33
  EXPT(UINT#2,64);  // 34
  EXPT(USINT#2,14);  // 35	
*/


#endif

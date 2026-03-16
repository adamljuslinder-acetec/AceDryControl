/* Copyright (C) logi.cals GmbH. All rights reserved. */


#ifndef LC_PROT_LCFU_IEC61131__CONVERT_C
#define LC_PROT_LCFU_IEC61131__CONVERT_C

#include <lcfu_iec61131__CONVERT.h>
#include <LC3RTLibMath.h>
#include <LC3RTLibString.h>
#include <LC3RTLibSpecial.h> /* for isdigit(), isspace() */

/* --- BEG: helper functions to convert float/double to signed/unsigned numbers --- */
/*
 ** round half even (banker's rounding, odd-even-rounding,...)
 ** based on http://www.cplusplus.com/forum/articles/3638/
 */

/* value must be >= 0 */
static LC_TD_LINT LCfu_iec61131__CONVERT_roundhalfevenF_impl(float value)
{
  LC_MODFF_PAR ipart;
  LC_TD_LINT ret;

  /* ipart is the integer part of value */
  LC_MODFF(value, &ipart);

  /* If 'value' is exctly halfway between two integers */
  if (LC_FABSF(value - (ipart + 0.5f)) < LC_FLT_EPSILON)
  {
    /* If 'ipart' is even then return 'ipart' */
    if (LC_FMODF(ipart, 2.0f) < LC_FLT_EPSILON)
    {
      ret = (LC_TD_LINT) ipart;
    }
    else
    {
      /* Else return the nearest even integer */
      ret = (LC_TD_LINT)(ipart + 1.0f);
    }
  }
  else
  {
    /* Otherwise use the usual round to closest  */
    /* (Either symmetric half-up or half-down will do  */
    ret = (LC_TD_LINT)(value + 0.5f);
  }
  return ret;
}

/* value must be >= 0 */
static LC_TD_LINT LCfu_iec61131__CONVERT_roundhalfeven_impl(double value)
{
  LC_MODF_PAR ipart;
  LC_TD_LINT ret;

  /* ipart is the integer part of value */
  LC_MODF(value, &ipart);

  /* If 'value' is exctly halfway between two integers */
  if (LC_FABS(value - (ipart + 0.5)) < LC_DBL_EPSILON)
  {
    /* If 'ipart' is even then return 'ipart' */
    if (LC_FMOD(ipart, 2.0) < LC_DBL_EPSILON)
    {
      ret = (LC_TD_LINT) ipart;
    }
    else
    {
      /* Else return the nearest even integer */
      ret = (LC_TD_LINT)(ipart + 1.0);
    }
  }
  else
  {
    /* Otherwise use the usual round to closest  */
    /* (Either symmetric half-up or half-down will do  */
    ret = (LC_TD_LINT)(value + 0.5);
  }
  return ret;
}

LC_TD_LINT LCfu_iec61131__CONVERT_roundhalfevenF(float value)
{
  return (value < 0.0f) ?
    -LCfu_iec61131__CONVERT_roundhalfevenF_impl(-value) :
    LCfu_iec61131__CONVERT_roundhalfevenF_impl(value);
}

LC_TD_LINT LCfu_iec61131__CONVERT_roundhalfeven(double value)
{
  return (value < 0.0) ?
    -LCfu_iec61131__CONVERT_roundhalfeven_impl(-value) :
    LCfu_iec61131__CONVERT_roundhalfeven_impl(value);

}

LC_TD_ULINT LCfu_iec61131__CONVERT_roundhalfevenF_unsigned(float value)
{
  return (value < 0.0f) ?
    0ULL :
    (LC_TD_ULINT)LCfu_iec61131__CONVERT_roundhalfevenF_impl(value);
}

LC_TD_ULINT LCfu_iec61131__CONVERT_roundhalfeven_unsigned(double value)
{
  return (value < 0.0) ?
    0ULL :
    (LC_TD_ULINT)LCfu_iec61131__CONVERT_roundhalfeven_impl(value);
}

/* --- END: helper functions to convert float/double to signed/unsigned numbers --- */

#ifndef LC3CG_SAFETY_FEATURES_ONLY

/* --- BEG: helper functions to convert string to signed/unsigned numbers --- */
/* flag values */
#define _FL_UNSIGNED          1 /* unsigned variant called */
#define _FL_NEG               2 /* negative sign found */
#define _FL_OVERFLOW          4 /* overflow occured */
#define _FL_READDIGIT         8 /* we've read at least one correct digit */
#define _FL_READ_UNDERSCORE  16 /* we've read at last an _ */

static lc_uint64_t LCfu_iec61131__CONVERT_StringToNumberImpl(LC_TD_STRING pString, LC_TD_BOOL *pENO, lc_uint64_t maxval, lc_uint16_t flags)
{
  /*
   ** optimized variant of strtol, with long long support, and removing dependency from C-RT stdlib, reference MSVC10 Source. See below
   ** Note: Strtol has undefined behaviour.
   **   http://www.cplusplus.com/reference/cstdlib/strtol/
   **    If str does not point to a valid C-string, or if endptr does not point to a valid pointer object, it causes undefined behavior.
   ** "c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\crt\src\strtol.c"
   ** "c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include\limits.h"
   */
  lc_uint64_t number = 0;
  const char * string = (const char *) LC_GET_STRING_PTR(pString);
  char c;
  /* if our number exceeds this, we will overflow on multiply */
  lc_uint64_t maxvalDiv10 = maxval / 10;
  lc_uint64_t maxdigit = maxval % 10;
  lc_uint64_t underflowMaxVal = maxval / 2 + 1;
  lc_uint64_t overflowMaxVal = maxval / 2;

  if ((string == NULL) || (*string == 0x00))
  {
    return 0;
  }

  c = *string++;
  while (LC_ISSPACE((lc_uint8_t) c))
  {
    c = *string++;
  }

  if (c == '-')
  {
    c = *string++;
    flags |= _FL_NEG;
  }
  else if (c == '+')
  {
    c = *string++;
  }

  while (LC_ISDIGIT((lc_uint8_t) c))
  {
    lc_uint32_t digVal = c - '0';
    flags |= _FL_READDIGIT;
    flags &= ~_FL_READ_UNDERSCORE;

    if (number < maxvalDiv10 || (number == maxvalDiv10 && (lc_uint64_t) digVal <= maxdigit))
    {
      /* we won't overflow, go ahead and multiply */
      number = number * 10 + digVal;
    }
    else
    {
      /* we would have overflowed -- set the overflow flag */
      flags |= _FL_OVERFLOW;
    }
    c = *string++;

    /* ignore single embedded '_' */
    if (c == '_')
    {
      flags |= _FL_READ_UNDERSCORE;
      c = *string++;
    }
  }

  if ((c != '\0') || (!(flags & _FL_READDIGIT)) || (flags & _FL_READ_UNDERSCORE))
  {
    /* invalid input after digits found or no digit input */
    *pENO = LC_EL_false;
    return 0;
  }

  if ((flags & _FL_OVERFLOW)
      || (!(flags & _FL_UNSIGNED)
          && (((flags & _FL_NEG) && (number > underflowMaxVal))
              || (!(flags & _FL_NEG) && (number > overflowMaxVal))
          )
      )
      )
  {
    /* overflow or signed overflow occurred */
    *pENO = LC_EL_false;
    if (flags & _FL_UNSIGNED)
    {
      /* overflow, - sign, unsigned op (e.g. -9999999999999) should be 0xfffff.... not +1 */
      flags &= ~_FL_NEG;
      number = maxval;
    }
    else if (flags & _FL_NEG)
    {
      number = (lc_uint64_t) (underflowMaxVal);
    }
    else
    {
      number = overflowMaxVal;
    }
  }

  if (flags & _FL_NEG)
  {
    number = (lc_uint64_t) (-(lc_int64_t) number);
  }

  return number;
}

lc_uint64_t LCfu_iec61131__CONVERT_StringToNumber(LC_TD_STRING pString, LC_TD_BOOL *pENO, lc_uint64_t maxval)
{
  return LCfu_iec61131__CONVERT_StringToNumberImpl(pString, pENO, maxval, 0);
}

lc_uint64_t LCfu_iec61131__CONVERT_StringToUnsignedNumber(LC_TD_STRING pString, LC_TD_BOOL *pENO, lc_uint64_t maxval)
{
  return LCfu_iec61131__CONVERT_StringToNumberImpl(pString, pENO, maxval, _FL_UNSIGNED);
}

#undef  _FL_UNSIGNED
#undef  _FL_NEG
#undef  _FL_OVERFLOW
#undef  _FL_READDIGIT
#undef  _FL_READ_UNDERSCORE
/* --- END: helper functions to convert string to signed/unsigned numbers --- */

/* --- BEG: helper functions to convert string to IEC BOOL value --- */
LC_TD_BOOL LCfu_iec61131__CONVERT_StringToBool(LC_TD_STRING pString,LC_TD_BOOL *pENO)
{
  const char * string = (const char *)LC_GET_STRING_PTR(pString);

  if ((string == NULL) || (*string == 0x00))
  {
    return LC_EL_false;
  }

  if (*string == '1' || LC_STRNICMP(string,"TRUE",4) == 0)
  {
    if (*string == '1')
    {
      if (string[1] != 0)
      {
        *pENO = LC_EL_false;
      }
    }
    else
    { /* string starts with "TRUE" */
      if (string[4] != 0)
      {
        *pENO = LC_EL_false;
      }
    }
    return LC_EL_true;
  }
  else
  {
    if (*string == '0' || LC_STRNICMP(string,"FALSE",5) == 0)
    {
      if (*string == '0')
      {
        if (string[1] != 0)
        {
          *pENO = LC_EL_false;
        }
      }
      else
      { /* string starts with "FALSE" */
        if (string[5] != 0)
        {
          *pENO = LC_EL_false;
        }
      }
      return LC_EL_false;
    } /* endif */
  } /* endif */

  *pENO = LC_EL_false;
  return LC_EL_false;
}

/* --- END: helper functions to convert string to IEC BOOL value --- */

/* --- BEG: helper functions to convert string to float/double value --- */
float LCfu_iec61131__CONVERT_StringToFloat(LC_TD_STRING pString,LC_TD_BOOL *pENO)
{
  const char * string = (const char *)LC_GET_STRING_PTR(pString);
  char *strEnd;
  float value;

  if ((string == NULL) || (*string == 0x00))
  {
    return 0.0;
  }

  value = LC_STRTOF(string,&strEnd);
  /* set an error if there are any more characters after the value */
  if (*strEnd != 0x00)
  {
    *pENO = LC_EL_false;
  }
  return value;
}

double LCfu_iec61131__CONVERT_StringToDouble(LC_TD_STRING pString,LC_TD_BOOL *pENO)
{
  const char * string = (const char *)LC_GET_STRING_PTR(pString);
  char *strEnd;
  double value;

  if ((string == NULL) || (*string == 0x00))
  {
    return 0.0;
  }

  value = LC_STRTOD(string,&strEnd);
  /* set an error if there are any more characters after the value */
  if (*strEnd != 0x00)
  {
    *pENO = LC_EL_false;
  }
  return value;
}
/* --- END: helper functions to convert string to float/double value --- */
#endif
#endif

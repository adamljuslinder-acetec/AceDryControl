/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: non-inlined C implementation of function EXPT for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__EXPT__H
#define LC_PROT_LCFU_IEC61131__EXPT__H

#include <LC3CGBase.h>
#include <LC3RTLibMath.h>       /* for pow() */
#include <LC3RTLibStdTypes.h>

#define DEF_LC_TD_Function_EXPT_ANY(type) \
typedef struct _LC_TD_Function_EXPT__##type \
{ \
  LC_TD_BOOL LC_VD_ENO; \
  LC_TD_##type LC_VD_EXPT; \
} LCCG_StructAttrib LC_TD_Function_EXPT__##type;

DEF_LC_TD_Function_EXPT_ANY(SINT)
DEF_LC_TD_Function_EXPT_ANY(INT)
DEF_LC_TD_Function_EXPT_ANY(DINT)
DEF_LC_TD_Function_EXPT_ANY(LINT)

DEF_LC_TD_Function_EXPT_ANY(USINT)
DEF_LC_TD_Function_EXPT_ANY(UINT)
DEF_LC_TD_Function_EXPT_ANY(UDINT)
DEF_LC_TD_Function_EXPT_ANY(ULINT)

DEF_LC_TD_Function_EXPT_ANY(REAL)
DEF_LC_TD_Function_EXPT_ANY(LREAL)

/*                            Initialization Macro             */
#define LC_INIT_Function_EXPT_ANY(p,type) \
{ \
  LC_INIT_##type(&((p)->LC_VD_EXPT)); \
}

#define LC_INIT_Function_EXPT__SINT(p)  LC_INIT_Function_EXPT_ANY(p,SINT)
#define LC_INIT_Function_EXPT__INT(p)   LC_INIT_Function_EXPT_ANY(p,INT)
#define LC_INIT_Function_EXPT__DINT(p)  LC_INIT_Function_EXPT_ANY(p,DINT)
#define LC_INIT_Function_EXPT__LINT(p)  LC_INIT_Function_EXPT_ANY(p,LINT)

#define LC_INIT_Function_EXPT__USINT(p) LC_INIT_Function_EXPT_ANY(p,USINT)
#define LC_INIT_Function_EXPT__UINT(p)  LC_INIT_Function_EXPT_ANY(p,UINT)
#define LC_INIT_Function_EXPT__UDINT(p) LC_INIT_Function_EXPT_ANY(p,UDINT)
#define LC_INIT_Function_EXPT__ULINT(p) LC_INIT_Function_EXPT_ANY(p,ULINT)

#define LC_INIT_Function_EXPT__REAL(p)  LC_INIT_Function_EXPT_ANY(p,REAL)
#define LC_INIT_Function_EXPT__LREAL(p) LC_INIT_Function_EXPT_ANY(p,LREAL)

/*
**  calculates the IN1 to the power of IN2
*/

/*
**  ANY_REAL
**  There's a domain error if base is zero and exp is less than or equal to zero!
**  There's also a domain error if base is negative and exp is not an integer!
*/
#define LC_MF_EXPT_FLOAT(IN1,IN2)  ((LC_TD_REAL)(LC_POWF(IN1,IN2)))
#define LC_MF_EXPT_DOUBLE(IN1,IN2) ((LC_TD_LREAL)(LC_POW(IN1,IN2)))

/*
**  ANY_INT
**  return max/min number of range in case of under/overflow AND sets ENO to false
*/
extern lc_int64_t  LC_MF_EXPT_SINTEGER_IMPL(lc_uint64_t maxval,lc_int64_t in1, lc_int64_t in2, LC_TD_BOOL *LC_VD_ENO);
extern lc_uint64_t LC_MF_EXPT_UINTEGER_IMPL(lc_uint64_t maxval,lc_uint64_t in1, lc_uint64_t in2, LC_TD_BOOL *LC_VD_ENO);

/*  Prototype */
#define lcfu_iec61131__EXPT__SINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_SINT)(LC_MF_EXPT_SINTEGER_IMPL(LC_UINT8_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__INT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_INT)(LC_MF_EXPT_SINTEGER_IMPL(LC_UINT16_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__DINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_DINT)(LC_MF_EXPT_SINTEGER_IMPL(LC_UINT32_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__LINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_LINT)(LC_MF_EXPT_SINTEGER_IMPL(LC_UINT64_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__USINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_USINT)(LC_MF_EXPT_UINTEGER_IMPL(LC_UINT8_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__UINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_UINT)(LC_MF_EXPT_UINTEGER_IMPL(LC_UINT16_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__UDINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_UDINT)(LC_MF_EXPT_UINTEGER_IMPL(LC_UINT32_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__ULINT(LC_this, IN1, IN2, pEPDB) \
        (LC_this)->LC_VD_EXPT = ((LC_TD_ULINT)(LC_MF_EXPT_UINTEGER_IMPL(LC_UINT64_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))))

#define lcfu_iec61131__EXPT__REAL(LC_this, IN1, IN2, pEPDB)  (LC_this)->LC_VD_EXPT = LC_MF_EXPT_FLOAT(IN1,IN2)
#define lcfu_iec61131__EXPT__LREAL(LC_this, IN1, IN2, pEPDB) (LC_this)->LC_VD_EXPT = LC_MF_EXPT_DOUBLE(IN1,IN2)

/* directly modify ENO of caller in case of error! */
#define  lcfu_iec61131__EXPT__SINT__INL(IN1, IN2)  LC_MF_EXPT_SINTEGER_IMPL(LC_UINT8_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__INT__INL(IN1, IN2)   LC_MF_EXPT_SINTEGER_IMPL(LC_UINT16_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__DINT__INL(IN1, IN2)  LC_MF_EXPT_SINTEGER_IMPL(LC_UINT32_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__LINT__INL(IN1, IN2)  LC_MF_EXPT_SINTEGER_IMPL(LC_UINT64_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))

#define  lcfu_iec61131__EXPT__USINT__INL(IN1, IN2) LC_MF_EXPT_UINTEGER_IMPL(LC_UINT8_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__UINT__INL(IN1, IN2)  LC_MF_EXPT_UINTEGER_IMPL(LC_UINT16_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__UDINT__INL(IN1, IN2) LC_MF_EXPT_UINTEGER_IMPL(LC_UINT32_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))
#define  lcfu_iec61131__EXPT__ULINT__INL(IN1, IN2) LC_MF_EXPT_UINTEGER_IMPL(LC_UINT64_MAX,IN1,IN2,&((LC_this)->LC_VD_ENO))

#define  lcfu_iec61131__EXPT__REAL__INL(IN1, IN2)  LC_MF_EXPT_FLOAT(IN1,IN2)
#define  lcfu_iec61131__EXPT__LREAL__INL(IN1, IN2) LC_MF_EXPT_DOUBLE(IN1,IN2)

#endif

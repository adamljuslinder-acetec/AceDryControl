/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function MOD for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__MOD__H
#define LC_PROT_LCFU_IEC61131__MOD__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_MOD_ANY(type) \
typedef struct _LC_TD_Function_MOD__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_MOD;              \
} LCCG_StructAttrib LC_TD_Function_MOD__##type;

DEF_LC_TD_Function_MOD_ANY(SINT)
DEF_LC_TD_Function_MOD_ANY(INT)
DEF_LC_TD_Function_MOD_ANY(DINT)
DEF_LC_TD_Function_MOD_ANY(LINT)
DEF_LC_TD_Function_MOD_ANY(USINT)
DEF_LC_TD_Function_MOD_ANY(UINT)
DEF_LC_TD_Function_MOD_ANY(UDINT)
DEF_LC_TD_Function_MOD_ANY(ULINT)

/*                            Initialization Macro             */
#define LC_INIT_Function_MOD_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_MOD)); \
}

#define LC_INIT_Function_MOD__SINT(p)   LC_INIT_Function_MOD_ANY(p,SINT)
#define LC_INIT_Function_MOD__INT(p)    LC_INIT_Function_MOD_ANY(p,INT)
#define LC_INIT_Function_MOD__DINT(p)   LC_INIT_Function_MOD_ANY(p,DINT)
#define LC_INIT_Function_MOD__LINT(p)   LC_INIT_Function_MOD_ANY(p,LINT)
#define LC_INIT_Function_MOD__USINT(p)  LC_INIT_Function_MOD_ANY(p,USINT)
#define LC_INIT_Function_MOD__UINT(p)   LC_INIT_Function_MOD_ANY(p,UINT)
#define LC_INIT_Function_MOD__UDINT(p)  LC_INIT_Function_MOD_ANY(p,UDINT)
#define LC_INIT_Function_MOD__ULINT(p)  LC_INIT_Function_MOD_ANY(p,ULINT)

/* Implementation of helper macros (inlined)  */

#define LC_MF_MOD_SETERR(Err) ((Err)=LC_EL_false)

#define LC_MF_MOD_ANY_INT_ERR(IN1,IN2,Err,TYPE)    ((IN2)==0?LC_MF_MOD_SETERR(Err),0:(TYPE)((IN1)%(IN2)))

#define LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,TYPE) \
   (LC_this)->LC_VD_MOD = LC_MF_MOD_ANY_INT_ERR(IN1,IN2,(LC_this)->LC_VD_ENO,TYPE)

/* Inline Impl Helper : ErrorHandling, but no Error Setting, RC=0 in case of Error */
#define LC_MF_MOD_ANY_INT_ERR_INL(IN1,IN2,TYPE)    ((IN2)==0?0:(TYPE)((IN1)%(IN2)))

/* Impl (not inlined)                     */
#define  lcfu_iec61131__MOD__SINT(LC_this, IN1, IN2, pEPDB)   LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_SINT)
#define  lcfu_iec61131__MOD__INT(LC_this, IN1, IN2, pEPDB)    LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_INT)
#define  lcfu_iec61131__MOD__DINT(LC_this, IN1, IN2, pEPDB)   LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_DINT)
#define  lcfu_iec61131__MOD__LINT(LC_this, IN1, IN2, pEPDB)   LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_LINT)

#define  lcfu_iec61131__MOD__USINT(LC_this, IN1, IN2, pEPDB)  LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_USINT)
#define  lcfu_iec61131__MOD__UINT(LC_this, IN1, IN2, pEPDB)   LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_UINT)
#define  lcfu_iec61131__MOD__UDINT(LC_this, IN1, IN2, pEPDB)  LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_UDINT)
#define  lcfu_iec61131__MOD__ULINT(LC_this, IN1, IN2, pEPDB)  LC_MF_MOD_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LC_TD_ULINT)

/* Impl (inlined)                     */
#define  lcfu_iec61131__MOD__SINT__INL( IN1, IN2)   LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_SINT)
#define  lcfu_iec61131__MOD__INT__INL( IN1, IN2)    LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_INT)
#define  lcfu_iec61131__MOD__DINT__INL( IN1, IN2)   LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_DINT)
#define  lcfu_iec61131__MOD__LINT__INL( IN1, IN2)   LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_LINT)

#define  lcfu_iec61131__MOD__USINT__INL( IN1, IN2)  LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_USINT)
#define  lcfu_iec61131__MOD__UINT__INL( IN1, IN2)   LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_UINT)
#define  lcfu_iec61131__MOD__UDINT__INL( IN1, IN2)  LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_UDINT)
#define  lcfu_iec61131__MOD__ULINT__INL( IN1, IN2)  LC_MF_MOD_ANY_INT_ERR_INL( IN1, IN2,LC_TD_ULINT)

#endif

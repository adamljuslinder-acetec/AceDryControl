/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function DIV for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__DIV__H
#define LC_PROT_LCFU_IEC61131__DIV__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_DIV_ANY(type) \
typedef struct _LC_TD_Function_DIV__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_DIV;              \
} LCCG_StructAttrib LC_TD_Function_DIV__##type;

DEF_LC_TD_Function_DIV_ANY(SINT)
DEF_LC_TD_Function_DIV_ANY(INT)
DEF_LC_TD_Function_DIV_ANY(DINT)
DEF_LC_TD_Function_DIV_ANY(LINT)
DEF_LC_TD_Function_DIV_ANY(USINT)
DEF_LC_TD_Function_DIV_ANY(UINT)
DEF_LC_TD_Function_DIV_ANY(UDINT)
DEF_LC_TD_Function_DIV_ANY(ULINT)
DEF_LC_TD_Function_DIV_ANY(REAL)
DEF_LC_TD_Function_DIV_ANY(LREAL)
DEF_LC_TD_Function_DIV_ANY(TIME)

/*                            Initialization Macro             */
#define LC_INIT_Function_DIV_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_DIV)); \
}

#define LC_INIT_Function_DIV__SINT(p)   LC_INIT_Function_DIV_ANY(p,SINT)
#define LC_INIT_Function_DIV__INT(p)    LC_INIT_Function_DIV_ANY(p,INT)
#define LC_INIT_Function_DIV__DINT(p)   LC_INIT_Function_DIV_ANY(p,DINT)
#define LC_INIT_Function_DIV__LINT(p)   LC_INIT_Function_DIV_ANY(p,LINT)
#define LC_INIT_Function_DIV__USINT(p)  LC_INIT_Function_DIV_ANY(p,USINT)
#define LC_INIT_Function_DIV__UINT(p)   LC_INIT_Function_DIV_ANY(p,UINT)
#define LC_INIT_Function_DIV__UDINT(p)  LC_INIT_Function_DIV_ANY(p,UDINT)
#define LC_INIT_Function_DIV__ULINT(p)  LC_INIT_Function_DIV_ANY(p,ULINT)
#define LC_INIT_Function_DIV__REAL(p)   LC_INIT_Function_DIV_ANY(p,REAL)
#define LC_INIT_Function_DIV__LREAL(p)  LC_INIT_Function_DIV_ANY(p,LREAL)
#define LC_INIT_Function_DIV__TIME(p)   LC_INIT_Function_DIV_ANY(p,TIME)

/* Implementation of helper macros (inlined)  */

#define LC_MF_DIV_SETERR(Err) ((Err)=LC_EL_false)

#define LC_DIV_SIGNED_INT_OVF(IN1, IN2, TYPE)      (((IN1)==LC_IEC_##TYPE##_MIN)&&((IN2)==-1))
#define LC_DIV_IS_SIG_DIVERR(IN1,IN2,TYPE)         ((IN2)==0||(LC_DIV_SIGNED_INT_OVF(IN1,IN2,TYPE)))
#define LC_DIV_IS_USIG_DIVERR(IN1,IN2,TYPE)        ((IN2)==0)


#define LC_MF_DIV_ANY_UINT_ERR(IN1,IN2,Err,TYPE)   (LC_DIV_IS_USIG_DIVERR(IN1,IN2,TYPE)?LC_MF_DIV_SETERR(Err),0:(LC_TD_##TYPE)((IN1)/(IN2)))
#define LC_MF_DIV_ANY_INT_ERR(IN1,IN2,Err,TYPE)    (LC_DIV_IS_SIG_DIVERR(IN1,IN2,TYPE)?LC_MF_DIV_SETERR(Err),0:((LC_TD_##TYPE)(IN1)/(LC_TD_##TYPE)(IN2)))
#define LC_MF_DIV_REAL_ERR(IN1,IN2,Err)            ((IN2)==0.0f?LC_MF_DIV_SETERR(Err),0.0F:(LC_TD_REAL)((IN1)/(IN2)))
#define LC_MF_DIV_LREAL_ERR(IN1,IN2,Err)           ((IN2)==0.0?LC_MF_DIV_SETERR(Err),0.0:(LC_TD_LREAL)((IN1)/(IN2)))
#define LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,TYPE) \
   (LC_this)->LC_VD_DIV = LC_MF_DIV_ANY_INT_ERR(IN1,IN2,(LC_this)->LC_VD_ENO,TYPE)
#define LC_MF_DIV_ANY_UINT_ERR_NINL(LC_this, IN1, IN2,TYPE) \
   (LC_this)->LC_VD_DIV = LC_MF_DIV_ANY_UINT_ERR(IN1,IN2,(LC_this)->LC_VD_ENO,TYPE)

#define LC_MF_DIV_REAL_ERR_NINL(LC_this, IN1, IN2) \
   (LC_this)->LC_VD_DIV = LC_MF_DIV_REAL_ERR(IN1,IN2,(LC_this)->LC_VD_ENO)
#define LC_MF_DIV_LREAL_ERR_NINL(LC_this, IN1, IN2) \
   (LC_this)->LC_VD_DIV = LC_MF_DIV_LREAL_ERR(IN1,IN2,(LC_this)->LC_VD_ENO)

/* Inline Impl Helper : ErrorHandling, but no Error Setting, RC=0 in case of Error */
#define LC_MF_DIV_ANY_INT_ERR_INL(IN1,IN2,TYPE)    (LC_DIV_IS_SIG_DIVERR(IN1,IN2,TYPE)?0:((LC_TD_##TYPE)(IN1)/(LC_TD_##TYPE)(IN2)))
#define LC_MF_DIV_ANY_UINT_ERR_INL(IN1,IN2,TYPE)   (LC_DIV_IS_USIG_DIVERR(IN1,IN2,TYPE)?0:(LC_TD_##TYPE)((IN1)/(IN2)))

#define LC_MF_DIV_REAL_ERR_INL(IN1,IN2)            ((IN2)==0.0f?0.0F:(LC_TD_REAL)((IN1)/(IN2)))
#define LC_MF_DIV_LREAL_ERR_INL(IN1,IN2)           ((IN2)==0.0?0.0:(LC_TD_LREAL)((IN1)/(IN2)))

/* Impl (not inlined)                     */
#define  lcfu_iec61131__DIV__SINT(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,SINT)
#define  lcfu_iec61131__DIV__INT(LC_this, IN1, IN2, pEPDB)    LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,INT)
#define  lcfu_iec61131__DIV__DINT(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,DINT)
#define  lcfu_iec61131__DIV__LINT(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,LINT)

#define  lcfu_iec61131__DIV__USINT(LC_this, IN1, IN2, pEPDB)  LC_MF_DIV_ANY_UINT_ERR_NINL(LC_this, IN1, IN2,USINT)
#define  lcfu_iec61131__DIV__UINT(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_ANY_UINT_ERR_NINL(LC_this, IN1, IN2,UINT)
#define  lcfu_iec61131__DIV__UDINT(LC_this, IN1, IN2, pEPDB)  LC_MF_DIV_ANY_UINT_ERR_NINL(LC_this, IN1, IN2,UDINT)
#define  lcfu_iec61131__DIV__ULINT(LC_this, IN1, IN2, pEPDB)  LC_MF_DIV_ANY_UINT_ERR_NINL(LC_this, IN1, IN2,ULINT)

#define  lcfu_iec61131__DIV__TIME(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_ANY_INT_ERR_NINL(LC_this, IN1, IN2,TIME)

#define  lcfu_iec61131__DIV__REAL(LC_this, IN1, IN2, pEPDB)   LC_MF_DIV_REAL_ERR_NINL(LC_this, IN1, IN2)
#define  lcfu_iec61131__DIV__LREAL(LC_this, IN1, IN2, pEPDB)  LC_MF_DIV_LREAL_ERR_NINL(LC_this, IN1, IN2)

/* Impl (inlined)                     */
#define  lcfu_iec61131__DIV__SINT__INL( IN1, IN2)   LC_MF_DIV_ANY_INT_ERR_INL( IN1, IN2,SINT)
#define  lcfu_iec61131__DIV__INT__INL( IN1, IN2)    LC_MF_DIV_ANY_INT_ERR_INL( IN1, IN2,INT)
#define  lcfu_iec61131__DIV__DINT__INL( IN1, IN2)   LC_MF_DIV_ANY_INT_ERR_INL( IN1, IN2,DINT)
#define  lcfu_iec61131__DIV__LINT__INL( IN1, IN2)   LC_MF_DIV_ANY_INT_ERR_INL( IN1, IN2,LINT)

#define  lcfu_iec61131__DIV__USINT__INL( IN1, IN2)  LC_MF_DIV_ANY_UINT_ERR_INL( IN1, IN2,USINT)
#define  lcfu_iec61131__DIV__UINT__INL( IN1, IN2)   LC_MF_DIV_ANY_UINT_ERR_INL( IN1, IN2,UINT)
#define  lcfu_iec61131__DIV__UDINT__INL( IN1, IN2)  LC_MF_DIV_ANY_UINT_ERR_INL( IN1, IN2,UDINT)
#define  lcfu_iec61131__DIV__ULINT__INL( IN1, IN2)  LC_MF_DIV_ANY_UINT_ERR_INL( IN1, IN2,ULINT)


#define  lcfu_iec61131__DIV__REAL__INL( IN1, IN2)   LC_MF_DIV_REAL_ERR_INL( IN1, IN2)
#define  lcfu_iec61131__DIV__LREAL__INL(IN1, IN2)   LC_MF_DIV_LREAL_ERR_INL( IN1, IN2)


#define LC_DIV_IS_UNSIGNED(IN)      (((IN)>0)&&(-(IN)>0))
#define LC_DIV_IS_ULL(IN)           ((sizeof(IN)==sizeof(LC_TD_ULINT))&&LC_DIV_IS_UNSIGNED(IN))
#define LC_DIV_IS_LARGE_ULL(IN)     (((LC_TD_LINT)(IN))<0)

#define LC_DIV_TIME_ORD(A,B)        (LC_TD_TIME)((B)==0?0:((A)/(B)))
#define LC_DIV_TIME_ULL_FIX(A,B)    (LC_TD_TIME)(LC_DIV_IS_LARGE_ULL(B)?0:(LC_DIV_TIME_ORD(A,((LC_TD_LINT)(B)))))


/* special handling because LL / ULL gives incorrect results, when the LL Value < 0 - therefore we need to know whether B's Type is ULL */
/* In this case the C norm asks A to be casted to an ULL value. So -10 div 2 should give -5, but give a large signed long value */
/* (sll)-4 / (ull)4 = 7ffffffffffffffe ! */
#define LC_DIV_TIME(A,B)            ((((A)<0)&&(LC_DIV_IS_ULL(B)))?LC_DIV_TIME_ULL_FIX(A,B):LC_DIV_TIME_ORD(A,B))

#define  lcfu_iec61131__DIV__TIME__INL( IN1, IN2)   ((LC_TD_TIME)(LC_DIV_TIME(IN1,IN2)))

#endif

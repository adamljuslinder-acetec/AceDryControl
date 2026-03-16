/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function MUL for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__MUL__H
#define LC_PROT_LCFU_IEC61131__MUL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_MUL_ANY(type) \
typedef struct _LC_TD_Function_MUL__##type   \
{                                            \
	LC_TD_BOOL LC_VD_ENO;                \
	LC_TD_##type LC_VD_MUL;              \
} LCCG_StructAttrib LC_TD_Function_MUL__##type;

DEF_LC_TD_Function_MUL_ANY(SINT)
DEF_LC_TD_Function_MUL_ANY(INT)
DEF_LC_TD_Function_MUL_ANY(DINT)
DEF_LC_TD_Function_MUL_ANY(LINT)
DEF_LC_TD_Function_MUL_ANY(USINT)
DEF_LC_TD_Function_MUL_ANY(UINT)
DEF_LC_TD_Function_MUL_ANY(UDINT)
DEF_LC_TD_Function_MUL_ANY(ULINT)
DEF_LC_TD_Function_MUL_ANY(REAL)
DEF_LC_TD_Function_MUL_ANY(LREAL)

/*                            Initialization Macro             */
#define LC_INIT_Function_MUL_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_MUL)); \
}

#define LC_INIT_Function_MUL__SINT(p)   LC_INIT_Function_MUL_ANY(p,SINT)
#define LC_INIT_Function_MUL__INT(p)    LC_INIT_Function_MUL_ANY(p,INT)
#define LC_INIT_Function_MUL__DINT(p)   LC_INIT_Function_MUL_ANY(p,DINT)
#define LC_INIT_Function_MUL__LINT(p)   LC_INIT_Function_MUL_ANY(p,LINT)
#define LC_INIT_Function_MUL__USINT(p)  LC_INIT_Function_MUL_ANY(p,USINT)
#define LC_INIT_Function_MUL__UINT(p)   LC_INIT_Function_MUL_ANY(p,UINT)
#define LC_INIT_Function_MUL__UDINT(p)  LC_INIT_Function_MUL_ANY(p,UDINT)
#define LC_INIT_Function_MUL__ULINT(p)  LC_INIT_Function_MUL_ANY(p,ULINT)
#define LC_INIT_Function_MUL__REAL(p)   LC_INIT_Function_MUL_ANY(p,REAL)
#define LC_INIT_Function_MUL__LREAL(p)  LC_INIT_Function_MUL_ANY(p,LREAL)

/*                            Implementation of helper macros (inlined)  */
#define LC_MF_MUL_ANY_2(IN1,IN2)                                                                      ((IN1)*(IN2))
#define LC_MF_MUL_ANY_3(IN1,IN2,IN3)                                                                  (LC_MF_MUL_ANY_2(IN1,IN2)*(IN3))
#define LC_MF_MUL_ANY_4(IN1,IN2,IN3,IN4)                                                              (LC_MF_MUL_ANY_3(IN1,IN2,IN3)*(IN4))
#define LC_MF_MUL_ANY_5(IN1,IN2,IN3,IN4,IN5)                                                          (LC_MF_MUL_ANY_4(IN1,IN2,IN3,IN4)*(IN5))
#define LC_MF_MUL_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)                                                      (LC_MF_MUL_ANY_5(IN1,IN2,IN3,IN4,IN5)*(IN6))
#define LC_MF_MUL_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)                                                  (LC_MF_MUL_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)*(IN7))
#define LC_MF_MUL_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)                                              (LC_MF_MUL_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)*(IN8))
#define LC_MF_MUL_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)                                          (LC_MF_MUL_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)*(IN9))
#define LC_MF_MUL_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)                                    (LC_MF_MUL_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)*(IN10))
#define LC_MF_MUL_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)                               (LC_MF_MUL_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)*(IN11))
#define LC_MF_MUL_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)                          (LC_MF_MUL_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)*(IN12))
#define LC_MF_MUL_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)                     (LC_MF_MUL_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)*(IN13))
#define LC_MF_MUL_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)                (LC_MF_MUL_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)*(IN14))
#define LC_MF_MUL_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)           (LC_MF_MUL_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)*(IN15))
#define LC_MF_MUL_ANY_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)      (LC_MF_MUL_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)*(IN16))


/*                            Impl (not inlined)                     */
#define  lcfu_iec61131__MUL__ANY__2(LC_this, IN1, IN2, pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_2(IN1,IN2)

#define  lcfu_iec61131__MUL__ANY__3(LC_this, IN1, IN2, IN3,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_3(IN1,IN2,IN3)

#define  lcfu_iec61131__MUL__ANY__4(LC_this, IN1, IN2, IN3,IN4,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_4(IN1,IN2,IN3,IN4)

#define  lcfu_iec61131__MUL__ANY__5(LC_this, IN1, IN2, IN3,IN4,IN5,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_5(IN1,IN2,IN3,IN4,IN5)

#define  lcfu_iec61131__MUL__ANY__6(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)

#define  lcfu_iec61131__MUL__ANY__7(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)

#define  lcfu_iec61131__MUL__ANY__8(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)

#define  lcfu_iec61131__MUL__ANY__9(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)

#define  lcfu_iec61131__MUL__ANY__10(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)

#define  lcfu_iec61131__MUL__ANY__11(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)

#define  lcfu_iec61131__MUL__ANY__12(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)

#define  lcfu_iec61131__MUL__ANY__13(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)

#define  lcfu_iec61131__MUL__ANY__14(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)

#define  lcfu_iec61131__MUL__ANY__15(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)

#define  lcfu_iec61131__MUL__ANY__16(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16,pEPDB) \
   (LC_this)->LC_VD_MUL = LC_MF_MUL_ANY_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)

#endif

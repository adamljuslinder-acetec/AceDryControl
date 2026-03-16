/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function OR for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__OR__H
#define LC_PROT_LCFU_IEC61131__OR__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_OR_ANY(type) \
typedef struct _LC_TD_Function_OR__##type \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	LC_TD_##type LC_VD_OR; \
} LCCG_StructAttrib LC_TD_Function_OR__##type;

DEF_LC_TD_Function_OR_ANY(BOOL)
DEF_LC_TD_Function_OR_ANY(BYTE)
DEF_LC_TD_Function_OR_ANY(WORD)
DEF_LC_TD_Function_OR_ANY(DWORD)
DEF_LC_TD_Function_OR_ANY(LWORD)

/*                            Initialization Macro             */
#define LC_INIT_Function_OR_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_OR)); \
}

#define LC_INIT_Function_OR__BOOL(p)   LC_INIT_Function_OR_ANY(p,BOOL)
#define LC_INIT_Function_OR__BYTE(p)   LC_INIT_Function_OR_ANY(p,BYTE)
#define LC_INIT_Function_OR__WORD(p)   LC_INIT_Function_OR_ANY(p,WORD)
#define LC_INIT_Function_OR__DWORD(p)  LC_INIT_Function_OR_ANY(p,DWORD)
#define LC_INIT_Function_OR__LWORD(p)  LC_INIT_Function_OR_ANY(p,LWORD)

/* Bitwise and Boolean OR of arguments                         */
#define LC_MF_OR_ANY_2(IN1,IN2)                                                                      ((IN1)|(IN2))
#define LC_MF_OR_ANY_3(IN1,IN2,IN3)                                                                  ((IN1)|(IN2)|(IN3))
#define LC_MF_OR_ANY_4(IN1,IN2,IN3,IN4)                                                              ((IN1)|(IN2)|(IN3)|(IN4))
#define LC_MF_OR_ANY_5(IN1,IN2,IN3,IN4,IN5)                                                          ((IN1)|(IN2)|(IN3)|(IN4)|(IN5))
#define LC_MF_OR_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)                                                      ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6))
#define LC_MF_OR_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)                                                  ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7))
#define LC_MF_OR_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)                                              ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8))
#define LC_MF_OR_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)                                          ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9))
#define LC_MF_OR_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)                                    ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10))
#define LC_MF_OR_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)                               ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11))
#define LC_MF_OR_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)                          ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11)|(IN12))
#define LC_MF_OR_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)                     ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11)|(IN12)|(IN13))
#define LC_MF_OR_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)                ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11)|(IN12)|(IN13)|(IN14))
#define LC_MF_OR_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)           ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11)|(IN12)|(IN13)|(IN14)|(IN15))
#define LC_MF_OR_ANY_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)      ((IN1)|(IN2)|(IN3)|(IN4)|(IN5)|(IN6)|(IN7)|(IN8)|(IN9)|(IN10)|(IN11)|(IN12)|(IN13)|(IN14)|(IN15)|(IN16))

#define LC_MF_OR_BOOL_2(IN1,IN2)                                                                      ((IN1)||(IN2))
#define LC_MF_OR_BOOL_3(IN1,IN2,IN3)                                                                  ((IN1)||(IN2)||(IN3))
#define LC_MF_OR_BOOL_4(IN1,IN2,IN3,IN4)                                                              ((IN1)||(IN2)||(IN3)||(IN4))
#define LC_MF_OR_BOOL_5(IN1,IN2,IN3,IN4,IN5)                                                          ((IN1)||(IN2)||(IN3)||(IN4)||(IN5))
#define LC_MF_OR_BOOL_6(IN1,IN2,IN3,IN4,IN5,IN6)                                                      ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6))
#define LC_MF_OR_BOOL_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)                                                  ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7))
#define LC_MF_OR_BOOL_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)                                              ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8))
#define LC_MF_OR_BOOL_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)                                          ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9))
#define LC_MF_OR_BOOL_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)                                    ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10))
#define LC_MF_OR_BOOL_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)                               ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11))
#define LC_MF_OR_BOOL_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)                          ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11)||(IN12))
#define LC_MF_OR_BOOL_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)                     ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11)||(IN12)||(IN13))
#define LC_MF_OR_BOOL_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)                ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11)||(IN12)||(IN13)||(IN14))
#define LC_MF_OR_BOOL_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)           ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11)||(IN12)||(IN13)||(IN14)||(IN15))
#define LC_MF_OR_BOOL_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)      ((IN1)||(IN2)||(IN3)||(IN4)||(IN5)||(IN6)||(IN7)||(IN8)||(IN9)||(IN10)||(IN11)||(IN12)||(IN13)||(IN14)||(IN15)||(IN16))

/*                            Impl (not inlined)                     */
#define  lcfu_iec61131__OR__BOOL__2(LC_this, IN1, IN2, pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_2(IN1,IN2)

#define  lcfu_iec61131__OR__BOOL__3(LC_this, IN1, IN2, IN3,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_3(IN1,IN2,IN3)

#define  lcfu_iec61131__OR__BOOL__4(LC_this, IN1, IN2, IN3,IN4,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_4(IN1,IN2,IN3,IN4)

#define  lcfu_iec61131__OR__BOOL__5(LC_this, IN1, IN2, IN3,IN4,IN5,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_5(IN1,IN2,IN3,IN4,IN5)

#define  lcfu_iec61131__OR__BOOL__6(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_6(IN1,IN2,IN3,IN4,IN5,IN6)

#define  lcfu_iec61131__OR__BOOL__7(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)

#define  lcfu_iec61131__OR__BOOL__8(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)

#define  lcfu_iec61131__OR__BOOL__9(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)

#define  lcfu_iec61131__OR__BOOL__10(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)

#define  lcfu_iec61131__OR__BOOL__11(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)

#define  lcfu_iec61131__OR__BOOL__12(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)

#define  lcfu_iec61131__OR__BOOL__13(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)

#define  lcfu_iec61131__OR__BOOL__14(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)

#define  lcfu_iec61131__OR__BOOL__15(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)

#define  lcfu_iec61131__OR__BOOL__16(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_BOOL_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)


#define  lcfu_iec61131__OR__ANY__2(LC_this, IN1, IN2, pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_2(IN1,IN2)

#define  lcfu_iec61131__OR__ANY__3(LC_this, IN1, IN2, IN3,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_3(IN1,IN2,IN3)

#define  lcfu_iec61131__OR__ANY__4(LC_this, IN1, IN2, IN3,IN4,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_4(IN1,IN2,IN3,IN4)

#define  lcfu_iec61131__OR__ANY__5(LC_this, IN1, IN2, IN3,IN4,IN5,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_5(IN1,IN2,IN3,IN4,IN5)

#define  lcfu_iec61131__OR__ANY__6(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)

#define  lcfu_iec61131__OR__ANY__7(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)

#define  lcfu_iec61131__OR__ANY__8(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)

#define  lcfu_iec61131__OR__ANY__9(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)

#define  lcfu_iec61131__OR__ANY__10(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)

#define  lcfu_iec61131__OR__ANY__11(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)

#define  lcfu_iec61131__OR__ANY__12(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)

#define  lcfu_iec61131__OR__ANY__13(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)

#define  lcfu_iec61131__OR__ANY__14(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)

#define  lcfu_iec61131__OR__ANY__15(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)

#define  lcfu_iec61131__OR__ANY__16(LC_this, IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16,pEPDB) \
   (LC_this)->LC_VD_OR = LC_MF_OR_ANY_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)

/*                            Impl (inlined)                     */
#define  lcfu_iec61131__OR__BOOL__2__INL( IN1, IN2) \
    LC_MF_OR_BOOL_2(IN1,IN2)

#define  lcfu_iec61131__OR__BOOL__3__INL( IN1, IN2, IN3) \
    LC_MF_OR_BOOL_3(IN1,IN2,IN3)

#define  lcfu_iec61131__OR__BOOL__4__INL( IN1, IN2, IN3,IN4) \
    LC_MF_OR_BOOL_4(IN1,IN2,IN3,IN4)

#define  lcfu_iec61131__OR__BOOL__5__INL( IN1, IN2, IN3,IN4,IN5) \
    LC_MF_OR_BOOL_5(IN1,IN2,IN3,IN4,IN5)

#define  lcfu_iec61131__OR__BOOL__6__INL( IN1, IN2, IN3,IN4,IN5,IN6) \
    LC_MF_OR_BOOL_6(IN1,IN2,IN3,IN4,IN5,IN6)

#define  lcfu_iec61131__OR__BOOL__7__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7) \
    LC_MF_OR_BOOL_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)

#define  lcfu_iec61131__OR__BOOL__8__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8) \
    LC_MF_OR_BOOL_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)

#define  lcfu_iec61131__OR__BOOL__9__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9) \
    LC_MF_OR_BOOL_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)

#define  lcfu_iec61131__OR__BOOL__10__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10) \
    LC_MF_OR_BOOL_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)

#define  lcfu_iec61131__OR__BOOL__11__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11) \
    LC_MF_OR_BOOL_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)

#define  lcfu_iec61131__OR__BOOL__12__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12) \
    LC_MF_OR_BOOL_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)

#define  lcfu_iec61131__OR__BOOL__13__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13) \
    LC_MF_OR_BOOL_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)

#define  lcfu_iec61131__OR__BOOL__14__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14) \
    LC_MF_OR_BOOL_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)

#define  lcfu_iec61131__OR__BOOL__15__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15) \
    LC_MF_OR_BOOL_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)

#define  lcfu_iec61131__OR__BOOL__16__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16) \
    LC_MF_OR_BOOL_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)


#define  lcfu_iec61131__OR__ANY__2__INL( IN1, IN2) \
    LC_MF_OR_ANY_2(IN1,IN2)

#define  lcfu_iec61131__OR__ANY__3__INL( IN1, IN2, IN3) \
    LC_MF_OR_ANY_3(IN1,IN2,IN3)

#define  lcfu_iec61131__OR__ANY__4__INL( IN1, IN2, IN3,IN4) \
    LC_MF_OR_ANY_4(IN1,IN2,IN3,IN4)

#define  lcfu_iec61131__OR__ANY__5__INL( IN1, IN2, IN3,IN4,IN5) \
    LC_MF_OR_ANY_5(IN1,IN2,IN3,IN4,IN5)

#define  lcfu_iec61131__OR__ANY__6__INL( IN1, IN2, IN3,IN4,IN5,IN6) \
    LC_MF_OR_ANY_6(IN1,IN2,IN3,IN4,IN5,IN6)

#define  lcfu_iec61131__OR__ANY__7__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7) \
    LC_MF_OR_ANY_7(IN1,IN2,IN3,IN4,IN5,IN6,IN7)

#define  lcfu_iec61131__OR__ANY__8__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8) \
    LC_MF_OR_ANY_8(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8)

#define  lcfu_iec61131__OR__ANY__9__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9) \
    LC_MF_OR_ANY_9(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9)

#define  lcfu_iec61131__OR__ANY__10__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10) \
    LC_MF_OR_ANY_10(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10)

#define  lcfu_iec61131__OR__ANY__11__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11) \
    LC_MF_OR_ANY_11(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11)

#define  lcfu_iec61131__OR__ANY__12__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12) \
    LC_MF_OR_ANY_12(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12)

#define  lcfu_iec61131__OR__ANY__13__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13) \
    LC_MF_OR_ANY_13(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13)

#define  lcfu_iec61131__OR__ANY__14__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14) \
    LC_MF_OR_ANY_14(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14)

#define  lcfu_iec61131__OR__ANY__15__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15) \
    LC_MF_OR_ANY_15(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15)

#define  lcfu_iec61131__OR__ANY__16__INL( IN1, IN2, IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16) \
    LC_MF_OR_ANY_16(IN1,IN2,IN3,IN4,IN5,IN6,IN7,IN8,IN9,IN10,IN11,IN12,IN13,IN14,IN15,IN16)

#endif

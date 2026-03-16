/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function NOT for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__NOT__H
#define LC_PROT_LCFU_IEC61131__NOT__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
#define DEF_LC_TD_Function_NOT_ANY(type) \
typedef struct _LC_TD_Function_NOT__##type \
{ \
	LC_TD_BOOL LC_VD_ENO; \
	LC_TD_##type LC_VD_NOT; \
} LCCG_StructAttrib LC_TD_Function_NOT__##type;

DEF_LC_TD_Function_NOT_ANY(BOOL)
DEF_LC_TD_Function_NOT_ANY(BYTE)
DEF_LC_TD_Function_NOT_ANY(WORD)
DEF_LC_TD_Function_NOT_ANY(DWORD)
DEF_LC_TD_Function_NOT_ANY(LWORD)

/*                            Initialization Macro             */
#define LC_INIT_Function_NOT_ANY(p,type) \
{ \
	LC_INIT_##type(&((p)->LC_VD_NOT)); \
}

#define LC_INIT_Function_NOT__BOOL(p)   LC_INIT_Function_NOT_ANY(p,BOOL)
#define LC_INIT_Function_NOT__BYTE(p)   LC_INIT_Function_NOT_ANY(p,BYTE)
#define LC_INIT_Function_NOT__WORD(p)   LC_INIT_Function_NOT_ANY(p,WORD)
#define LC_INIT_Function_NOT__DWORD(p)  LC_INIT_Function_NOT_ANY(p,DWORD)
#define LC_INIT_Function_NOT__LWORD(p)  LC_INIT_Function_NOT_ANY(p,LWORD)

/* Bitwise and Boolean NOT of arguments                        */
#define LC_MF_NOT_BOOL(IN)     ((LC_TD_BOOL)(!(IN)))
#define LC_MF_NOT_ANY(IN,type) ((LC_TD_##type)~(IN))

/*                            Impl (not inlined)               */
#define  lcfu_iec61131__NOT__BOOL(LC_this, IN, pEPDB)  (LC_this)->LC_VD_NOT = LC_MF_NOT_BOOL(IN)
#define  lcfu_iec61131__NOT__BYTE(LC_this, IN, pEPDB)   (LC_this)->LC_VD_NOT = LC_MF_NOT_ANY(IN,BYTE)
#define  lcfu_iec61131__NOT__WORD(LC_this, IN, pEPDB)   (LC_this)->LC_VD_NOT = LC_MF_NOT_ANY(IN,WORD)
#define  lcfu_iec61131__NOT__DWORD(LC_this, IN, pEPDB)   (LC_this)->LC_VD_NOT = LC_MF_NOT_ANY(IN,DWORD)
#define  lcfu_iec61131__NOT__LWORD(LC_this, IN, pEPDB)   (LC_this)->LC_VD_NOT = LC_MF_NOT_ANY(IN,LWORD)

/*                            Impl (inlined)                   */
#define  lcfu_iec61131__NOT__BOOL__INL(IN)      LC_MF_NOT_BOOL(IN)
#define  lcfu_iec61131__NOT__BYTE__INL(IN)      LC_MF_NOT_ANY(IN,BYTE)
#define  lcfu_iec61131__NOT__WORD__INL(IN)      LC_MF_NOT_ANY(IN,WORD)
#define  lcfu_iec61131__NOT__DWORD__INL(IN)     LC_MF_NOT_ANY(IN,DWORD)
#define  lcfu_iec61131__NOT__LWORD__INL(IN)     LC_MF_NOT_ANY(IN,LWORD)

#endif

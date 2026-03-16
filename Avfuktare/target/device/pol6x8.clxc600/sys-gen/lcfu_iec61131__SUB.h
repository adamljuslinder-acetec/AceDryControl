/* Copyright (C) logi.cals GmbH. All rights reserved.             */

/*
** TASK :: C implementation of function SUB for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__SUB__H
#define LC_PROT_LCFU_IEC61131__SUB__H

#include <LC3CGBase.h>

/*                            Typedefs                            */
#define DEF_LC_TD_Function_SUB_ANY(type)   \
typedef struct _LC_TD_Function_SUB__##type \
{                                          \
	LC_TD_BOOL LC_VD_ENO;                  \
	LC_TD_##type LC_VD_SUB;                \
} LCCG_StructAttrib LC_TD_Function_SUB__##type;

DEF_LC_TD_Function_SUB_ANY(SINT)
DEF_LC_TD_Function_SUB_ANY(INT)
DEF_LC_TD_Function_SUB_ANY(DINT)
DEF_LC_TD_Function_SUB_ANY(LINT)
DEF_LC_TD_Function_SUB_ANY(USINT)
DEF_LC_TD_Function_SUB_ANY(UINT)
DEF_LC_TD_Function_SUB_ANY(UDINT)
DEF_LC_TD_Function_SUB_ANY(ULINT)
DEF_LC_TD_Function_SUB_ANY(REAL)
DEF_LC_TD_Function_SUB_ANY(LREAL)
DEF_LC_TD_Function_SUB_ANY(TIME)

/*                      Initialization Macro                      */
#define LC_INIT_Function_SUB_ANY(p,type) \
{                                        \
	LC_INIT_##type(&((p)->LC_VD_SUB));   \
}

#define LC_INIT_Function_SUB__SINT(p)   LC_INIT_Function_SUB_ANY(p,SINT)
#define LC_INIT_Function_SUB__INT(p)    LC_INIT_Function_SUB_ANY(p,INT)
#define LC_INIT_Function_SUB__DINT(p)   LC_INIT_Function_SUB_ANY(p,DINT)
#define LC_INIT_Function_SUB__LINT(p)   LC_INIT_Function_SUB_ANY(p,LINT)
#define LC_INIT_Function_SUB__USINT(p)  LC_INIT_Function_SUB_ANY(p,USINT)
#define LC_INIT_Function_SUB__UINT(p)   LC_INIT_Function_SUB_ANY(p,UINT)
#define LC_INIT_Function_SUB__UDINT(p)  LC_INIT_Function_SUB_ANY(p,UDINT)
#define LC_INIT_Function_SUB__ULINT(p)  LC_INIT_Function_SUB_ANY(p,ULINT)
#define LC_INIT_Function_SUB__REAL(p)   LC_INIT_Function_SUB_ANY(p,REAL)
#define LC_INIT_Function_SUB__LREAL(p)  LC_INIT_Function_SUB_ANY(p,LREAL)
#define LC_INIT_Function_SUB__TIME(p)   LC_INIT_Function_SUB_ANY(p,TIME)

/*            Implementation of helper macros (inlined)           */
#define LC_MF_SUB_ANY(IN1,IN2) ((IN1)-(IN2))

/*                       Impl (not inlined)                       */
#define  lcfu_iec61131__SUB__ANY(LC_this, IN1, IN2, pEPDB) \
	(LC_this)->LC_VD_SUB = LC_MF_SUB_ANY(IN1,IN2)

#endif

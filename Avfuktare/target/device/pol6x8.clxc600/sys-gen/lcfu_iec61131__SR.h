/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block SR for RTS compatible Systems.
*/

#ifndef LC_PROT_IEC61131__SR__H
#define LC_PROT_IEC61131__SR__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_SR
{
  LC_TD_BOOL LC_VD_R;
  LC_TD_BOOL LC_VD_S1;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_Q1;
} LCCG_StructAttrib LC_TD_FunctionBlock_SR;

/*                            Initialization Macro (cold start) */
#define LC_INIT_FunctionBlock_SR(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_S1)); \
  LC_INIT_BOOL(&((p)->LC_VD_R)); \
  LC_INIT_BOOL(&((p)->LC_VD_Q1)); \
}

/*                            Initialization Macro (warm start) */
#define LC_WINIT_FunctionBlock_SR(p,RF) { if (RF==0) LC_INIT_FunctionBlock_SR(p) }


/*                            Impl (not inlined)               */
#define lcfu_iec61131__SR(LC_this, pEPDB) \
        (LC_this)->LC_VD_Q1 = ((LC_this)->LC_VD_S1) || (!((LC_this)->LC_VD_R) && (LC_this)->LC_VD_Q1)
        
/*                            Nameserver definitions           */
#ifdef LC3_CG_GENERATE_RTS2_NAMESERVER
#define LCNS_EL_INI___SR \
	{\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"S1", \
			0, \
			offsetof(LC_TD_FunctionBlock_SR,LC_VD_S1), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_INPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"R", \
			0, \
			offsetof(LC_TD_FunctionBlock_SR,LC_VD_R), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_INPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"ENO", \
			0, \
			offsetof(LC_TD_FunctionBlock_SR,LC_VD_ENO), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_OUTPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
		,\
		{\
			sizeof(RTTypeNS_ElementNode), \
			"Q1", \
			0, \
			offsetof(LC_TD_FunctionBlock_SR,LC_VD_Q1), \
			sizeof(LC_TD_BOOL), \
			LCOOS_VAREXP_VAR_OUTPUT, \
			NULL, \
			LCOOS_VAREXP_BOOL, \
			"BOOL", \
			NULL, \
			NULL, \
			NULL, \
			NULL, \
			0 \
		}\
	}
#define LCNS_EL_CNT___SR 4
#endif /* LC3_CG_GENERATE_RTS2_NAMESERVER */
        
#endif

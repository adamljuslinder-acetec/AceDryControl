#ifndef LC_PROT_LCFU___AOANALOGVALUE__H
#define LC_PROT_LCFU___AOANALOGVALUE__H

#include <LC3CGBase.h>
#include <lcdt___aoanalogvalue_instancedata.h>
#include <lcdt___dt_status.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AOANALOGVALUE
{
  LC_TD_REAL LC_VD_VAL1;
  LC_TD_BOOL LC_VD_VAL1EN;
  LC_TD_REAL LC_VD_VAL2;
  LC_TD_BOOL LC_VD_VAL2EN;
  LC_TD_REAL LC_VD_VAL3;
  LC_TD_BOOL LC_VD_VAL3EN;
  LC_TD_REAL LC_VD_VAL4;
  LC_TD_BOOL LC_VD_VAL4EN;
  LC_TD_REAL LC_VD_VAL5;
  LC_TD_BOOL LC_VD_VAL5EN;
  LC_TD_BOOL LC_VD_DISBL;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_REAL LC_VD_PRVAL;
  LC_TD_DataType_DT_STATUS LC_VD_STATUS;
  LC_TD_REAL LC_VD_LOW;
  LC_TD_REAL LC_VD_HIGH;
  LC_TD_DINT LC_VD_LTIMELIMIT;
  LC_TD_WORD LC_VD_WSTATE;
  LC_TD_DWORD LC_VD_PINITDATA;
} LCCG_StructAttrib LC_TD_FunctionBlock_AOANALOGVALUE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AOANALOGVALUE(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_VAL1)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL1EN)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL2)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL2EN)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL3)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL3EN)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL4)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL4EN)); \
  LC_INIT_REAL(&((p)->LC_VD_VAL5)); \
  LC_INIT_BOOL(&((p)->LC_VD_VAL5EN)); \
  LC_INIT_BOOL(&((p)->LC_VD_DISBL)); \
  LC_INIT_UINT(&((p)->LC_VD_DB)); \
  LC_INIT_REAL(&((p)->LC_VD_PRVAL)); \
  LC_INIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS)); \
  LC_INIT_REAL(&((p)->LC_VD_LOW)); \
  LC_INIT_REAL(&((p)->LC_VD_HIGH)); \
  LC_INIT_DINT(&((p)->LC_VD_LTIMELIMIT)); \
  LC_INIT_WORD(&((p)->LC_VD_WSTATE)); \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AOANALOGVALUE(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_VAL1),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL1EN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL2),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL2EN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL3),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL3EN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL4),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL4EN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_VAL5),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_VAL5EN),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_DISBL),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DB),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_PRVAL),RF); \
  LC_WINIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_LOW),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_HIGH),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_LTIMELIMIT),RF); \
  LC_WINIT_WORD(&((p)->LC_VD_WSTATE),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
}

/*                            Prototype                        */
void  lcfu___AOANALOGVALUE__11(LC_TD_FunctionBlock_AOANALOGVALUE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
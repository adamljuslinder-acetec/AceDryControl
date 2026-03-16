#ifndef LC_PROT_LCFU___AOANALOGINPUT__H
#define LC_PROT_LCFU___AOANALOGINPUT__H

#include <LC3CGBase.h>
#include <lcdt___aoanaloginput_instancedata.h>
#include <lcdt___dt_status.h>
#include <lcdt___enu_reliability.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AOANALOGINPUT
{
  LC_TD_REAL LC_VD_TVAL;
  LC_TD_DataType_ENU_RELIABILITY LC_VD_TREL;
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
} LCCG_StructAttrib LC_TD_FunctionBlock_AOANALOGINPUT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AOANALOGINPUT(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_TVAL)); \
  (p)->LC_VD_TREL = LC_ED__ENU_Reliability__NoFault; \
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
#define LC_WINIT_FunctionBlock_AOANALOGINPUT(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_TVAL),RF); \
  if (RF==0) (p)->LC_VD_TREL = LC_ED__ENU_Reliability__NoFault; \
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
void  lcfu___AOANALOGINPUT__3(LC_TD_FunctionBlock_AOANALOGINPUT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
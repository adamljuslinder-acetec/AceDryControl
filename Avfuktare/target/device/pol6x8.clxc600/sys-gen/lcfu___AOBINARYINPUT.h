#ifndef LC_PROT_LCFU___AOBINARYINPUT__H
#define LC_PROT_LCFU___AOBINARYINPUT__H

#include <LC3CGBase.h>
#include <lcdt___aobinaryinput_instancedata.h>
#include <lcdt___dt_status.h>
#include <lcdt___enu_reliability.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AOBINARYINPUT
{
  LC_TD_BOOL LC_VD_TVAL;
  LC_TD_DataType_ENU_RELIABILITY LC_VD_TREL;
  LC_TD_BOOL LC_VD_TENBL;
  LC_TD_BOOL LC_VD_DISBL;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_BOOL LC_VD_PRVAL;
  LC_TD_DataType_DT_STATUS LC_VD_STATUS;
  LC_TD_DINT LC_VD_LTIMELIMIT;
  LC_TD_WORD LC_VD_WSTATE;
  LC_TD_DWORD LC_VD_PINITDATA;
  LC_TD_DINT LC_VD_LELAPSEDTIME;
  LC_TD_INT LC_VD_IFRACTION;
} LCCG_StructAttrib LC_TD_FunctionBlock_AOBINARYINPUT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AOBINARYINPUT(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_TVAL)); \
  (p)->LC_VD_TREL = LC_ED__ENU_Reliability__NoFault; \
  (p)->LC_VD_TENBL = LC_EL_true; \
  LC_INIT_BOOL(&((p)->LC_VD_DISBL)); \
  LC_INIT_UINT(&((p)->LC_VD_DB)); \
  LC_INIT_BOOL(&((p)->LC_VD_PRVAL)); \
  LC_INIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS)); \
  LC_INIT_DINT(&((p)->LC_VD_LTIMELIMIT)); \
  LC_INIT_WORD(&((p)->LC_VD_WSTATE)); \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
  LC_INIT_DINT(&((p)->LC_VD_LELAPSEDTIME)); \
  LC_INIT_INT(&((p)->LC_VD_IFRACTION)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AOBINARYINPUT(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_TVAL),RF); \
  if (RF==0) (p)->LC_VD_TREL = LC_ED__ENU_Reliability__NoFault; \
  if (RF==0) (p)->LC_VD_TENBL = LC_EL_true; \
  LC_WINIT_BOOL(&((p)->LC_VD_DISBL),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DB),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_PRVAL),RF); \
  LC_WINIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_LTIMELIMIT),RF); \
  LC_WINIT_WORD(&((p)->LC_VD_WSTATE),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_LELAPSEDTIME),RF); \
  LC_WINIT_INT(&((p)->LC_VD_IFRACTION),RF); \
}

/*                            Prototype                        */
void  lcfu___AOBINARYINPUT__4(LC_TD_FunctionBlock_AOBINARYINPUT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
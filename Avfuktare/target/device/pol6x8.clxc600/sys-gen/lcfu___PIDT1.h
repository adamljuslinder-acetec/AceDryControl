#ifndef LC_PROT_LCFU___PIDT1__H
#define LC_PROT_LCFU___PIDT1__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_PIDT1
{
  LC_TD_REAL LC_VD_E;

  LC_TD_REAL LC_VD_KP;

  LC_TD_REAL LC_VD_KV;

  LC_TD_REAL LC_VD_T1;

  LC_TD_REAL LC_VD_TN;

  LC_TD_REAL LC_VD_YHAND;

  LC_TD_BOOL LC_VD_AUTO;

  LC_TD_REAL LC_VD_BWO;

  LC_TD_REAL LC_VD_BWU;

  LC_TD_BOOL LC_VD_ENO;

  LC_TD_REAL LC_VD_A;

  LC_TD_REAL LC_VD_P;

  LC_TD_REAL LC_VD_I;

  LC_TD_REAL LC_VD_D;

  LC_TD_BOOL LC_VD_BO;

  LC_TD_BOOL LC_VD_BU;

  LC_TD_BOOL LC_VD_BIN_IA[2];

  LC_TD_BOOL LC_VD_BIN_NF_ZYKL;

  LC_TD_REAL LC_VD_FLT_EOLD;

  LC_TD_DWORD LC_VD_TIMER;

} LCCG_StructAttrib LC_TD_FunctionBlock_PIDT1;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_PIDT1(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_E)); \
  LC_INIT_REAL(&((p)->LC_VD_KP)); \
  LC_INIT_REAL(&((p)->LC_VD_KV)); \
  LC_INIT_REAL(&((p)->LC_VD_T1)); \
  LC_INIT_REAL(&((p)->LC_VD_TN)); \
  LC_INIT_REAL(&((p)->LC_VD_YHAND)); \
  LC_INIT_BOOL(&((p)->LC_VD_AUTO)); \
  LC_INIT_REAL(&((p)->LC_VD_BWO)); \
  LC_INIT_REAL(&((p)->LC_VD_BWU)); \
  LC_INIT_REAL(&((p)->LC_VD_A)); \
  LC_INIT_REAL(&((p)->LC_VD_P)); \
  LC_INIT_REAL(&((p)->LC_VD_I)); \
  LC_INIT_REAL(&((p)->LC_VD_D)); \
  LC_INIT_BOOL(&((p)->LC_VD_BO)); \
  LC_INIT_BOOL(&((p)->LC_VD_BU)); \
  LC_INIT_ARRAY(&((p)->LC_VD_BIN_IA),BOOL,2); \
  (p)->LC_VD_BIN_NF_ZYKL = LC_EL_false; \
  LC_INIT_REAL(&((p)->LC_VD_FLT_EOLD)); \
  LC_INIT_DWORD(&((p)->LC_VD_TIMER)); \
}

#define LC_INIT_DataType_PIDT1 LC_INIT_FunctionBlock_PIDT1

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_PIDT1(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_E),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_KP),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_KV),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_T1),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TN),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_YHAND),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_AUTO),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_BWO),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_BWU),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_A),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_P),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_I),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_D),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_BO),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_BU),RF); \
  LC_WINIT_ARRAY(&((p)->LC_VD_BIN_IA),BOOL,2,RF); \
  if (RF==0) (p)->LC_VD_BIN_NF_ZYKL = LC_EL_false; \
  LC_WINIT_REAL(&((p)->LC_VD_FLT_EOLD),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_TIMER),RF); \
}

#define LC_WINIT_DataType_PIDT1 LC_WINIT_FunctionBlock_PIDT1

/*                            Prototype                        */
void  lcfu___PIDT1(LC_TD_FunctionBlock_PIDT1* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif

#ifndef LC_PROT_LCFU___AITOREAL__H
#define LC_PROT_LCFU___AITOREAL__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AITOREAL
{
  LC_TD_INT LC_VD_AE;

  LC_TD_INT LC_VD_EU;

  LC_TD_REAL LC_VD_AU;

  LC_TD_INT LC_VD_EO;

  LC_TD_REAL LC_VD_AO;

  LC_TD_REAL LC_VD_STG;

  LC_TD_BOOL LC_VD_ENO;

  LC_TD_REAL LC_VD_AW;

  LC_TD_BOOL LC_VD_STOE;

} LCCG_StructAttrib LC_TD_FunctionBlock_AITOREAL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AITOREAL(p) \
{ \
  LC_INIT_INT(&((p)->LC_VD_AE)); \
  LC_INIT_INT(&((p)->LC_VD_EU)); \
  LC_INIT_REAL(&((p)->LC_VD_AU)); \
  LC_INIT_INT(&((p)->LC_VD_EO)); \
  LC_INIT_REAL(&((p)->LC_VD_AO)); \
  LC_INIT_REAL(&((p)->LC_VD_STG)); \
  LC_INIT_REAL(&((p)->LC_VD_AW)); \
  LC_INIT_BOOL(&((p)->LC_VD_STOE)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AITOREAL(p,RF) \
{ \
  LC_WINIT_INT(&((p)->LC_VD_AE),RF); \
  LC_WINIT_INT(&((p)->LC_VD_EU),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AU),RF); \
  LC_WINIT_INT(&((p)->LC_VD_EO),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AO),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_STG),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_AW),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_STOE),RF); \
}

/*                            Prototype                        */
void  lcfu___AITOREAL(LC_TD_FunctionBlock_AITOREAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
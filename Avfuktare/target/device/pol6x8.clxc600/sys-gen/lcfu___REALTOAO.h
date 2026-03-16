#ifndef LC_PROT_LCFU___REALTOAO__H
#define LC_PROT_LCFU___REALTOAO__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_REALTOAO
{
  LC_TD_REAL LC_VD_EW;

  LC_TD_REAL LC_VD_EU;

  LC_TD_INT LC_VD_AU;

  LC_TD_REAL LC_VD_EO;

  LC_TD_INT LC_VD_AO;

  LC_TD_REAL LC_VD_STG;

  LC_TD_BOOL LC_VD_ENO;

  LC_TD_INT LC_VD_AA;

  LC_TD_BOOL LC_VD_OV;

} LCCG_StructAttrib LC_TD_FunctionBlock_REALTOAO;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_REALTOAO(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_EW)); \
  LC_INIT_REAL(&((p)->LC_VD_EU)); \
  LC_INIT_INT(&((p)->LC_VD_AU)); \
  LC_INIT_REAL(&((p)->LC_VD_EO)); \
  LC_INIT_INT(&((p)->LC_VD_AO)); \
  LC_INIT_REAL(&((p)->LC_VD_STG)); \
  LC_INIT_INT(&((p)->LC_VD_AA)); \
  LC_INIT_BOOL(&((p)->LC_VD_OV)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_REALTOAO(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_EW),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_EU),RF); \
  LC_WINIT_INT(&((p)->LC_VD_AU),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_EO),RF); \
  LC_WINIT_INT(&((p)->LC_VD_AO),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_STG),RF); \
  LC_WINIT_INT(&((p)->LC_VD_AA),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OV),RF); \
}

/*                            Prototype                        */
void  lcfu___REALTOAO(LC_TD_FunctionBlock_REALTOAO* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
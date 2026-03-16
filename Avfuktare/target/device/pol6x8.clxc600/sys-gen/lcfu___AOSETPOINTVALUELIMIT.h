#ifndef LC_PROT_LCFU___AOSETPOINTVALUELIMIT__H
#define LC_PROT_LCFU___AOSETPOINTVALUELIMIT__H

#include <LC3CGBase.h>
#include <lcdt___aosetpointvaluelimit_instancedata.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AOSETPOINTVALUELIMIT
{
  LC_TD_REAL LC_VD_LOW;
  LC_TD_REAL LC_VD_HIGH;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_REAL LC_VD_PRVAL;
  LC_TD_DWORD LC_VD_PINITDATA;
} LCCG_StructAttrib LC_TD_FunctionBlock_AOSETPOINTVALUELIMIT;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AOSETPOINTVALUELIMIT(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_LOW)); \
  LC_INIT_REAL(&((p)->LC_VD_HIGH)); \
  LC_INIT_UINT(&((p)->LC_VD_DB)); \
  LC_INIT_REAL(&((p)->LC_VD_PRVAL)); \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AOSETPOINTVALUELIMIT(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_LOW),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_HIGH),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DB),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_PRVAL),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
}

/*                            Prototype                        */
void  lcfu___AOSETPOINTVALUELIMIT(LC_TD_FunctionBlock_AOSETPOINTVALUELIMIT* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
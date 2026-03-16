#ifndef LC_PROT_LCFU___AOSETPOINTMULTISTATE__H
#define LC_PROT_LCFU___AOSETPOINTMULTISTATE__H

#include <LC3CGBase.h>
#include <lcdt___aosetpointmultistate_instancedata.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AOSETPOINTMULTISTATE
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_UINT LC_VD_PRVAL;
  LC_TD_DWORD LC_VD_PINITDATA;
} LCCG_StructAttrib LC_TD_FunctionBlock_AOSETPOINTMULTISTATE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AOSETPOINTMULTISTATE(p) \
{ \
  LC_INIT_UINT(&((p)->LC_VD_DB)); \
  LC_INIT_UINT(&((p)->LC_VD_PRVAL)); \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AOSETPOINTMULTISTATE(p,RF) \
{ \
  LC_WINIT_UINT(&((p)->LC_VD_DB),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_PRVAL),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
}

/*                            Prototype                        */
void  lcfu___AOSETPOINTMULTISTATE(LC_TD_FunctionBlock_AOSETPOINTMULTISTATE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
#ifndef LC_PROT_LCFU___AODIAGNOSTIC__H
#define LC_PROT_LCFU___AODIAGNOSTIC__H

#include <LC3CGBase.h>
#include <lcdt___aodiagnostic_instancedata.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AODIAGNOSTIC
{
  LC_TD_BOOL LC_VD_RESET;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_UINT LC_VD_ERRID;
  LcCgChar LC_VD_ERRTXT[40];
  LC_TD_UINT LC_VD_AOTYPE;
  LcCgChar LC_VD_AONAME[40];
  LC_TD_BOOL LC_VD_STARTOK;
  LC_TD_DWORD LC_VD_PINITDATA;
} LCCG_StructAttrib LC_TD_FunctionBlock_AODIAGNOSTIC;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AODIAGNOSTIC(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_RESET)); \
  LC_INIT_UINT(&((p)->LC_VD_DB)); \
  LC_INIT_UINT(&((p)->LC_VD_ERRID)); \
  LC_INIT_SIZED_STRING(&((p)->LC_VD_ERRTXT)); \
  LC_INIT_UINT(&((p)->LC_VD_AOTYPE)); \
  LC_INIT_SIZED_STRING(&((p)->LC_VD_AONAME)); \
  LC_INIT_BOOL(&((p)->LC_VD_STARTOK)); \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AODIAGNOSTIC(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_RESET),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_DB),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_ERRID),RF); \
  LC_WINIT_SIZED_STRING(&((p)->LC_VD_ERRTXT),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_AOTYPE),RF); \
  LC_WINIT_SIZED_STRING(&((p)->LC_VD_AONAME),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_STARTOK),RF); \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
}

/*                            Prototype                        */
void  lcfu___AODIAGNOSTIC(LC_TD_FunctionBlock_AODIAGNOSTIC* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif

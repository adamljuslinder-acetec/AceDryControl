#ifndef LC_PROT_LCFU___AODEVICE__H
#define LC_PROT_LCFU___AODEVICE__H

#include <LC3CGBase.h>
#include <lcdt___aodevice_instancedata.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_AODEVICE
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_DB;
  LC_TD_DWORD LC_VD_PINITDATA;
} LCCG_StructAttrib LC_TD_FunctionBlock_AODEVICE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_AODEVICE(p) \
{ \
  (p)->LC_VD_DB = (LC_TD_UINT)65535; \
  LC_INIT_DWORD(&((p)->LC_VD_PINITDATA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_AODEVICE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_DB = (LC_TD_UINT)65535; \
  LC_WINIT_DWORD(&((p)->LC_VD_PINITDATA),RF); \
}

/*                            Prototype                        */
void  lcfu___AODEVICE(LC_TD_FunctionBlock_AODEVICE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
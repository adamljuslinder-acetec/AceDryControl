#ifndef LC_PROT_LCFU___STATUSEVAL__H
#define LC_PROT_LCFU___STATUSEVAL__H

#include <LC3CGBase.h>
#include <lcdt___dt_status.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_STATUSEVAL
{
  LC_TD_DataType_DT_STATUS LC_VD_STATUS;
  LC_TD_UINT LC_VD_SELECT;
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_FAULT;
  LC_TD_BOOL LC_VD_MULTIFAULT;
  LC_TD_BOOL LC_VD_OFFNORMAL;
  LC_TD_BOOL LC_VD_LLOW;
  LC_TD_BOOL LC_VD_LHIGH;
  LC_TD_BOOL LC_VD_OUTOFSERVICE;
  LC_TD_BOOL LC_VD_OVERRIDEN;
} LCCG_StructAttrib LC_TD_FunctionBlock_STATUSEVAL;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_STATUSEVAL(p) \
{ \
  LC_INIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS)); \
  LC_INIT_UINT(&((p)->LC_VD_SELECT)); \
  LC_INIT_BOOL(&((p)->LC_VD_FAULT)); \
  LC_INIT_BOOL(&((p)->LC_VD_MULTIFAULT)); \
  LC_INIT_BOOL(&((p)->LC_VD_OFFNORMAL)); \
  LC_INIT_BOOL(&((p)->LC_VD_LLOW)); \
  LC_INIT_BOOL(&((p)->LC_VD_LHIGH)); \
  LC_INIT_BOOL(&((p)->LC_VD_OUTOFSERVICE)); \
  LC_INIT_BOOL(&((p)->LC_VD_OVERRIDEN)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_STATUSEVAL(p,RF) \
{ \
  LC_WINIT_DataType_DT_STATUS(&((p)->LC_VD_STATUS),RF); \
  LC_WINIT_UINT(&((p)->LC_VD_SELECT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_FAULT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_MULTIFAULT),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OFFNORMAL),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_LLOW),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_LHIGH),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OUTOFSERVICE),RF); \
  LC_WINIT_BOOL(&((p)->LC_VD_OVERRIDEN),RF); \
}

/*                            Prototype                        */
void  lcfu___STATUSEVAL__2(LC_TD_FunctionBlock_STATUSEVAL* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif

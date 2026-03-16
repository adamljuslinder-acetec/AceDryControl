#ifndef LC_PROT_LCFU___PTNITOTEMP__H
#define LC_PROT_LCFU___PTNITOTEMP__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_PTNITOTEMP
{
  LC_TD_DINT LC_VD_XI;

  LC_TD_UINT LC_VD__TYPE;

  LC_TD_DINT LC_VD_XID;

  LC_TD_BOOL LC_VD_ENO;

  LC_TD_REAL LC_VD_TEMP;

  LC_TD_DINT LC_VD_DIOLDVALUE;

} LCCG_StructAttrib LC_TD_FunctionBlock_PTNITOTEMP;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_PTNITOTEMP(p) \
{ \
  LC_INIT_DINT(&((p)->LC_VD_XI)); \
  LC_INIT_UINT(&((p)->LC_VD__TYPE)); \
  LC_INIT_DINT(&((p)->LC_VD_XID)); \
  LC_INIT_REAL(&((p)->LC_VD_TEMP)); \
  (p)->LC_VD_DIOLDVALUE = (LC_TD_DINT)2147483647L; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_PTNITOTEMP(p,RF) \
{ \
  LC_WINIT_DINT(&((p)->LC_VD_XI),RF); \
  LC_WINIT_UINT(&((p)->LC_VD__TYPE),RF); \
  LC_WINIT_DINT(&((p)->LC_VD_XID),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_TEMP),RF); \
  if (RF==0) (p)->LC_VD_DIOLDVALUE = (LC_TD_DINT)2147483647L; \
}

/*                            Prototype                        */
void  lcfu___PTNITOTEMP(LC_TD_FunctionBlock_PTNITOTEMP* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
#ifndef LC_PROT_LCFU___ABSHUMIDITY__H
#define LC_PROT_LCFU___ABSHUMIDITY__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_FunctionBlock_ABSHUMIDITY
{
  LC_TD_REAL LC_VD_T;

  LC_TD_REAL LC_VD_F;

  LC_TD_BOOL LC_VD_ENO;

  LC_TD_REAL LC_VD_FA;

} LCCG_StructAttrib LC_TD_FunctionBlock_ABSHUMIDITY;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_FunctionBlock_ABSHUMIDITY(p) \
{ \
  LC_INIT_REAL(&((p)->LC_VD_T)); \
  LC_INIT_REAL(&((p)->LC_VD_F)); \
  LC_INIT_REAL(&((p)->LC_VD_FA)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_FunctionBlock_ABSHUMIDITY(p,RF) \
{ \
  LC_WINIT_REAL(&((p)->LC_VD_T),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_F),RF); \
  LC_WINIT_REAL(&((p)->LC_VD_FA),RF); \
}

/*                            Prototype                        */
void  lcfu___ABSHUMIDITY(LC_TD_FunctionBlock_ABSHUMIDITY* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
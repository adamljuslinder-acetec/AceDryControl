#ifndef __LC32_C_AITOREAL_H__
#define __LC32_C_AITOREAL_H__
#include <LC32Compatibility.h>

/*@#@
IR:1045775220 TR:1045775220 GR:1045775220 SR:1045775220 PCR:1045775220 FWR:500.0 113:AItoREAL
@#@*/
#ifndef LC_PROT_AITOREAL_H
#define LC_PROT_AITOREAL_H

/*                Typedefs                    */

typedef struct _LC_TD_AItoREAL_ENO
{
  LC_TD_INT AE;
  LC_TD_INT EU;
  LC_TD_REAL AU;
  LC_TD_INT EO;
  LC_TD_REAL AO;
  LC_TD_REAL STG;
  LC_TD_BOOL ENO;
  LC_TD_REAL AW;
  LC_TD_BOOL STOE;
} LCCG_StructAttrib LC_TD_AItoREAL_ENO;

/*                Prototypes                  */

void LC_fv_AItoREAL_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_AItoREAL_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_AItoREAL_ENO,0,0));


#endif
#endif

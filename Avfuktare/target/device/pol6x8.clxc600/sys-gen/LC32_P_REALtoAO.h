#ifndef __LC32_C_REALTOAO_H__
#define __LC32_C_REALTOAO_H__
#include <LC32Compatibility.h>

/*@#@
IR:1045775216 TR:1045775216 GR:1045775216 SR:1045775216 PCR:1045775216 FWR:500.0 113:REALtoAO
@#@*/
#ifndef LC_PROT_REALTOAO_H
#define LC_PROT_REALTOAO_H

/*                Typedefs                    */

typedef struct _LC_TD_REALtoAO_ENO
{
  LC_TD_REAL EW;
  LC_TD_REAL EU;
  LC_TD_INT AU;
  LC_TD_REAL EO;
  LC_TD_INT AO;
  LC_TD_REAL STG;
  LC_TD_BOOL ENO;
  LC_TD_INT AA;
  LC_TD_BOOL OV;
} LCCG_StructAttrib LC_TD_REALtoAO_ENO;

/*                Prototypes                  */

void LC_fv_REALtoAO_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_REALtoAO_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_REALtoAO_ENO,0,0));


#endif
#endif

#ifndef __LC32_C_PTNITOTEMP_H__
#define __LC32_C_PTNITOTEMP_H__
#include <LC32Compatibility.h>

/*@#@
IR:1194372295 TR:1194368899 GR:1045775220 SR:1045775220 PCR:1194372295 FWR:500.0 113:PTNItoTemp
@#@*/
#ifndef LC_PROT_PTNITOTEMP_H
#define LC_PROT_PTNITOTEMP_H

/*                Typedefs                    */

typedef struct _LC_TD_PTNItoTemp_ENO
{
  LC_TD_DINT XI;
  LC_TD_UINT Type;
  LC_TD_DINT XID;
  LC_TD_BOOL ENO;
  LC_TD_REAL TEMP;
  LC_TD_DINT diOldValue;
} LCCG_StructAttrib LC_TD_PTNItoTemp_ENO;

/*                Prototypes                  */

void LC_fv_PTNItoTemp_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_PTNItoTemp_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_PTNItoTemp_ENO,12004,122));


#endif
#endif

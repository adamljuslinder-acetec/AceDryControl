#ifndef __LC32_C_ABSHUMIDITY_H__
#define __LC32_C_ABSHUMIDITY_H__
#include <LC32Compatibility.h>

/*@#@
IR:1045775271 TR:1045775271 GR:1045775271 SR:1045775271 PCR:1045775271 FWR:500.0 113:ABSHumidity
@#@*/
#ifndef LC_PROT_ABSHUMIDITY_H
#define LC_PROT_ABSHUMIDITY_H

/*                Typedefs                    */

typedef struct _LC_TD_ABSHumidity_ENO
{
  LC_TD_REAL T;
  LC_TD_REAL F;
  LC_TD_BOOL ENO;
  LC_TD_REAL FA;
} LCCG_StructAttrib LC_TD_ABSHumidity_ENO;

/*                Prototypes                  */

void LC_fv_ABSHumidity_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_ABSHumidity_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_ABSHumidity_ENO,0,0));


#endif
#endif

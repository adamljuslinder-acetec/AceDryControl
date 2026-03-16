#ifndef __LC32_C_AOBINARYINPUT_H__
#define __LC32_C_AOBINARYINPUT_H__
#include <LC32Compatibility.h>

/*@#@
IR:1179150170 TR:1273169362 GR:1048614815 SR:1273169362 PCR:1273169362 FWR:500.0 113:aoBinaryInput
IR:315550800 TR:1175107376 GR:315550800 SR:315550800 PCR:1175107376 FWR:500.0 0:AutomationObjects\DataTypes\ENU_Reliability
IR:315550800 TR:1174665438 GR:315550800 SR:315550800 PCR:1174665438 FWR:500.0 0:AutomationObjects\DataTypes\DT_Status
@#@*/
#ifndef LC_PROT_AOBINARYINPUT_H
#define LC_PROT_AOBINARYINPUT_H

/*                Typedefs                    */

typedef struct _LC_TD_aoBinaryInput_ENO
{
  LC_TD_BOOL TVal;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ TRel;
  LC_TD_BOOL TEnbl;
  LC_TD_BOOL Disbl;
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_BOOL PrVal;
  LC_TD_AutomationObjectsODataTypesODT_Status_8hl_ Status;
  LC_TD_DINT lTimeLimit;
  LC_TD_WORD wState;
  LC_TD_DWORD pInitData;
  LC_TD_DINT lElapsedTime;
  LC_TD_INT iFraction;
} LCCG_StructAttrib LC_TD_aoBinaryInput_ENO;

/*                Prototypes                  */

void LC_fv_aoBinaryInput_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoBinaryInput_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoBinaryInput_ENO,10007,122));


#endif
#endif

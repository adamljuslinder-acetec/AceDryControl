#ifndef __LC32_C_AOANALOGINPUT_H__
#define __LC32_C_AOANALOGINPUT_H__
#include <LC32Compatibility.h>

/*@#@
IR:1178829316 TR:1273169292 GR:1048614815 SR:1273169292 PCR:1273169292 FWR:500.0 113:aoAnalogInput
IR:315550800 TR:1175107376 GR:315550800 SR:315550800 PCR:1175107376 FWR:500.0 0:AutomationObjects\DataTypes\ENU_Reliability
IR:315550800 TR:1174665438 GR:315550800 SR:315550800 PCR:1174665438 FWR:500.0 0:AutomationObjects\DataTypes\DT_Status
@#@*/
#ifndef LC_PROT_AOANALOGINPUT_H
#define LC_PROT_AOANALOGINPUT_H

/*                Typedefs                    */

typedef struct _LC_TD_aoAnalogInput_ENO
{
  LC_TD_REAL TVal;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ TRel;
  LC_TD_BOOL Disbl;
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_REAL PrVal;
  LC_TD_AutomationObjectsODataTypesODT_Status_8hl_ Status;
  LC_TD_REAL Low;
  LC_TD_REAL High;
  LC_TD_DINT lTimeLimit;
  LC_TD_WORD wState;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoAnalogInput_ENO;

/*                Prototypes                  */

void LC_fv_aoAnalogInput_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoAnalogInput_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoAnalogInput_ENO,10000,122));


#endif
#endif

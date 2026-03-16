#ifndef __LC32_C_AOANALOGVALUE_H__
#define __LC32_C_AOANALOGVALUE_H__
#include <LC32Compatibility.h>

/*@#@
IR:1179150148 TR:1179150148 GR:1048614815 SR:1048614815 PCR:1179150148 FWR:500.0 113:aoAnalogValue
IR:315550800 TR:1174665438 GR:315550800 SR:315550800 PCR:1174665438 FWR:500.0 0:AutomationObjects\DataTypes\DT_Status
@#@*/
#ifndef LC_PROT_AOANALOGVALUE_H
#define LC_PROT_AOANALOGVALUE_H

/*                Typedefs                    */

typedef struct _LC_TD_aoAnalogValue_ENO
{
  LC_TD_REAL Val1;
  LC_TD_BOOL Val1EN;
  LC_TD_REAL Val2;
  LC_TD_BOOL Val2EN;
  LC_TD_REAL Val3;
  LC_TD_BOOL Val3EN;
  LC_TD_REAL Val4;
  LC_TD_BOOL Val4EN;
  LC_TD_REAL Val5;
  LC_TD_BOOL Val5EN;
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
} LCCG_StructAttrib LC_TD_aoAnalogValue_ENO;

/*                Prototypes                  */

void LC_fv_aoAnalogValue_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoAnalogValue_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoAnalogValue_ENO,10000,122));


#endif
#endif

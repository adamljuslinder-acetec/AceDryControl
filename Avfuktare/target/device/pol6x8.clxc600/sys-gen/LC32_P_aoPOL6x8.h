#ifndef __LC32_C_AOPOL6X8_H__
#define __LC32_C_AOPOL6X8_H__
#include <LC32Compatibility.h>

/*@#@
IR:1474401209 TR:1474401209 GR:1048614815 SR:1305314503 PCR:1474401209 FWR:500.0 113:aoPOL6x8
IR:315550800 TR:1175107376 GR:315550800 SR:315550800 PCR:1175107376 FWR:500.0 0:AutomationObjects\DataTypes\ENU_Reliability
@#@*/
#ifndef LC_PROT_AOPOL6X8_H
#define LC_PROT_AOPOL6X8_H

/*                Typedefs                    */

typedef struct _LC_TD_aoPOL6x8_ENO
{
  LC_TD_DINT XO1;
  LC_TD_DINT XO2;
  LC_TD_DINT XO3;
  LC_TD_DINT XO4;
  LC_TD_DINT XO5;
  LC_TD_DINT XO6;
  LC_TD_DINT XO7;
  LC_TD_DINT XO8;
  LC_TD_BOOL DO1;
  LC_TD_BOOL DO2;
  LC_TD_BOOL DO3;
  LC_TD_BOOL DO4;
  LC_TD_UINT Group1;
  LC_TD_BOOL DO5;
  LC_TD_BOOL DO6;
  LC_TD_UINT Group2;
  LC_TD_BOOL DO7;
  LC_TD_BOOL DO8;
  LC_TD_UINT Group3;
  LC_TD_BOOL DO9;
  LC_TD_BOOL INV9;
  LC_TD_UINT TP9;
  LC_TD_BOOL DO10;
  LC_TD_BOOL INV10;
  LC_TD_UINT TP10;
  LC_TD_UINT Group4;
  LC_TD_UINT xGCmd_AB_;
  LC_TD_UINT xGSetpt_AB_;
  LC_TD_UINT yGCmd_AB_;
  LC_TD_UINT yGSetpt_AB_;
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ DevRel;
  LC_TD_DINT XI1;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX1;
  LC_TD_DINT XI2;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX2;
  LC_TD_DINT XI3;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX3;
  LC_TD_DINT XI4;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX4;
  LC_TD_DINT XI5;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX5;
  LC_TD_DINT XI6;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX6;
  LC_TD_DINT XI7;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX7;
  LC_TD_DINT XI8;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX8;
  LC_TD_BOOL DI1;
  LC_TD_INT CNT1;
  LC_TD_BOOL DI2;
  LC_TD_INT CNT2;
  LC_TD_BOOL DI3;
  LC_TD_INT CNT3;
  LC_TD_BOOL DI4;
  LC_TD_INT CNT4;
  LC_TD_BOOL DI5;
  LC_TD_INT CNT5;
  LC_TD_BOOL DI6;
  LC_TD_INT CNT6;
  LC_TD_DINT X9;
  LC_TD_INT CNTX9;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX9;
  LC_TD_DINT X10;
  LC_TD_INT CNTX10;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX10;
  LC_TD_DINT X11;
  LC_TD_INT CNTX11;
  LC_TD_AutomationObjectsODataTypesOENU_Reliability_8hl_ RelX11;
  LC_TD_BOOL FailSafe;
  LC_TD_UINT xGState_AB_;
  LC_TD_UINT xGActPos_AB_;
  LC_TD_UINT yGState_AB_;
  LC_TD_UINT yGActPos_AB_;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoPOL6x8_ENO;

/*                Prototypes                  */

void LC_fv_aoPOL6x8_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoPOL6x8_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoPOL6x8_ENO,10068,122));


#endif
#endif

#ifndef __LC32_C_STATUSEVAL_H__
#define __LC32_C_STATUSEVAL_H__
#include <LC32Compatibility.h>

/*@#@
IR:1175629243 TR:1175629243 GR:1048614815 SR:1048614815 PCR:1175629243 FWR:500.0 113:StatusEval
IR:315550800 TR:1174665438 GR:315550800 SR:315550800 PCR:1174665438 FWR:500.0 0:AutomationObjects\DataTypes\DT_Status
@#@*/
#ifndef LC_PROT_STATUSEVAL_H
#define LC_PROT_STATUSEVAL_H

/*                Typedefs                    */

typedef struct _LC_TD_StatusEval_ENO
{
  LC_TD_AutomationObjectsODataTypesODT_Status_8hl_ Status;
  LC_TD_UINT Select;
  LC_TD_BOOL ENO;
  LC_TD_BOOL Fault;
  LC_TD_BOOL MultiFault;
  LC_TD_BOOL OffNormal;
  LC_TD_BOOL LLow;
  LC_TD_BOOL LHigh;
  LC_TD_BOOL OutOfService;
  LC_TD_BOOL Overriden;
} LCCG_StructAttrib LC_TD_StatusEval_ENO;

/*                Prototypes                  */

void LC_fv_StatusEval_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_StatusEval_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_StatusEval_ENO,12000,122));


#endif
#endif

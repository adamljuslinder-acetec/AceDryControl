#ifndef __LC32_C_AOSETPOINTVALUE_H__
#define __LC32_C_AOSETPOINTVALUE_H__
#include <LC32Compatibility.h>

/*@#@
IR:1174414008 TR:1174414008 GR:1048614815 SR:1048614815 PCR:1174414008 FWR:500.0 113:aoSetpointValue
@#@*/
#ifndef LC_PROT_AOSETPOINTVALUE_H
#define LC_PROT_AOSETPOINTVALUE_H

/*                Typedefs                    */

typedef struct _LC_TD_aoSetpointValue_ENO
{
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_REAL PrVal;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoSetpointValue_ENO;

/*                Prototypes                  */

void LC_fv_aoSetpointValue_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoSetpointValue_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoSetpointValue_ENO,10001,122));


#endif
#endif

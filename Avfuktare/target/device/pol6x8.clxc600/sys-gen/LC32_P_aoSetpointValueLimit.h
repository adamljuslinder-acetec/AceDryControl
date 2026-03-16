#ifndef __LC32_C_AOSETPOINTVALUELIMIT_H__
#define __LC32_C_AOSETPOINTVALUELIMIT_H__
#include <LC32Compatibility.h>

/*@#@
IR:1174426004 TR:1174426004 GR:1048614815 SR:1048614815 PCR:1174426004 FWR:500.0 113:aoSetpointValueLimit
@#@*/
#ifndef LC_PROT_AOSETPOINTVALUELIMIT_H
#define LC_PROT_AOSETPOINTVALUELIMIT_H

/*                Typedefs                    */

typedef struct _LC_TD_aoSetpointValueLimit_ENO
{
  LC_TD_REAL Low;
  LC_TD_REAL High;
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_REAL PrVal;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoSetpointValueLimit_ENO;

/*                Prototypes                  */

void LC_fv_aoSetpointValueLimit_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoSetpointValueLimit_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoSetpointValueLimit_ENO,10002,122));


#endif
#endif

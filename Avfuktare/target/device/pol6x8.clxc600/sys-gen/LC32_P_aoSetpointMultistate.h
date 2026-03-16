#ifndef __LC32_C_AOSETPOINTMULTISTATE_H__
#define __LC32_C_AOSETPOINTMULTISTATE_H__
#include <LC32Compatibility.h>

/*@#@
IR:1174487372 TR:1174487372 GR:1048614815 SR:1048614815 PCR:1174487372 FWR:500.0 113:aoSetpointMultistate
@#@*/
#ifndef LC_PROT_AOSETPOINTMULTISTATE_H
#define LC_PROT_AOSETPOINTMULTISTATE_H

/*                Typedefs                    */

typedef struct _LC_TD_aoSetpointMultistate_ENO
{
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_UINT PrVal;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoSetpointMultistate_ENO;

/*                Prototypes                  */

void LC_fv_aoSetpointMultistate_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoSetpointMultistate_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoSetpointMultistate_ENO,10003,122));


#endif
#endif

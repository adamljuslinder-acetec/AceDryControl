#ifndef __LC32_C_AODIAGNOSTIC_H__
#define __LC32_C_AODIAGNOSTIC_H__
#include <LC32Compatibility.h>

/*@#@
IR:1176487273 TR:1176487273 GR:1048614815 SR:1048614815 PCR:1176487273 FWR:500.0 113:aoDiagnostic
@#@*/
#ifndef LC_PROT_AODIAGNOSTIC_H
#define LC_PROT_AODIAGNOSTIC_H

/*                Typedefs                    */

typedef struct _LC_TD_aoDiagnostic_ENO
{
  LC_TD_BOOL Reset;
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_UINT ErrID;
  LcCgChar ErrTxt[40];
  LC_TD_UINT aoType;
  LcCgChar aoName[40];
  LC_TD_BOOL StartOK;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoDiagnostic_ENO;

/*                Prototypes                  */

void LC_fv_aoDiagnostic_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoDiagnostic_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoDiagnostic_ENO,10021,122));


#endif
#endif

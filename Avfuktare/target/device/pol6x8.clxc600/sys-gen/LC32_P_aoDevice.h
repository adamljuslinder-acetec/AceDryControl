#ifndef __LC32_C_AODEVICE_H__
#define __LC32_C_AODEVICE_H__
#include <LC32Compatibility.h>

/*@#@
IR:1176486227 TR:1176486227 GR:1048614815 SR:1048614815 PCR:1176486227 FWR:500.0 113:aoDevice
@#@*/
#ifndef LC_PROT_AODEVICE_H
#define LC_PROT_AODEVICE_H

/*                Typedefs                    */

typedef struct _LC_TD_aoDevice_ENO
{
  LC_TD_BOOL ENO;
  LC_TD_UINT DB;
  LC_TD_DWORD pInitData;
} LCCG_StructAttrib LC_TD_aoDevice_ENO;

/*                Prototypes                  */

void LC_fv_aoDevice_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_aoDevice_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_aoDevice_ENO,10020,122));


#endif
#endif

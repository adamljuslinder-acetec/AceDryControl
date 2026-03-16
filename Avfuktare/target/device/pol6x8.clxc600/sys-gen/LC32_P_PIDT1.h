#ifndef __LC32_C_PIDT1_H__
#define __LC32_C_PIDT1_H__
#include <LC32Compatibility.h>

/*@#@
IR:1045775222 TR:1045775222 GR:1045775222 SR:1045775222 PCR:1045775222 FWR:500.0 113:PIDT1
@#@*/
#ifndef LC_PROT_PIDT1_H
#define LC_PROT_PIDT1_H

/*                Typedefs                    */

typedef struct _LC_TD_PIDT1_ENO
{
  LC_TD_REAL E;
  LC_TD_REAL kp;
  LC_TD_REAL kv;
  LC_TD_REAL T1;
  LC_TD_REAL TN;
  LC_TD_REAL YHand;
  LC_TD_BOOL Auto;
  LC_TD_REAL BwO;
  LC_TD_REAL BwU;
  LC_TD_BOOL ENO;
  LC_TD_REAL A;
  LC_TD_REAL P;
  LC_TD_REAL I;
  LC_TD_REAL D;
  LC_TD_BOOL BO;
  LC_TD_BOOL BU;
  LC_TD_BOOL bin_ia[2];
  LC_TD_BOOL bin_nf_zykl;
  LC_TD_REAL flt_eold;
  LC_TD_DWORD timer;
} LCCG_StructAttrib LC_TD_PIDT1_ENO;

/*                Prototypes                  */

void LC_fv_PIDT1_ENO(LC_T_DECL_INST_PTR_PAR(LC_TD_PIDT1_ENO,this)/* */LC_EPCONTEXT_VENDOR_DECL(LC_fv_PIDT1_ENO,0,0));


#endif
#endif

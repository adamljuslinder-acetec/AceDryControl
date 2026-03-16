#include <RISMD.h>
#include <lcfu___AODEVICE.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AODEVICE_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AODEVICE_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODEVICE_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AODEVICE,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AODEVICE_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AODEVICE_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODEVICE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AODEVICE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AODEVICE_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AODEVICE_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AODEVICE_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AODEVICE,LC_VD_PINITDATA));

static RISMDReference const lcmd_var_list_AODEVICE[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AODEVICE_DB),
  INIT_RISMDReference(&lcmd_var_AODEVICE_ENO),
  INIT_RISMDReference(&lcmd_var_AODEVICE_PINITDATA),
};

static char const lcmd_type_name_AODEVICE[] RISMD_ATTRIBUTES = "AODEVICE";
RISMDPOUType const lcmd_type_AODEVICE RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AODEVICE, sizeof(LC_TD_FunctionBlock_AODEVICE), 3, lcmd_var_list_AODEVICE);


#include <RISMD.h>
#include <lcfu___AOSETPOINTVALUE.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AOSETPOINTVALUE_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AOSETPOINTVALUE_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOSETPOINTVALUE_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AOSETPOINTVALUE,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AOSETPOINTVALUE_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AOSETPOINTVALUE_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOSETPOINTVALUE_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOSETPOINTVALUE,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AOSETPOINTVALUE_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AOSETPOINTVALUE_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOSETPOINTVALUE_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AOSETPOINTVALUE,LC_VD_PINITDATA));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AOSETPOINTVALUE_PRVAL[] RISMD_ATTRIBUTES = "PrVal";
static RISMDInterfaceVariable const lcmd_var_AOSETPOINTVALUE_PRVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOSETPOINTVALUE_PRVAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOSETPOINTVALUE,LC_VD_PRVAL), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_AOSETPOINTVALUE[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AOSETPOINTVALUE_DB),
  INIT_RISMDReference(&lcmd_var_AOSETPOINTVALUE_ENO),
  INIT_RISMDReference(&lcmd_var_AOSETPOINTVALUE_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AOSETPOINTVALUE_PRVAL),
};

static char const lcmd_type_name_AOSETPOINTVALUE[] RISMD_ATTRIBUTES = "AOSETPOINTVALUE";
RISMDPOUType const lcmd_type_AOSETPOINTVALUE RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AOSETPOINTVALUE, sizeof(LC_TD_FunctionBlock_AOSETPOINTVALUE), 4, lcmd_var_list_AOSETPOINTVALUE);


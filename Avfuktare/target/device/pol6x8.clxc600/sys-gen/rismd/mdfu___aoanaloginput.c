#include <RISMD.h>
#include <lcfu___AOANALOGINPUT.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AOANALOGINPUT_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AOANALOGINPUT_DISBL[] RISMD_ATTRIBUTES = "Disbl";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_DISBL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_DISBL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_DISBL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGINPUT_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AOANALOGINPUT_HIGH[] RISMD_ATTRIBUTES = "High";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_HIGH RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_HIGH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_HIGH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOANALOGINPUT_LOW[] RISMD_ATTRIBUTES = "Low";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_LOW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_LOW, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_LOW), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_AOANALOGINPUT_LTIMELIMIT[] RISMD_ATTRIBUTES = "lTimeLimit";
static RISMDStdVariable const lcmd_var_AOANALOGINPUT_LTIMELIMIT RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGINPUT_LTIMELIMIT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_LTIMELIMIT));

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AOANALOGINPUT_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AOANALOGINPUT_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGINPUT_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_PINITDATA));

static char const lcmd_var_name_AOANALOGINPUT_PRVAL[] RISMD_ATTRIBUTES = "PrVal";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_PRVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_PRVAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_PRVAL), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_DT_STATUS;
static char const lcmd_var_name_AOANALOGINPUT_STATUS[] RISMD_ATTRIBUTES = "Status";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_STATUS RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_STATUS, &lcmd_type_DT_STATUS, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_STATUS), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_ENU_RELIABILITY;
static char const lcmd_var_name_AOANALOGINPUT_TREL[] RISMD_ATTRIBUTES = "TRel";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_TREL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_TREL, &lcmd_type_ENU_RELIABILITY, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_TREL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGINPUT_TVAL[] RISMD_ATTRIBUTES = "TVal";
static RISMDInterfaceVariable const lcmd_var_AOANALOGINPUT_TVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGINPUT_TVAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_TVAL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_AOANALOGINPUT_WSTATE[] RISMD_ATTRIBUTES = "wState";
static RISMDStdVariable const lcmd_var_AOANALOGINPUT_WSTATE RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGINPUT_WSTATE, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_AOANALOGINPUT,LC_VD_WSTATE));

static RISMDReference const lcmd_var_list_AOANALOGINPUT[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_DB),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_DISBL),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_ENO),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_HIGH),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_LOW),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_LTIMELIMIT),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_PRVAL),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_STATUS),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_TREL),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_TVAL),
  INIT_RISMDReference(&lcmd_var_AOANALOGINPUT_WSTATE),
};

static char const lcmd_type_name_AOANALOGINPUT[] RISMD_ATTRIBUTES = "AOANALOGINPUT";
RISMDPOUType const lcmd_type_AOANALOGINPUT RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AOANALOGINPUT, sizeof(LC_TD_FunctionBlock_AOANALOGINPUT), 12, lcmd_var_list_AOANALOGINPUT);


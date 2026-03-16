#include <RISMD.h>
#include <lcfu___AOANALOGOUTPUT.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AOANALOGOUTPUT_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AOANALOGOUTPUT_DISBL[] RISMD_ATTRIBUTES = "Disbl";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_DISBL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_DISBL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_DISBL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AOANALOGOUTPUT_HIGH[] RISMD_ATTRIBUTES = "High";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_HIGH RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_HIGH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_HIGH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_LOW[] RISMD_ATTRIBUTES = "Low";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_LOW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_LOW, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_LOW), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_AOANALOGOUTPUT_LTIMELIMIT[] RISMD_ATTRIBUTES = "lTimeLimit";
static RISMDStdVariable const lcmd_var_AOANALOGOUTPUT_LTIMELIMIT RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGOUTPUT_LTIMELIMIT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_LTIMELIMIT));

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AOANALOGOUTPUT_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AOANALOGOUTPUT_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGOUTPUT_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_PINITDATA));

static char const lcmd_var_name_AOANALOGOUTPUT_PRVAL[] RISMD_ATTRIBUTES = "PrVal";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_PRVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_PRVAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_PRVAL), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_DT_STATUS;
static char const lcmd_var_name_AOANALOGOUTPUT_STATUS[] RISMD_ATTRIBUTES = "Status";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_STATUS RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_STATUS, &lcmd_type_DT_STATUS, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_STATUS), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_ENU_RELIABILITY;
static char const lcmd_var_name_AOANALOGOUTPUT_TREL[] RISMD_ATTRIBUTES = "TRel";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_TREL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_TREL, &lcmd_type_ENU_RELIABILITY, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_TREL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL1[] RISMD_ATTRIBUTES = "Val1";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL1 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL1, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL1), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL1EN[] RISMD_ATTRIBUTES = "Val1EN";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL1EN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL1EN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL1EN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL2[] RISMD_ATTRIBUTES = "Val2";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL2 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL2, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL2), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL2EN[] RISMD_ATTRIBUTES = "Val2EN";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL2EN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL2EN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL2EN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL3[] RISMD_ATTRIBUTES = "Val3";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL3 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL3, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL3), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL3EN[] RISMD_ATTRIBUTES = "Val3EN";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL3EN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL3EN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL3EN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL4[] RISMD_ATTRIBUTES = "Val4";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL4 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL4, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL4), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL4EN[] RISMD_ATTRIBUTES = "Val4EN";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL4EN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL4EN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL4EN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL5[] RISMD_ATTRIBUTES = "Val5";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL5 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL5, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL5), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOANALOGOUTPUT_VAL5EN[] RISMD_ATTRIBUTES = "Val5EN";
static RISMDInterfaceVariable const lcmd_var_AOANALOGOUTPUT_VAL5EN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOANALOGOUTPUT_VAL5EN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_VAL5EN), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_AOANALOGOUTPUT_WSTATE[] RISMD_ATTRIBUTES = "wState";
static RISMDStdVariable const lcmd_var_AOANALOGOUTPUT_WSTATE RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOANALOGOUTPUT_WSTATE, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_AOANALOGOUTPUT,LC_VD_WSTATE));

static RISMDReference const lcmd_var_list_AOANALOGOUTPUT[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_DB),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_DISBL),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_ENO),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_HIGH),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_LOW),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_LTIMELIMIT),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_PRVAL),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_STATUS),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_TREL),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL1),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL1EN),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL2),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL2EN),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL3),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL3EN),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL4),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL4EN),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL5),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_VAL5EN),
  INIT_RISMDReference(&lcmd_var_AOANALOGOUTPUT_WSTATE),
};

static char const lcmd_type_name_AOANALOGOUTPUT[] RISMD_ATTRIBUTES = "AOANALOGOUTPUT";
RISMDPOUType const lcmd_type_AOANALOGOUTPUT RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AOANALOGOUTPUT, sizeof(LC_TD_FunctionBlock_AOANALOGOUTPUT), 21, lcmd_var_list_AOANALOGOUTPUT);


#include <RISMD.h>
#include <lcfu___PIDT1.h>

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_PIDT1_A[] RISMD_ATTRIBUTES = "A";
static RISMDInterfaceVariable const lcmd_var_PIDT1_A RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_A, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_A), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_PIDT1_AUTO[] RISMD_ATTRIBUTES = "Auto";
static RISMDInterfaceVariable const lcmd_var_PIDT1_AUTO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_AUTO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_AUTO), RISMD_VARIABLE_SECTION_INPUT);

RISMDArrayType const lcmd_type_PIDT1_BIN_IA_ARR RISMD_ATTRIBUTES = INIT_RISMDArrayType(1,2,sizeof(LC_TD_BOOL),&risMdType_BOOL);
static char const lcmd_var_name_PIDT1_BIN_IA[] RISMD_ATTRIBUTES = "bin_ia";
static RISMDStdVariable const lcmd_var_PIDT1_BIN_IA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_PIDT1_BIN_IA, &lcmd_type_PIDT1_BIN_IA_ARR, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BIN_IA));

static char const lcmd_var_name_PIDT1_BIN_NF_ZYKL[] RISMD_ATTRIBUTES = "bin_nf_zykl";
static RISMDStdVariable const lcmd_var_PIDT1_BIN_NF_ZYKL RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_PIDT1_BIN_NF_ZYKL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BIN_NF_ZYKL));

static char const lcmd_var_name_PIDT1_BO[] RISMD_ATTRIBUTES = "BO";
static RISMDInterfaceVariable const lcmd_var_PIDT1_BO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_BO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_BU[] RISMD_ATTRIBUTES = "BU";
static RISMDInterfaceVariable const lcmd_var_PIDT1_BU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_BU, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BU), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_BWO[] RISMD_ATTRIBUTES = "BwO";
static RISMDInterfaceVariable const lcmd_var_PIDT1_BWO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_BWO, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BWO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_BWU[] RISMD_ATTRIBUTES = "BwU";
static RISMDInterfaceVariable const lcmd_var_PIDT1_BWU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_BWU, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_BWU), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_D[] RISMD_ATTRIBUTES = "D";
static RISMDInterfaceVariable const lcmd_var_PIDT1_D RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_D, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_D), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_E[] RISMD_ATTRIBUTES = "E";
static RISMDInterfaceVariable const lcmd_var_PIDT1_E RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_E, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_E), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_PIDT1_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_FLT_EOLD[] RISMD_ATTRIBUTES = "flt_eold";
static RISMDStdVariable const lcmd_var_PIDT1_FLT_EOLD RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_PIDT1_FLT_EOLD, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_FLT_EOLD));

static char const lcmd_var_name_PIDT1_I[] RISMD_ATTRIBUTES = "I";
static RISMDInterfaceVariable const lcmd_var_PIDT1_I RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_I, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_I), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_KP[] RISMD_ATTRIBUTES = "kp";
static RISMDInterfaceVariable const lcmd_var_PIDT1_KP RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_KP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_KP), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_KV[] RISMD_ATTRIBUTES = "kv";
static RISMDInterfaceVariable const lcmd_var_PIDT1_KV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_KV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_KV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_P[] RISMD_ATTRIBUTES = "P";
static RISMDInterfaceVariable const lcmd_var_PIDT1_P RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_P, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_P), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PIDT1_T1[] RISMD_ATTRIBUTES = "T1";
static RISMDInterfaceVariable const lcmd_var_PIDT1_T1 RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_T1, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_T1), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_PIDT1_TIMER[] RISMD_ATTRIBUTES = "timer";
static RISMDStdVariable const lcmd_var_PIDT1_TIMER RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_PIDT1_TIMER, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_TIMER));

static char const lcmd_var_name_PIDT1_TN[] RISMD_ATTRIBUTES = "TN";
static RISMDInterfaceVariable const lcmd_var_PIDT1_TN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_TN, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_TN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PIDT1_YHAND[] RISMD_ATTRIBUTES = "YHand";
static RISMDInterfaceVariable const lcmd_var_PIDT1_YHAND RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PIDT1_YHAND, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PIDT1,LC_VD_YHAND), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_PIDT1[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_PIDT1_A),
  INIT_RISMDReference(&lcmd_var_PIDT1_AUTO),
  INIT_RISMDReference(&lcmd_var_PIDT1_BIN_IA),
  INIT_RISMDReference(&lcmd_var_PIDT1_BIN_NF_ZYKL),
  INIT_RISMDReference(&lcmd_var_PIDT1_BO),
  INIT_RISMDReference(&lcmd_var_PIDT1_BU),
  INIT_RISMDReference(&lcmd_var_PIDT1_BWO),
  INIT_RISMDReference(&lcmd_var_PIDT1_BWU),
  INIT_RISMDReference(&lcmd_var_PIDT1_D),
  INIT_RISMDReference(&lcmd_var_PIDT1_E),
  INIT_RISMDReference(&lcmd_var_PIDT1_ENO),
  INIT_RISMDReference(&lcmd_var_PIDT1_FLT_EOLD),
  INIT_RISMDReference(&lcmd_var_PIDT1_I),
  INIT_RISMDReference(&lcmd_var_PIDT1_KP),
  INIT_RISMDReference(&lcmd_var_PIDT1_KV),
  INIT_RISMDReference(&lcmd_var_PIDT1_P),
  INIT_RISMDReference(&lcmd_var_PIDT1_T1),
  INIT_RISMDReference(&lcmd_var_PIDT1_TIMER),
  INIT_RISMDReference(&lcmd_var_PIDT1_TN),
  INIT_RISMDReference(&lcmd_var_PIDT1_YHAND),
};

static char const lcmd_type_name_PIDT1[] RISMD_ATTRIBUTES = "PIDT1";
RISMDPOUType const lcmd_type_PIDT1 RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_PIDT1, sizeof(LC_TD_FunctionBlock_PIDT1), 20, lcmd_var_list_PIDT1);


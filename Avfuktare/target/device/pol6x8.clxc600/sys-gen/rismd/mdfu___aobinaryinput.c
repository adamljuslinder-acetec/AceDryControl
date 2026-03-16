#include <RISMD.h>
#include <lcfu___AOBINARYINPUT.h>

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AOBINARYINPUT_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AOBINARYINPUT_DISBL[] RISMD_ATTRIBUTES = "Disbl";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_DISBL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_DISBL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_DISBL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOBINARYINPUT_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_AOBINARYINPUT_IFRACTION[] RISMD_ATTRIBUTES = "iFraction";
static RISMDStdVariable const lcmd_var_AOBINARYINPUT_IFRACTION RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOBINARYINPUT_IFRACTION, &risMdType_INT, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_IFRACTION));

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_AOBINARYINPUT_LELAPSEDTIME[] RISMD_ATTRIBUTES = "lElapsedTime";
static RISMDStdVariable const lcmd_var_AOBINARYINPUT_LELAPSEDTIME RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOBINARYINPUT_LELAPSEDTIME, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_LELAPSEDTIME));

static char const lcmd_var_name_AOBINARYINPUT_LTIMELIMIT[] RISMD_ATTRIBUTES = "lTimeLimit";
static RISMDStdVariable const lcmd_var_AOBINARYINPUT_LTIMELIMIT RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOBINARYINPUT_LTIMELIMIT, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_LTIMELIMIT));

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AOBINARYINPUT_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AOBINARYINPUT_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOBINARYINPUT_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_PINITDATA));

static char const lcmd_var_name_AOBINARYINPUT_PRVAL[] RISMD_ATTRIBUTES = "PrVal";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_PRVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_PRVAL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_PRVAL), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDDerivedType const lcmd_type_DT_STATUS;
static char const lcmd_var_name_AOBINARYINPUT_STATUS[] RISMD_ATTRIBUTES = "Status";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_STATUS RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_STATUS, &lcmd_type_DT_STATUS, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_STATUS), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOBINARYINPUT_TENBL[] RISMD_ATTRIBUTES = "TEnbl";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_TENBL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_TENBL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_TENBL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_ENU_RELIABILITY;
static char const lcmd_var_name_AOBINARYINPUT_TREL[] RISMD_ATTRIBUTES = "TRel";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_TREL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_TREL, &lcmd_type_ENU_RELIABILITY, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_TREL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOBINARYINPUT_TVAL[] RISMD_ATTRIBUTES = "TVal";
static RISMDInterfaceVariable const lcmd_var_AOBINARYINPUT_TVAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOBINARYINPUT_TVAL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_TVAL), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_AOBINARYINPUT_WSTATE[] RISMD_ATTRIBUTES = "wState";
static RISMDStdVariable const lcmd_var_AOBINARYINPUT_WSTATE RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOBINARYINPUT_WSTATE, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_AOBINARYINPUT,LC_VD_WSTATE));

static RISMDReference const lcmd_var_list_AOBINARYINPUT[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_DB),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_DISBL),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_ENO),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_IFRACTION),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_LELAPSEDTIME),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_LTIMELIMIT),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_PRVAL),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_STATUS),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_TENBL),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_TREL),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_TVAL),
  INIT_RISMDReference(&lcmd_var_AOBINARYINPUT_WSTATE),
};

static char const lcmd_type_name_AOBINARYINPUT[] RISMD_ATTRIBUTES = "AOBINARYINPUT";
RISMDPOUType const lcmd_type_AOBINARYINPUT RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AOBINARYINPUT, sizeof(LC_TD_FunctionBlock_AOBINARYINPUT), 13, lcmd_var_list_AOBINARYINPUT);


#include <RISMD.h>
#include <lcfu___AODIAGNOSTIC.h>

RISMDStringType const lcmd_type_AODIAGNOSTIC_AONAME_STR RISMD_ATTRIBUTES = INIT_RISMDStringType(40);
static char const lcmd_var_name_AODIAGNOSTIC_AONAME[] RISMD_ATTRIBUTES = "aoName";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_AONAME RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_AONAME, &lcmd_type_AODIAGNOSTIC_AONAME_STR, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_AONAME), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AODIAGNOSTIC_AOTYPE[] RISMD_ATTRIBUTES = "aoType";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_AOTYPE RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_AOTYPE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_AOTYPE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AODIAGNOSTIC_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AODIAGNOSTIC_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AODIAGNOSTIC_ERRID[] RISMD_ATTRIBUTES = "ErrID";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_ERRID RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_ERRID, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_ERRID), RISMD_VARIABLE_SECTION_OUTPUT);

RISMDStringType const lcmd_type_AODIAGNOSTIC_ERRTXT_STR RISMD_ATTRIBUTES = INIT_RISMDStringType(40);
static char const lcmd_var_name_AODIAGNOSTIC_ERRTXT[] RISMD_ATTRIBUTES = "ErrTxt";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_ERRTXT RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_ERRTXT, &lcmd_type_AODIAGNOSTIC_ERRTXT_STR, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_ERRTXT), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AODIAGNOSTIC_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AODIAGNOSTIC_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AODIAGNOSTIC_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_PINITDATA));

static char const lcmd_var_name_AODIAGNOSTIC_RESET[] RISMD_ATTRIBUTES = "Reset";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_RESET RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_RESET, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_RESET), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AODIAGNOSTIC_STARTOK[] RISMD_ATTRIBUTES = "StartOK";
static RISMDInterfaceVariable const lcmd_var_AODIAGNOSTIC_STARTOK RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AODIAGNOSTIC_STARTOK, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AODIAGNOSTIC,LC_VD_STARTOK), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_AODIAGNOSTIC[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_AONAME),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_AOTYPE),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_DB),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_ENO),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_ERRID),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_ERRTXT),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_RESET),
  INIT_RISMDReference(&lcmd_var_AODIAGNOSTIC_STARTOK),
};

static char const lcmd_type_name_AODIAGNOSTIC[] RISMD_ATTRIBUTES = "AODIAGNOSTIC";
RISMDPOUType const lcmd_type_AODIAGNOSTIC RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AODIAGNOSTIC, sizeof(LC_TD_FunctionBlock_AODIAGNOSTIC), 9, lcmd_var_list_AODIAGNOSTIC);


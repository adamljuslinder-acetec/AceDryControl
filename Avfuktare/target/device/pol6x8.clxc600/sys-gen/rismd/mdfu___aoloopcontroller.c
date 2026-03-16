#include <RISMD.h>
#include <lcfu___AOLOOPCONTROLLER.h>

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_AOLOOPCONTROLLER_ABO_T[] RISMD_ATTRIBUTES = "abo_t";
static RISMDStdVariable const lcmd_var_AOLOOPCONTROLLER_ABO_T RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOLOOPCONTROLLER_ABO_T, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_ABO_T));

static char const lcmd_var_name_AOLOOPCONTROLLER_ABU_T[] RISMD_ATTRIBUTES = "abu_t";
static RISMDStdVariable const lcmd_var_AOLOOPCONTROLLER_ABU_T RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOLOOPCONTROLLER_ABU_T, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_ABU_T));

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AOLOOPCONTROLLER_AFBV[] RISMD_ATTRIBUTES = "AFBV";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_AFBV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_AFBV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_AFBV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_AO[] RISMD_ATTRIBUTES = "AO";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_AO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_AO, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_AO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AOLOOPCONTROLLER_AO_UNA[] RISMD_ATTRIBUTES = "AO_UNA";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_AO_UNA RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_AO_UNA, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_AO_UNA), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_AOLOOPCONTROLLER_DB[] RISMD_ATTRIBUTES = "DB";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_DB RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_DB, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_DB), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_ENBL[] RISMD_ATTRIBUTES = "ENBL";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_ENBL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_ENBL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_ENBL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_ERPRV[] RISMD_ATTRIBUTES = "ERPRV";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_ERPRV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_ERPRV, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_ERPRV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_HIGH[] RISMD_ATTRIBUTES = "High";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_HIGH RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_HIGH, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_HIGH), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_INV[] RISMD_ATTRIBUTES = "INV";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_INV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_INV, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_INV), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDPOUType const lcmd_type_PIDT1;
static char const lcmd_var_name_AOLOOPCONTROLLER_LCPIDT1[] RISMD_ATTRIBUTES = "LcPidt1";
static RISMDStdVariable const lcmd_var_AOLOOPCONTROLLER_LCPIDT1 RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOLOOPCONTROLLER_LCPIDT1, &lcmd_type_PIDT1, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_LCPIDT1));

static char const lcmd_var_name_AOLOOPCONTROLLER_LOW[] RISMD_ATTRIBUTES = "Low";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_LOW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_LOW, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_LOW), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_DWORD;
static char const lcmd_var_name_AOLOOPCONTROLLER_PINITDATA[] RISMD_ATTRIBUTES = "pInitData";
static RISMDStdVariable const lcmd_var_AOLOOPCONTROLLER_PINITDATA RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOLOOPCONTROLLER_PINITDATA, &risMdType_DWORD, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_PINITDATA));

static char const lcmd_var_name_AOLOOPCONTROLLER_PRV[] RISMD_ATTRIBUTES = "PRV";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_PRV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_PRV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_PRV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_SPV[] RISMD_ATTRIBUTES = "SPV";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_SPV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_SPV, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_SPV), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_SQFL[] RISMD_ATTRIBUTES = "SQFL";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_SQFL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_SQFL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_SQFL), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_SQFM[] RISMD_ATTRIBUTES = "SQFM";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_SQFM RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_SQFM, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_SQFM), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_SQTL[] RISMD_ATTRIBUTES = "SQTL";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_SQTL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_SQTL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_SQTL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AOLOOPCONTROLLER_SQTM[] RISMD_ATTRIBUTES = "SQTM";
static RISMDInterfaceVariable const lcmd_var_AOLOOPCONTROLLER_SQTM RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AOLOOPCONTROLLER_SQTM, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_SQTM), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_WORD;
static char const lcmd_var_name_AOLOOPCONTROLLER_WOLDSTATE[] RISMD_ATTRIBUTES = "wOldState";
static RISMDStdVariable const lcmd_var_AOLOOPCONTROLLER_WOLDSTATE RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_AOLOOPCONTROLLER_WOLDSTATE, &risMdType_WORD, offsetof(LC_TD_FunctionBlock_AOLOOPCONTROLLER,LC_VD_WOLDSTATE));

static RISMDReference const lcmd_var_list_AOLOOPCONTROLLER[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_ABO_T),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_ABU_T),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_AFBV),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_AO),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_AO_UNA),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_DB),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_ENBL),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_ENO),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_ERPRV),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_HIGH),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_INV),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_LCPIDT1),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_LOW),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_PINITDATA),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_PRV),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_SPV),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_SQFL),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_SQFM),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_SQTL),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_SQTM),
  INIT_RISMDReference(&lcmd_var_AOLOOPCONTROLLER_WOLDSTATE),
};

static char const lcmd_type_name_AOLOOPCONTROLLER[] RISMD_ATTRIBUTES = "AOLOOPCONTROLLER";
RISMDPOUType const lcmd_type_AOLOOPCONTROLLER RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AOLOOPCONTROLLER, sizeof(LC_TD_FunctionBlock_AOLOOPCONTROLLER), 21, lcmd_var_list_AOLOOPCONTROLLER);


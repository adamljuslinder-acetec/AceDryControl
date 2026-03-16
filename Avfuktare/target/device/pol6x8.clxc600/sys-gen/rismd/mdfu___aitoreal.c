#include <RISMD.h>
#include <lcfu___AITOREAL.h>

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_AITOREAL_AE[] RISMD_ATTRIBUTES = "AE";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_AE RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_AE, &risMdType_INT, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_AE), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_AITOREAL_AO[] RISMD_ATTRIBUTES = "AO";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_AO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_AO, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_AO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AITOREAL_AU[] RISMD_ATTRIBUTES = "AU";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_AU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_AU, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_AU), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AITOREAL_AW[] RISMD_ATTRIBUTES = "AW";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_AW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_AW, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_AW), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_AITOREAL_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_AITOREAL_EO[] RISMD_ATTRIBUTES = "EO";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_EO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_EO, &risMdType_INT, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_EO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AITOREAL_EU[] RISMD_ATTRIBUTES = "EU";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_EU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_EU, &risMdType_INT, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_EU), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AITOREAL_STG[] RISMD_ATTRIBUTES = "STG";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_STG RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_STG, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_STG), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_AITOREAL_STOE[] RISMD_ATTRIBUTES = "STOE";
static RISMDInterfaceVariable const lcmd_var_AITOREAL_STOE RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_AITOREAL_STOE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_AITOREAL,LC_VD_STOE), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_AITOREAL[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_AITOREAL_AE),
  INIT_RISMDReference(&lcmd_var_AITOREAL_AO),
  INIT_RISMDReference(&lcmd_var_AITOREAL_AU),
  INIT_RISMDReference(&lcmd_var_AITOREAL_AW),
  INIT_RISMDReference(&lcmd_var_AITOREAL_ENO),
  INIT_RISMDReference(&lcmd_var_AITOREAL_EO),
  INIT_RISMDReference(&lcmd_var_AITOREAL_EU),
  INIT_RISMDReference(&lcmd_var_AITOREAL_STG),
  INIT_RISMDReference(&lcmd_var_AITOREAL_STOE),
};

static char const lcmd_type_name_AITOREAL[] RISMD_ATTRIBUTES = "AITOREAL";
RISMDPOUType const lcmd_type_AITOREAL RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_AITOREAL, sizeof(LC_TD_FunctionBlock_AITOREAL), 9, lcmd_var_list_AITOREAL);


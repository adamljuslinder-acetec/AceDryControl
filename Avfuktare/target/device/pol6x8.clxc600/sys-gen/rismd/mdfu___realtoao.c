#include <RISMD.h>
#include <lcfu___REALTOAO.h>

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_REALTOAO_AA[] RISMD_ATTRIBUTES = "AA";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_AA RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_AA, &risMdType_INT, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_AA), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_REALTOAO_AO[] RISMD_ATTRIBUTES = "AO";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_AO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_AO, &risMdType_INT, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_AO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REALTOAO_AU[] RISMD_ATTRIBUTES = "AU";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_AU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_AU, &risMdType_INT, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_AU), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_REALTOAO_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_REALTOAO_EO[] RISMD_ATTRIBUTES = "EO";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_EO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_EO, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_EO), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REALTOAO_EU[] RISMD_ATTRIBUTES = "EU";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_EU RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_EU, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_EU), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REALTOAO_EW[] RISMD_ATTRIBUTES = "EW";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_EW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_EW, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_EW), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REALTOAO_OV[] RISMD_ATTRIBUTES = "OV";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_OV RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_OV, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_OV), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_REALTOAO_STG[] RISMD_ATTRIBUTES = "STG";
static RISMDInterfaceVariable const lcmd_var_REALTOAO_STG RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALTOAO_STG, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_REALTOAO,LC_VD_STG), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_REALTOAO[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_REALTOAO_AA),
  INIT_RISMDReference(&lcmd_var_REALTOAO_AO),
  INIT_RISMDReference(&lcmd_var_REALTOAO_AU),
  INIT_RISMDReference(&lcmd_var_REALTOAO_ENO),
  INIT_RISMDReference(&lcmd_var_REALTOAO_EO),
  INIT_RISMDReference(&lcmd_var_REALTOAO_EU),
  INIT_RISMDReference(&lcmd_var_REALTOAO_EW),
  INIT_RISMDReference(&lcmd_var_REALTOAO_OV),
  INIT_RISMDReference(&lcmd_var_REALTOAO_STG),
};

static char const lcmd_type_name_REALTOAO[] RISMD_ATTRIBUTES = "REALTOAO";
RISMDPOUType const lcmd_type_REALTOAO RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_REALTOAO, sizeof(LC_TD_FunctionBlock_REALTOAO), 9, lcmd_var_list_REALTOAO);


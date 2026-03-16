#include <RISMD.h>
#include <lcfu___ABSHUMIDITY.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_ABSHUMIDITY_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_ABSHUMIDITY_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_ABSHUMIDITY_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_ABSHUMIDITY,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_ABSHUMIDITY_F[] RISMD_ATTRIBUTES = "F";
static RISMDInterfaceVariable const lcmd_var_ABSHUMIDITY_F RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_ABSHUMIDITY_F, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ABSHUMIDITY,LC_VD_F), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_ABSHUMIDITY_FA[] RISMD_ATTRIBUTES = "FA";
static RISMDInterfaceVariable const lcmd_var_ABSHUMIDITY_FA RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_ABSHUMIDITY_FA, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ABSHUMIDITY,LC_VD_FA), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_ABSHUMIDITY_T[] RISMD_ATTRIBUTES = "T";
static RISMDInterfaceVariable const lcmd_var_ABSHUMIDITY_T RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_ABSHUMIDITY_T, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_ABSHUMIDITY,LC_VD_T), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_ABSHUMIDITY[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_ABSHUMIDITY_ENO),
  INIT_RISMDReference(&lcmd_var_ABSHUMIDITY_F),
  INIT_RISMDReference(&lcmd_var_ABSHUMIDITY_FA),
  INIT_RISMDReference(&lcmd_var_ABSHUMIDITY_T),
};

static char const lcmd_type_name_ABSHUMIDITY[] RISMD_ATTRIBUTES = "ABSHUMIDITY";
RISMDPOUType const lcmd_type_ABSHUMIDITY RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_ABSHUMIDITY, sizeof(LC_TD_FunctionBlock_ABSHUMIDITY), 4, lcmd_var_list_ABSHUMIDITY);


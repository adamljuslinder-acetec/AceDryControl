#include <RISMD.h>
#include <lcfu___PTNITOTEMP.h>

extern RISMDSimpleNumType const risMdType_DINT;
static char const lcmd_var_name_PTNITOTEMP_DIOLDVALUE[] RISMD_ATTRIBUTES = "diOldValue";
static RISMDStdVariable const lcmd_var_PTNITOTEMP_DIOLDVALUE RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_PTNITOTEMP_DIOLDVALUE, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD_DIOLDVALUE));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_PTNITOTEMP_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_PTNITOTEMP_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PTNITOTEMP_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_PTNITOTEMP_TEMP[] RISMD_ATTRIBUTES = "TEMP";
static RISMDInterfaceVariable const lcmd_var_PTNITOTEMP_TEMP RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PTNITOTEMP_TEMP, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD_TEMP), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_PTNITOTEMP_XI[] RISMD_ATTRIBUTES = "XI";
static RISMDInterfaceVariable const lcmd_var_PTNITOTEMP_XI RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PTNITOTEMP_XI, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD_XI), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_PTNITOTEMP_XID[] RISMD_ATTRIBUTES = "XID";
static RISMDInterfaceVariable const lcmd_var_PTNITOTEMP_XID RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PTNITOTEMP_XID, &risMdType_DINT, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD_XID), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_PTNITOTEMP__TYPE[] RISMD_ATTRIBUTES = "_Type";
static RISMDInterfaceVariable const lcmd_var_PTNITOTEMP__TYPE RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_PTNITOTEMP__TYPE, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_PTNITOTEMP,LC_VD__TYPE), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_PTNITOTEMP[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP_DIOLDVALUE),
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP_ENO),
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP_TEMP),
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP_XI),
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP_XID),
  INIT_RISMDReference(&lcmd_var_PTNITOTEMP__TYPE),
};

static char const lcmd_type_name_PTNITOTEMP[] RISMD_ATTRIBUTES = "PTNITOTEMP";
RISMDPOUType const lcmd_type_PTNITOTEMP RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_PTNITOTEMP, sizeof(LC_TD_FunctionBlock_PTNITOTEMP), 6, lcmd_var_list_PTNITOTEMP);


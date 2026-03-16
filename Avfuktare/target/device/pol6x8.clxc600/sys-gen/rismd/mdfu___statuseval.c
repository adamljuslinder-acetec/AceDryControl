#include <RISMD.h>
#include <lcfu___STATUSEVAL.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_STATUSEVAL_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_FAULT[] RISMD_ATTRIBUTES = "Fault";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_FAULT RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_FAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_FAULT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_LHIGH[] RISMD_ATTRIBUTES = "LHigh";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_LHIGH RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_LHIGH, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_LHIGH), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_LLOW[] RISMD_ATTRIBUTES = "LLow";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_LLOW RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_LLOW, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_LLOW), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_MULTIFAULT[] RISMD_ATTRIBUTES = "MultiFault";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_MULTIFAULT RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_MULTIFAULT, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_MULTIFAULT), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_OFFNORMAL[] RISMD_ATTRIBUTES = "OffNormal";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_OFFNORMAL RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_OFFNORMAL, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_OFFNORMAL), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_OUTOFSERVICE[] RISMD_ATTRIBUTES = "OutOfService";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_OUTOFSERVICE RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_OUTOFSERVICE, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_OUTOFSERVICE), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_STATUSEVAL_OVERRIDEN[] RISMD_ATTRIBUTES = "Overriden";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_OVERRIDEN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_OVERRIDEN, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_OVERRIDEN), RISMD_VARIABLE_SECTION_OUTPUT);

extern RISMDSimpleNumType const risMdType_UINT;
static char const lcmd_var_name_STATUSEVAL_SELECT[] RISMD_ATTRIBUTES = "Select";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_SELECT RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_SELECT, &risMdType_UINT, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_SELECT), RISMD_VARIABLE_SECTION_INPUT);

extern RISMDDerivedType const lcmd_type_DT_STATUS;
static char const lcmd_var_name_STATUSEVAL_STATUS[] RISMD_ATTRIBUTES = "Status";
static RISMDInterfaceVariable const lcmd_var_STATUSEVAL_STATUS RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_STATUSEVAL_STATUS, &lcmd_type_DT_STATUS, offsetof(LC_TD_FunctionBlock_STATUSEVAL,LC_VD_STATUS), RISMD_VARIABLE_SECTION_INPUT);

static RISMDReference const lcmd_var_list_STATUSEVAL[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_ENO),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_FAULT),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_LHIGH),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_LLOW),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_MULTIFAULT),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_OFFNORMAL),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_OUTOFSERVICE),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_OVERRIDEN),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_SELECT),
  INIT_RISMDReference(&lcmd_var_STATUSEVAL_STATUS),
};

static char const lcmd_type_name_STATUSEVAL[] RISMD_ATTRIBUTES = "STATUSEVAL";
RISMDPOUType const lcmd_type_STATUSEVAL RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_STATUSEVAL, sizeof(LC_TD_FunctionBlock_STATUSEVAL), 10, lcmd_var_list_STATUSEVAL);


#include <RISMD.h>
#include <lcfu_iec61131__FORCEMRK.h>

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_REALx2BFORCEMRK_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_REALx2BFORCEMRK_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALx2BFORCEMRK_ENO, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FORCEMRK__REAL,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_REALx2BFORCEMRK_FSW[] RISMD_ATTRIBUTES = "FSW";
static RISMDStorageClassAttr const lcmd_attr_REALx2BFORCEMRK_FSW_StorageClassAttr RISMD_ATTRIBUTES = INIT_RISMDStorageClassAttr(RISMD_STORAGE_CLASS_RETAIN);
static RISMDReference const lcmd_attr_list_REALx2BFORCEMRK_FSW[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_attr_REALx2BFORCEMRK_FSW_StorageClassAttr),
};
static RISMDStdAttrVariable const lcmd_var_REALx2BFORCEMRK_FSW RISMD_ATTRIBUTES =
INIT_RISMDStdAttrVariable(lcmd_var_name_REALx2BFORCEMRK_FSW, &risMdType_BOOL, offsetof(LC_TD_FunctionBlock_FORCEMRK__REAL,LC_VD_FSW),1,lcmd_attr_list_REALx2BFORCEMRK_FSW);

extern RISMDSimpleNumType const risMdType_REAL;
static char const lcmd_var_name_REALx2BFORCEMRK_FVAL[] RISMD_ATTRIBUTES = "FVAL";
static RISMDStorageClassAttr const lcmd_attr_REALx2BFORCEMRK_FVAL_StorageClassAttr RISMD_ATTRIBUTES = INIT_RISMDStorageClassAttr(RISMD_STORAGE_CLASS_RETAIN);
static RISMDReference const lcmd_attr_list_REALx2BFORCEMRK_FVAL[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_attr_REALx2BFORCEMRK_FVAL_StorageClassAttr),
};
static RISMDStdAttrVariable const lcmd_var_REALx2BFORCEMRK_FVAL RISMD_ATTRIBUTES =
INIT_RISMDStdAttrVariable(lcmd_var_name_REALx2BFORCEMRK_FVAL, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_FORCEMRK__REAL,LC_VD_FVAL),1,lcmd_attr_list_REALx2BFORCEMRK_FVAL);

static char const lcmd_var_name_REALx2BFORCEMRK_IN[] RISMD_ATTRIBUTES = "IN";
static RISMDInterfaceVariable const lcmd_var_REALx2BFORCEMRK_IN RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALx2BFORCEMRK_IN, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_FORCEMRK__REAL,LC_VD_IN), RISMD_VARIABLE_SECTION_INPUT);

static char const lcmd_var_name_REALx2BFORCEMRK_OUT[] RISMD_ATTRIBUTES = "OUT";
static RISMDInterfaceVariable const lcmd_var_REALx2BFORCEMRK_OUT RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_REALx2BFORCEMRK_OUT, &risMdType_REAL, offsetof(LC_TD_FunctionBlock_FORCEMRK__REAL,LC_VD_OUT), RISMD_VARIABLE_SECTION_OUTPUT);

static RISMDReference const lcmd_var_list_REALx2BFORCEMRK[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_REALx2BFORCEMRK_ENO),
  INIT_RISMDReference(&lcmd_var_REALx2BFORCEMRK_FSW),
  INIT_RISMDReference(&lcmd_var_REALx2BFORCEMRK_FVAL),
  INIT_RISMDReference(&lcmd_var_REALx2BFORCEMRK_IN),
  INIT_RISMDReference(&lcmd_var_REALx2BFORCEMRK_OUT),
};

static char const lcmd_type_name_REALx2BFORCEMRK[] RISMD_ATTRIBUTES = "FORCEMRK";
RISMDPOUType const lcmd_type_REALx2BFORCEMRK RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_REALx2BFORCEMRK, sizeof(LC_TD_FunctionBlock_FORCEMRK__REAL), 5, lcmd_var_list_REALx2BFORCEMRK);


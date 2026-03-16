/* Copyright (C) logi.cals GmbH. All rights reserved. */

/*
** TASK :: C implementation of function block FORCEMRK for RTS compatible Systems.
*/

#ifndef LC_PROT_LCFU_IEC61131__FORCEMRK__H
#define LC_PROT_LCFU_IEC61131__FORCEMRK__H

#include <LC3CGBase.h>

/* support for elementary datatypes -------------------------- */
#define DEF_LC_TD_FunctionBlock_FORCEMRK_ANY_2(type,type2) \
typedef struct _LC_TD_FunctionBlock_FORCEMRK__##type \
{ \
  LC_TD_BOOL LC_VD_FSW; \
  LC_TD_##type2 LC_VD_FVAL; \
  LC_TD_##type2 LC_VD_IN; \
  LC_TD_BOOL LC_VD_ENO; \
  LC_TD_##type2 LC_VD_OUT; \
} LCCG_StructAttrib LC_TD_FunctionBlock_FORCEMRK__##type;

#define DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(type)  DEF_LC_TD_FunctionBlock_FORCEMRK_ANY_2(type,type)


DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(BOOL)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(BYTE)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(WORD)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(DWORD)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(LWORD)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(SINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(INT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(DINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(LINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(USINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(UINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(UDINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(ULINT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(REAL)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(LREAL)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(TIME)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(DATE)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(TOD)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(DT)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY(CHAR)
DEF_LC_TD_FunctionBlock_FORCEMRK_ANY_2(STRING,FBUNSIZEDSTRING)


/*                            Initialization Macro             */
#define LC_INIT_FunctionBlock_FORCEMRK_ANY(p,type) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_FSW)); \
  LC_INIT_##type(&((p)->LC_VD_FVAL)); \
  LC_INIT_##type(&((p)->LC_VD_IN)); \
  LC_INIT_##type(&((p)->LC_VD_OUT)); \
}

#define LC_INIT_FunctionBlock_FORCEMRK__BOOL(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,BOOL)
#define LC_INIT_FunctionBlock_FORCEMRK__BYTE(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,BYTE)
#define LC_INIT_FunctionBlock_FORCEMRK__WORD(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,WORD)
#define LC_INIT_FunctionBlock_FORCEMRK__DWORD(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,DWORD)
#define LC_INIT_FunctionBlock_FORCEMRK__LWORD(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,LWORD)
#define LC_INIT_FunctionBlock_FORCEMRK__SINT(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,SINT)
#define LC_INIT_FunctionBlock_FORCEMRK__INT(p)     LC_INIT_FunctionBlock_FORCEMRK_ANY(p,INT)
#define LC_INIT_FunctionBlock_FORCEMRK__DINT(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,DINT)
#define LC_INIT_FunctionBlock_FORCEMRK__LINT(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,LINT)
#define LC_INIT_FunctionBlock_FORCEMRK__USINT(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,USINT)
#define LC_INIT_FunctionBlock_FORCEMRK__UINT(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,UINT)
#define LC_INIT_FunctionBlock_FORCEMRK__UDINT(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,UDINT)
#define LC_INIT_FunctionBlock_FORCEMRK__ULINT(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,ULINT)
#define LC_INIT_FunctionBlock_FORCEMRK__REAL(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,REAL)
#define LC_INIT_FunctionBlock_FORCEMRK__LREAL(p)   LC_INIT_FunctionBlock_FORCEMRK_ANY(p,LREAL)
#define LC_INIT_FunctionBlock_FORCEMRK__TIME(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,TIME)
#define LC_INIT_FunctionBlock_FORCEMRK__DATE(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,DATE)
#define LC_INIT_FunctionBlock_FORCEMRK__TOD(p)     LC_INIT_FunctionBlock_FORCEMRK_ANY(p,TOD)
#define LC_INIT_FunctionBlock_FORCEMRK__DT(p)      LC_INIT_FunctionBlock_FORCEMRK_ANY(p,DT)
#define LC_INIT_FunctionBlock_FORCEMRK__CHAR(p)    LC_INIT_FunctionBlock_FORCEMRK_ANY(p,CHAR)
#define LC_INIT_FunctionBlock_FORCEMRK__STRING(p)  LC_INIT_FunctionBlock_FORCEMRK_ANY(p,SIZED_STRING)

#define LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,type) \
{ \
  if (RF==0) \
  { \
    /* note: do not init retained variables FSW and FWAL for warm start */ \
    LC_INIT_##type(&((p)->LC_VD_IN)); \
    LC_INIT_##type(&((p)->LC_VD_OUT)); \
  } \
}

#define LC_WINIT_FunctionBlock_FORCEMRK__BOOL(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,BOOL)
#define LC_WINIT_FunctionBlock_FORCEMRK__BYTE(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,BYTE)
#define LC_WINIT_FunctionBlock_FORCEMRK__WORD(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,WORD)
#define LC_WINIT_FunctionBlock_FORCEMRK__DWORD(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,DWORD)
#define LC_WINIT_FunctionBlock_FORCEMRK__LWORD(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,LWORD)
#define LC_WINIT_FunctionBlock_FORCEMRK__SINT(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,SINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__INT(p,RF)    LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,INT)
#define LC_WINIT_FunctionBlock_FORCEMRK__DINT(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,DINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__LINT(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,LINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__USINT(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,USINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__UINT(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,UINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__UDINT(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,UDINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__ULINT(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,ULINT)
#define LC_WINIT_FunctionBlock_FORCEMRK__REAL(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,REAL)
#define LC_WINIT_FunctionBlock_FORCEMRK__LREAL(p,RF)  LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,LREAL)
#define LC_WINIT_FunctionBlock_FORCEMRK__TIME(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,TIME)
#define LC_WINIT_FunctionBlock_FORCEMRK__DATE(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,DATE)
#define LC_WINIT_FunctionBlock_FORCEMRK__TOD(p,RF)    LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,TOD)
#define LC_WINIT_FunctionBlock_FORCEMRK__DT(p,RF)     LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,DT)
#define LC_WINIT_FunctionBlock_FORCEMRK__CHAR(p,RF)   LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,CHAR)
#define LC_WINIT_FunctionBlock_FORCEMRK__STRING(p,RF) LC_WINIT_FunctionBlock_FORCEMRK_ANY(p,RF,SIZED_STRING)

/* Non-Inline Implementation of FORCEMRK function block */
#define lcfu_iec61131__FORCEMRK__ANY(LC_this) \
  if ((LC_this)->LC_VD_FSW)                       \
  {                                               \
    (LC_this)->LC_VD_OUT = (LC_this)->LC_VD_FVAL; \
  }                                               \
  else                                            \
  {                                               \
    (LC_this)->LC_VD_OUT = (LC_this)->LC_VD_IN;   \
  }

#define lcfu_iec61131__FORCEMRK__BOOL(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__BYTE(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__WORD(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__DWORD(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__LWORD(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__SINT(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__INT(LC_this, pEPDB)    lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__DINT(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__LINT(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__USINT(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__UINT(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__UDINT(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__ULINT(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__REAL(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__LREAL(LC_this, pEPDB)  lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__TIME(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__DATE(LC_this, pEPDB)   lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__TOD(LC_this, pEPDB)    lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__DT(LC_this, pEPDB)     lcfu_iec61131__FORCEMRK__ANY(LC_this)
#define lcfu_iec61131__FORCEMRK__CHAR(LC_this, pEPDB)   \
  if ((LC_this)->LC_VD_FSW)                                  \
  {                                                          \
    LC_MOV_CHAR((LC_this)->LC_VD_OUT,(LC_this)->LC_VD_FVAL); \
  }                                                          \
  else                                                       \
  {                                                          \
    LC_MOV_CHAR((LC_this)->LC_VD_OUT,(LC_this)->LC_VD_IN);   \
  }

#define lcfu_iec61131__FORCEMRK__STRING(LC_this, pEPDB) \
  if ((LC_this)->LC_VD_FSW)                                                     \
  {                                                                             \
    LC_MOV_STRING((LC_this)->LC_VD_OUT, LC_FBUNSIZEDSTRING_SIZE, (LC_this)->LC_VD_FVAL, LC_FBUNSIZEDSTRING_SIZE, NULL);       \
  }                                                                             \
  else                                                                          \
  {                                                                             \
     LC_MOV_STRING((LC_this)->LC_VD_OUT, LC_FBUNSIZEDSTRING_SIZE, (LC_this)->LC_VD_IN, LC_FBUNSIZEDSTRING_SIZE, NULL);       \
  }

/* no support for elementary datatypes (references) ---------- */


/* support for arrays, structs (no refs) --------------------- */
#define LC_TD_IMPL__FORCEMRK__DERIVED(stType, cType) \
struct \
{ \
  LC_TD_BOOL LC_VD_FSW; \
  cType LC_VD_FVAL; \
  cType LC_VD_IN; \
  LC_TD_BOOL LC_VD_ENO; \
  cType LC_VD_OUT; \
} LCCG_StructAttrib
#define LC_TD_IMPL__FORCEMRK__ARRAY(stType, cType, dimension) \
struct \
{ \
  LC_TD_BOOL LC_VD_FSW; \
  cType LC_VD_FVAL[dimension]; \
  cType LC_VD_IN[dimension]; \
  LC_TD_BOOL LC_VD_ENO; \
  cType LC_VD_OUT[dimension]; \
} LCCG_StructAttrib

/*                            Initialization Macro             */
#define LC_INIT_IMPL__FORCEMRK__DERIVED(stType, cType, p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_FSW)); \
  LC_INIT_##stType(&((p)->LC_VD_FVAL)); \
  LC_INIT_##stType(&((p)->LC_VD_IN)); \
  LC_INIT_##stType(&((p)->LC_VD_OUT)); \
}
#define LC_INIT_IMPL__FORCEMRK__ARRAY(stType, cType, dimension, p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_FSW)); \
  LC_INIT_ARRAY(&((p)->LC_VD_FVAL), stType, dimension); \
  LC_INIT_ARRAY(&((p)->LC_VD_IN), stType, dimension); \
  LC_INIT_ARRAY(&((p)->LC_VD_OUT), stType, dimension); \
}

#define LC_WINIT_IMPL__FORCEMRK__DERIVED(stType, cType, p, RF) \
{ \
  if (RF==0) \
   { \
     /* note: do not init retained variables FSW and FWAL for warm start */ \
     LC_INIT_##stType(&((p)->LC_VD_IN)); \
     LC_INIT_##stType(&((p)->LC_VD_OUT)); \
   } \
}
#define LC_WINIT_IMPL__FORCEMRK__ARRAY(stType, cType, dimension, p, RF) \
{ \
  if (RF==0) \
  { \
    /* note: do not init retained variables FSW and FWAL for warm start */ \
    LC_INIT_ARRAY(&((p)->LC_VD_IN), stType, dimension); \
    LC_INIT_ARRAY(&((p)->LC_VD_OUT), stType, dimension); \
  } \
}

/*                            Implementation Macros            */
#define lcfu_iec61131__FORCEMRK__DERIVED(TYPENAME,LC_this, pEPDB) \
  if ((LC_this)->LC_VD_FSW)                       \
  {                                               \
    (LC_this)->LC_VD_OUT = (LC_this)->LC_VD_FVAL; \
  }                                               \
  else                                            \
  {                                               \
    (LC_this)->LC_VD_OUT = (LC_this)->LC_VD_IN;   \
  }

#define lcfu_iec61131__FORCEMRK__ARRAY(ctype, dimension, LC_this, pEPDB) \
  if ((LC_this)->LC_VD_FSW)                                                             \
  {                                                                                     \
    LC_ASSIGN_ARRAY_VAR((LC_this)->LC_VD_OUT[0], ((LC_this)->LC_VD_FVAL)[0], ctype, dimension); \
  }                                                                                     \
  else                                                                                  \
  {                                                                                     \
    LC_ASSIGN_ARRAY_VAR((LC_this)->LC_VD_OUT[0], ((LC_this)->LC_VD_IN)[0], ctype, dimension);   \
  }

#endif

#define lcfu_iec61131__FORCEMRK__ARRAY__STRING(ctype, dimension, LC_this, pEPDB) \
        lcfu_iec61131__FORCEMRK__ARRAY(ctype, dimension, LC_this, pEPDB)

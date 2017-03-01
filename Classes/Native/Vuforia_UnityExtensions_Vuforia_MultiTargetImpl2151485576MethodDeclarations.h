#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.MultiTargetImpl
struct MultiTargetImpl_t2151485576;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t626511550;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.MultiTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void MultiTargetImpl__ctor_m645621717 (MultiTargetImpl_t2151485576 * __this, String_t* ___name0, int32_t ___id1, DataSet_t626511550 * ___dataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.MultiTargetImpl::GetSize()
extern "C"  Vector3_t2243707580  MultiTargetImpl_GetSize_m1996308639 (MultiTargetImpl_t2151485576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.MultiTargetImpl::GetLargestSizeComponent()
extern "C"  float MultiTargetImpl_GetLargestSizeComponent_m3629322614 (MultiTargetImpl_t2151485576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void MultiTargetImpl_SetSize_m1517218450 (MultiTargetImpl_t2151485576 * __this, Vector3_t2243707580  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

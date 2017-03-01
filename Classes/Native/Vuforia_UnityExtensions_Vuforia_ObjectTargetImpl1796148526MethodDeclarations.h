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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t1796148526;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t626511550;
// Vuforia.DataSetImpl
struct DataSetImpl_t2819025280;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void ObjectTargetImpl__ctor_m1852696733 (ObjectTargetImpl_t1796148526 * __this, String_t* ___name0, int32_t ___id1, DataSet_t626511550 * ___dataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C"  Vector3_t2243707580  ObjectTargetImpl_GetSize_m3410160351 (ObjectTargetImpl_t1796148526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetImpl::GetLargestSizeComponent()
extern "C"  float ObjectTargetImpl_GetLargestSizeComponent_m4031738666 (ObjectTargetImpl_t1796148526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void ObjectTargetImpl_SetSize_m3814538822 (ObjectTargetImpl_t1796148526 * __this, Vector3_t2243707580  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C"  bool ObjectTargetImpl_StartExtendedTracking_m913842560 (ObjectTargetImpl_t1796148526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C"  bool ObjectTargetImpl_StopExtendedTracking_m2569701850 (ObjectTargetImpl_t1796148526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C"  DataSetImpl_t2819025280 * ObjectTargetImpl_get_DataSet_m3539943858 (ObjectTargetImpl_t1796148526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

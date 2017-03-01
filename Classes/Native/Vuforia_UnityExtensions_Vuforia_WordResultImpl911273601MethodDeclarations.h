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

// Vuforia.WordResultImpl
struct WordResultImpl_t911273601;
// Vuforia.Word
struct Word_t3872119486;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo3172429123.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m401521253 (WordResultImpl_t911273601 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C"  Il2CppObject * WordResultImpl_get_Word_m3362229457 (WordResultImpl_t911273601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C"  Vector3_t2243707580  WordResultImpl_get_Position_m3408670079 (WordResultImpl_t911273601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C"  Quaternion_t4030073918  WordResultImpl_get_Orientation_m2760402236 (WordResultImpl_t911273601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C"  OrientedBoundingBox_t3172429123  WordResultImpl_get_Obb_m2405245731 (WordResultImpl_t911273601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C"  int32_t WordResultImpl_get_CurrentStatus_m3077354831 (WordResultImpl_t911273601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m3664988988 (WordResultImpl_t911273601 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m82808223 (WordResultImpl_t911273601 * __this, OrientedBoundingBox_t3172429123  ___obb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m3989517476 (WordResultImpl_t911273601 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

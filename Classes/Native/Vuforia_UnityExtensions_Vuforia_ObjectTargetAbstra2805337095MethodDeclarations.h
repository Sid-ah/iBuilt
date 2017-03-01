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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t2805337095;
// Vuforia.ObjectTarget
struct ObjectTarget_t1960696348;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t742425223;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C"  void ObjectTargetAbstractBehaviour__ctor_m4149910295 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C"  Il2CppObject * ObjectTargetAbstractBehaviour_get_ObjectTarget_m631604847 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C"  void ObjectTargetAbstractBehaviour_OnDrawGizmos_m2301756507 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m2373342665 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m3808528191 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m4152189776 (ObjectTargetAbstractBehaviour_t2805337095 * __this, Vector3_t2243707580 * ___boundsMin0, Vector3_t2243707580 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m187480149 (ObjectTargetAbstractBehaviour_t2805337095 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ObjectTargetAbstractBehaviour_SetBoundingBox_m2905572592 (ObjectTargetAbstractBehaviour_t2805337095 * __this, Vector3_t2243707580  ___minBBox0, Vector3_t2243707580  ___maxBBox1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C"  Vector3_t2243707580  ObjectTargetAbstractBehaviour_GetSize_m4221564256 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetLength_m3259471564 (ObjectTargetAbstractBehaviour_t2805337095 * __this, float ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetWidth_m2466427428 (ObjectTargetAbstractBehaviour_t2805337095 * __this, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetHeight_m1507152255 (ObjectTargetAbstractBehaviour_t2805337095 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool ObjectTargetAbstractBehaviour_InitializeTarget_m50766930 (ObjectTargetAbstractBehaviour_t2805337095 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnValidate()
extern "C"  void ObjectTargetAbstractBehaviour_OnValidate_m1439977524 (ObjectTargetAbstractBehaviour_t2805337095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

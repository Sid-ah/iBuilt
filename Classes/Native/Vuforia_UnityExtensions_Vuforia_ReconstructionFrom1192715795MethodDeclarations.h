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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t1192715795;
// Vuforia.CylinderTarget
struct CylinderTarget_t2505063929;
// Vuforia.ImageTarget
struct ImageTarget_t2090577482;
// Vuforia.MultiTarget
struct MultiTarget_t314883130;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionFromTargetImpl__ctor_m2319992657 (ReconstructionFromTargetImpl_t1192715795 * __this, IntPtr_t ___nativeReconstructionPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m673095841 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___cylinderTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m4221759535 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___cylinderTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, Vector3_t2243707580  ___offsetToOccluderOrigin3, Quaternion_t4030073918  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2632264994 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___imageTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2744479616 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___imageTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, Vector3_t2243707580  ___offsetToOccluderOrigin3, Quaternion_t4030073918  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m228472662 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___multiTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2047845600 (ReconstructionFromTargetImpl_t1192715795 * __this, Il2CppObject * ___multiTarget0, Vector3_t2243707580  ___occluderMin1, Vector3_t2243707580  ___occluderMax2, Vector3_t2243707580  ___offsetToOccluderOrigin3, Quaternion_t4030073918  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m274953248 (ReconstructionFromTargetImpl_t1192715795 * __this, Vector3_t2243707580 * ___occluderMin0, Vector3_t2243707580 * ___occluderMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m731125596 (ReconstructionFromTargetImpl_t1192715795 * __this, Vector3_t2243707580 * ___occluderMin0, Vector3_t2243707580 * ___occluderMax1, Vector3_t2243707580 * ___offsetToOccluderOrigin2, Quaternion_t4030073918 * ___rotationToOccluderOrigin3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C"  bool ReconstructionFromTargetImpl_Reset_m3824029366 (ReconstructionFromTargetImpl_t1192715795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C"  bool ReconstructionFromTargetImpl_Start_m1274563583 (ReconstructionFromTargetImpl_t1192715795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2812243691 (ReconstructionFromTargetImpl_t1192715795 * __this, IntPtr_t ___datasetPtr0, Il2CppObject * ___trackable1, Vector3_t2243707580  ___occluderMin2, Vector3_t2243707580  ___occluderMax3, Vector3_t2243707580  ___offsetToOccluderOrigin4, Quaternion_t4030073918  ___rotationToOccluderOrigin5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C"  bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m3645193746 (ReconstructionFromTargetImpl_t1192715795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C"  void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m2562252841 (ReconstructionFromTargetImpl_t1192715795 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

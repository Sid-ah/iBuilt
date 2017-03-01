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

// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t1830666997;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3922476088;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t222984753;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t742425223;
// System.Action
struct Action_t3226471752;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "System_Core_System_Action3226471752.h"

// Vuforia.VuMarkTemplate Vuforia.VuMarkAbstractBehaviour::get_VuMarkTemplate()
extern "C"  Il2CppObject * VuMarkAbstractBehaviour_get_VuMarkTemplate_m3544911177 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkAbstractBehaviour::get_VuMarkTarget()
extern "C"  Il2CppObject * VuMarkAbstractBehaviour_get_VuMarkTarget_m4042803881 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::get_Origin()
extern "C"  Vector2_t2243707579  VuMarkAbstractBehaviour_get_Origin_m1957069827 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::.ctor()
extern "C"  void VuMarkAbstractBehaviour__ctor_m326197713 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool VuMarkAbstractBehaviour_CorrectScaleImpl_m1963338375 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void VuMarkAbstractBehaviour_InternalUnregisterTrackable_m4208260561 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void VuMarkAbstractBehaviour_CalculateDefaultOccluderBounds_m1143923286 (VuMarkAbstractBehaviour_t1830666997 * __this, Vector3_t2243707580 * ___boundsMin0, Vector3_t2243707580 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void VuMarkAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3368788891 (VuMarkAbstractBehaviour_t1830666997 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::GetSize()
extern "C"  Vector2_t2243707579  VuMarkAbstractBehaviour_GetSize_m2325839469 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::SetWidth(System.Single)
extern "C"  void VuMarkAbstractBehaviour_SetWidth_m1688925418 (VuMarkAbstractBehaviour_t1830666997 * __this, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::SetHeight(System.Single)
extern "C"  void VuMarkAbstractBehaviour_SetHeight_m2987244041 (VuMarkAbstractBehaviour_t1830666997 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTargetAssignedCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTargetAssignedCallback_m2556160039 (VuMarkAbstractBehaviour_t1830666997 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTargetAssignedCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTargetAssignedCallback_m691111332 (VuMarkAbstractBehaviour_t1830666997 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTargetLostCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTargetLostCallback_m1294084023 (VuMarkAbstractBehaviour_t1830666997 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTargetLostCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTargetLostCallback_m1699960082 (VuMarkAbstractBehaviour_t1830666997 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTarget()
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTarget_m3019970390 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTarget(Vuforia.VuMarkTarget)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTarget_m980765950 (VuMarkAbstractBehaviour_t1830666997 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkAbstractBehaviour::get_VuMarkResultId()
extern "C"  int32_t VuMarkAbstractBehaviour_get_VuMarkResultId_m588106376 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::set_VuMarkResultId(System.Int32)
extern "C"  void VuMarkAbstractBehaviour_set_VuMarkResultId_m2892526623 (VuMarkAbstractBehaviour_t1830666997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool VuMarkAbstractBehaviour_InitializeTarget_m3302584584 (VuMarkAbstractBehaviour_t1830666997 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::OnValidate()
extern "C"  void VuMarkAbstractBehaviour_OnValidate_m3543957550 (VuMarkAbstractBehaviour_t1830666997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

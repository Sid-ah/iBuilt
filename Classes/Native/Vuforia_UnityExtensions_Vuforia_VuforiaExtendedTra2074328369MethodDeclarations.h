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

// Vuforia.VuforiaExtendedTrackingManager
struct VuforiaExtendedTrackingManager_t2074328369;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManager/TrackableIdPair>
struct IEnumerable_1_t1621482321;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void Vuforia.VuforiaExtendedTrackingManager::ApplyTrackingState(Vuforia.TrackableBehaviour,Vuforia.TrackableBehaviour/Status,UnityEngine.Transform)
extern "C"  void VuforiaExtendedTrackingManager_ApplyTrackingState_m2455272473 (VuforiaExtendedTrackingManager_t2074328369 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, int32_t ___vuforiaStatus1, Transform_t3275118058 * ___cameraTransform2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaExtendedTrackingManager::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  bool VuforiaExtendedTrackingManager_StartExtendedTracking_m1006262806 (VuforiaExtendedTrackingManager_t2074328369 * __this, IntPtr_t ___datasetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaExtendedTrackingManager::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  bool VuforiaExtendedTrackingManager_StopExtendedTracking_m1758508878 (VuforiaExtendedTrackingManager_t2074328369 * __this, IntPtr_t ___datasetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaExtendedTrackingManager::PersistExtendedTracking(System.Boolean)
extern "C"  bool VuforiaExtendedTrackingManager_PersistExtendedTracking_m1576860222 (VuforiaExtendedTrackingManager_t2074328369 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaExtendedTrackingManager::ResetExtendedTracking(System.Boolean)
extern "C"  bool VuforiaExtendedTrackingManager_ResetExtendedTracking_m3896949427 (VuforiaExtendedTrackingManager_t2074328369 * __this, bool ___trackerActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaExtendedTrackingManager::GetExtendedTrackedBehaviours()
extern "C"  Il2CppObject* VuforiaExtendedTrackingManager_GetExtendedTrackedBehaviours_m1616904410 (VuforiaExtendedTrackingManager_t2074328369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaExtendedTrackingManager::EnableWorldAnchorUsage(System.Boolean)
extern "C"  void VuforiaExtendedTrackingManager_EnableWorldAnchorUsage_m3316152449 (VuforiaExtendedTrackingManager_t2074328369 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaExtendedTrackingManager::GetExtendedTrackingParameters(System.Int32&,System.Single&,System.Single&,System.Int32&,System.Single&,System.Single&)
extern "C"  void VuforiaExtendedTrackingManager_GetExtendedTrackingParameters_m3848587469 (VuforiaExtendedTrackingManager_t2074328369 * __this, int32_t* ___numFramesStablePose0, float* ___maxPoseRelDistance1, float* ___maxPoseAngleDiff2, int32_t* ___minNumFramesPoseOff3, float* ___minPoseUpdateRelDistance4, float* ___minPoseUpdateAngleDiff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaExtendedTrackingManager::SetExtendedTrackingParameters(System.Int32,System.Single,System.Single,System.Int32,System.Single,System.Single)
extern "C"  void VuforiaExtendedTrackingManager_SetExtendedTrackingParameters_m268148045 (VuforiaExtendedTrackingManager_t2074328369 * __this, int32_t ___numFramesStablePose0, float ___maxPoseRelDistance1, float ___maxPoseAngleDiff2, int32_t ___minNumFramesPoseOff3, float ___minPoseUpdateRelDistance4, float ___minPoseUpdateAngleDiff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaExtendedTrackingManager::.ctor()
extern "C"  void VuforiaExtendedTrackingManager__ctor_m3622223881 (VuforiaExtendedTrackingManager_t2074328369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

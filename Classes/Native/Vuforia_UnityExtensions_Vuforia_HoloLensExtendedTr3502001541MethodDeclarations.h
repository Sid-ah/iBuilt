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

// Vuforia.HoloLensExtendedTrackingManager
struct HoloLensExtendedTrackingManager_t3502001541;
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
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr3432166560.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.HoloLensExtendedTrackingManager::ApplyTrackingState(Vuforia.TrackableBehaviour,Vuforia.TrackableBehaviour/Status,UnityEngine.Transform)
extern "C"  void HoloLensExtendedTrackingManager_ApplyTrackingState_m3697571161 (HoloLensExtendedTrackingManager_t3502001541 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, int32_t ___vuforiaStatus1, Transform_t3275118058 * ___cameraTransform2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.HoloLensExtendedTrackingManager::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  bool HoloLensExtendedTrackingManager_StartExtendedTracking_m1249991830 (HoloLensExtendedTrackingManager_t3502001541 * __this, IntPtr_t ___datasetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.HoloLensExtendedTrackingManager::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  bool HoloLensExtendedTrackingManager_StopExtendedTracking_m1635671486 (HoloLensExtendedTrackingManager_t3502001541 * __this, IntPtr_t ___datasetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.HoloLensExtendedTrackingManager::PersistExtendedTracking(System.Boolean)
extern "C"  bool HoloLensExtendedTrackingManager_PersistExtendedTracking_m2336985418 (HoloLensExtendedTrackingManager_t3502001541 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.HoloLensExtendedTrackingManager::ResetExtendedTracking(System.Boolean)
extern "C"  bool HoloLensExtendedTrackingManager_ResetExtendedTracking_m2191306863 (HoloLensExtendedTrackingManager_t3502001541 * __this, bool ___trackerActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.HoloLensExtendedTrackingManager::GetExtendedTrackedBehaviours()
extern "C"  Il2CppObject* HoloLensExtendedTrackingManager_GetExtendedTrackedBehaviours_m2428850838 (HoloLensExtendedTrackingManager_t3502001541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::EnableWorldAnchorUsage(System.Boolean)
extern "C"  void HoloLensExtendedTrackingManager_EnableWorldAnchorUsage_m4188451833 (HoloLensExtendedTrackingManager_t3502001541 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::GetExtendedTrackingParameters(System.Int32&,System.Single&,System.Single&,System.Int32&,System.Single&,System.Single&)
extern "C"  void HoloLensExtendedTrackingManager_GetExtendedTrackingParameters_m1981032109 (HoloLensExtendedTrackingManager_t3502001541 * __this, int32_t* ___numFramesStablePose0, float* ___maxPoseRelDistance1, float* ___maxPoseAngleDiff2, int32_t* ___minNumFramesPoseOff3, float* ___minPoseUpdateRelDistance4, float* ___minPoseUpdateAngleDiff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::SetExtendedTrackingParameters(System.Int32,System.Single,System.Single,System.Int32,System.Single,System.Single)
extern "C"  void HoloLensExtendedTrackingManager_SetExtendedTrackingParameters_m3601969701 (HoloLensExtendedTrackingManager_t3502001541 * __this, int32_t ___numFramesStablePose0, float ___maxPoseRelDistance1, float ___maxPoseAngleDiff2, int32_t ___minNumFramesPoseOff3, float ___minPoseUpdateRelDistance4, float ___minPoseUpdateAngleDiff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::CheckHandoverToHoloLens(Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.TrackableBehaviour,Vuforia.VuforiaManager/TrackableIdPair,System.Single,System.Boolean,System.Boolean&)
extern "C"  void HoloLensExtendedTrackingManager_CheckHandoverToHoloLens_m3082323370 (HoloLensExtendedTrackingManager_t3502001541 * __this, PoseAgeEntry_t3432166560  ___poseEntry0, TrackableBehaviour_t1779888572 * ___trackableBehaviour1, TrackableIdPair_t1329355276  ___trackableResultID2, float ___maxPoseDistance3, bool ___isPoseUpdate4, bool* ___resetPoseInfo5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::CheckForHoloLensPoseUpdates(Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.TrackableBehaviour,Vuforia.VuforiaManager/TrackableIdPair,System.Int32,System.Single,System.Single,UnityEngine.Transform,System.Boolean&)
extern "C"  void HoloLensExtendedTrackingManager_CheckForHoloLensPoseUpdates_m2344553226 (HoloLensExtendedTrackingManager_t3502001541 * __this, PoseAgeEntry_t3432166560  ___poseEntry0, TrackableBehaviour_t1779888572 * ___trackableBehaviour1, TrackableIdPair_t1329355276  ___trackableResultID2, int32_t ___trackableID3, float ___minPoseUpdateDistance4, float ___maxPoseDistance5, Transform_t3275118058 * ___cameraTransform6, bool* ___resetPoseInfo7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.HoloLensExtendedTrackingManager::IsTargetWellInView(Vuforia.TrackableBehaviour,UnityEngine.Transform)
extern "C"  bool HoloLensExtendedTrackingManager_IsTargetWellInView_m4118593287 (HoloLensExtendedTrackingManager_t3502001541 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, Transform_t3275118058 * ___cameraTransform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.HoloLensExtendedTrackingManager::CalculateTargetSizeInCameraViewCoeff(Vuforia.TrackableBehaviour,UnityEngine.Vector3)
extern "C"  float HoloLensExtendedTrackingManager_CalculateTargetSizeInCameraViewCoeff_m3606167346 (HoloLensExtendedTrackingManager_t3502001541 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, Vector3_t2243707580  ___cameraPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::OnSpatialAnchorTrackingCallback(Vuforia.VuforiaManager/TrackableIdPair,System.Boolean)
extern "C"  void HoloLensExtendedTrackingManager_OnSpatialAnchorTrackingCallback_m1501774474 (HoloLensExtendedTrackingManager_t3502001541 * __this, TrackableIdPair_t1329355276  ___trackableResultID0, bool ___tracked1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::ResetExtendedTrackingForTrackable(System.Int32)
extern "C"  void HoloLensExtendedTrackingManager_ResetExtendedTrackingForTrackable_m4156989359 (HoloLensExtendedTrackingManager_t3502001541 * __this, int32_t ___trackableID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.HoloLensExtendedTrackingManager::.ctor()
extern "C"  void HoloLensExtendedTrackingManager__ctor_m4028871273 (HoloLensExtendedTrackingManager_t3502001541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t2097550852;
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t1439643011;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"

// System.Void Vuforia.DeviceTrackingManager::RecenterPose(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void DeviceTrackingManager_RecenterPose_m2145251733 (DeviceTrackingManager_t2097550852 * __this, Transform_t3275118058 * ___cameraTransform0, Vector3_t2243707580  ___modelCorrectionTransform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UpdateCamera(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C"  void DeviceTrackingManager_UpdateCamera_m1713979634 (DeviceTrackingManager_t2097550852 * __this, Transform_t3275118058 * ___cameraTransform0, TrackableResultDataU5BU5D_t1439643011* ___trackableResultDataArray1, int32_t ___deviceTrackableID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterBeforeDevicePoseUpdateCallback_m2175731956 (DeviceTrackingManager_t2097550852 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterBeforeDevicePoseUpdateCallback_m3164930505 (DeviceTrackingManager_t2097550852 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterDevicePoseUpdatedCallback_m3529359619 (DeviceTrackingManager_t2097550852 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterDevicePoseUpdatedCallback_m352450326 (DeviceTrackingManager_t2097550852 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::PositionCamera(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void DeviceTrackingManager_PositionCamera_m267507202 (DeviceTrackingManager_t2097550852 * __this, Vector3_t2243707580  ___localRefPosition0, Quaternion_t4030073918  ___localRefRotation1, Transform_t3275118058 * ___cameraTransform2, PoseData_t1264148721  ___camToTargetPose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::.ctor()
extern "C"  void DeviceTrackingManager__ctor_m2539317300 (DeviceTrackingManager_t2097550852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.VuforiaARController
struct VuforiaARController_t4061728485;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.Action
struct Action_t3226471752;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t3000616719;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t3609247816;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2507317352;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaARControlle3506117492.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "System_Core_System_Action3226471752.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::get_WorldCenterModeSetting()
extern "C"  int32_t VuforiaARController_get_WorldCenterModeSetting_m119308351 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::get_WorldCenter()
extern "C"  TrackableBehaviour_t1779888572 * VuforiaARController_get_WorldCenter_m3294539308 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaARController_get_VideoBackGroundMirrored_m1321719990 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::get_CameraDeviceMode()
extern "C"  int32_t VuforiaARController_get_CameraDeviceMode_m2914771215 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::get_HasStarted()
extern "C"  bool VuforiaARController_get_HasStarted_m2401859183 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::.ctor()
extern "C"  void VuforiaARController__ctor_m283184769 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t4061728485 * VuforiaARController_get_Instance_m3759800119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterARController()
extern "C"  void VuforiaARController_RegisterARController_m159338467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaInitializedCallback_m2641948078 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterVuforiaInitializedCallback_m2306591099 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaStartedCallback_m2843633801 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterVuforiaStartedCallback_m1686003454 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterTrackablesUpdatedCallback_m3488784743 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterTrackablesUpdatedCallback_m3083737634 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaARController_RegisterOnPauseCallback_m3559975647 (VuforiaARController_t4061728485 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaARController_UnregisterOnPauseCallback_m1514303432 (VuforiaARController_t4061728485 * __this, Action_1_t3627374100 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterBackgroundTextureChangedCallback_m3203056379 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterBackgroundTextureChangedCallback_m1052550268 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  void VuforiaARController_RegisterTrackerEventHandler_m487468923 (VuforiaARController_t4061728485 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  bool VuforiaARController_UnregisterTrackerEventHandler_m1455152768 (VuforiaARController_t4061728485 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  void VuforiaARController_RegisterVideoBgEventHandler_m602997984 (VuforiaARController_t4061728485 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  bool VuforiaARController_UnregisterVideoBgEventHandler_m2237318095 (VuforiaARController_t4061728485 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::SetWorldCenterMode(Vuforia.VuforiaARController/WorldCenterMode)
extern "C"  void VuforiaARController_SetWorldCenterMode_m2086476029 (VuforiaARController_t4061728485 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaARController_SetWorldCenter_m975580946 (VuforiaARController_t4061728485 * __this, TrackableBehaviour_t1779888572 * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaARController::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t3681755626  VuforiaARController_GetVideoBackgroundRectInViewPort_m1393662747 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaARController::GetSurfaceOrientation()
extern "C"  int32_t VuforiaARController_GetSurfaceOrientation_m862089838 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UpdateState(System.Boolean,System.Boolean)
extern "C"  void VuforiaARController_UpdateState_m2272296819 (VuforiaARController_t4061728485 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VuforiaARController_ApplyCorrectedProjectionMatrix_m3388896403 (VuforiaARController_t4061728485 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaDeinitializedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaDeinitializedCallback_m2349865249 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaDeinitializedCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterVuforiaDeinitializedCallback_m2035717992 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::get_CameraConfiguration()
extern "C"  Il2CppObject * VuforiaARController_get_CameraConfiguration_m179717394 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::set_CameraConfiguration(Vuforia.ICameraConfiguration)
extern "C"  void VuforiaARController_set_CameraConfiguration_m2912640843 (VuforiaARController_t4061728485 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::InitCameraConfiguration()
extern "C"  void VuforiaARController_InitCameraConfiguration_m984206152 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::ConfigureVideoBackground()
extern "C"  void VuforiaARController_ConfigureVideoBackground_m1736998326 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::ResetBackgroundPlane(System.Boolean)
extern "C"  void VuforiaARController_ResetBackgroundPlane_m4073553983 (VuforiaARController_t4061728485 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaARController_RegisterRenderOnUpdateCallback_m4049043910 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UnregisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaARController_UnregisterRenderOnUpdateCallback_m3605923253 (VuforiaARController_t4061728485 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaARController_IsValidPrimaryCamera_m58264230 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaARController_IsValidSecondaryCamera_m214230814 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::Awake()
extern "C"  void VuforiaARController_Awake_m200506594 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::Start()
extern "C"  void VuforiaARController_Start_m534875641 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::OnEnable()
extern "C"  void VuforiaARController_OnEnable_m1414166969 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::OnApplicationPause(System.Boolean)
extern "C"  void VuforiaARController_OnApplicationPause_m3287677087 (VuforiaARController_t4061728485 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::OnDisable()
extern "C"  void VuforiaARController_OnDisable_m3844446650 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::OnDestroy()
extern "C"  void VuforiaARController_OnDestroy_m86903944 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C"  void VuforiaARController_UpdateStatePrivate_m3308430596 (VuforiaARController_t4061728485 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::StartVuforia(System.Boolean)
extern "C"  bool VuforiaARController_StartVuforia_m2466127206 (VuforiaARController_t4061728485 * __this, bool ___startObjectTracker0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaARController::StopVuforia()
extern "C"  bool VuforiaARController_StopVuforia_m2011718385 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::DisableCameraIfNotNeeded()
extern "C"  void VuforiaARController_DisableCameraIfNotNeeded_m1776148865 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::DeinitRequestedTrackers()
extern "C"  void VuforiaARController_DeinitRequestedTrackers_m3736071081 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::OnVideoBackgroundConfigChanged()
extern "C"  void VuforiaARController_OnVideoBackgroundConfigChanged_m390161611 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void VuforiaARController_EnableObjectRenderer_m4118246151 (VuforiaARController_t4061728485 * __this, GameObject_t1756533147 * ___go0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::ApplyMissedProjectionMatrices()
extern "C"  void VuforiaARController_ApplyMissedProjectionMatrices_m1651958151 (VuforiaARController_t4061728485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::.cctor()
extern "C"  void VuforiaARController__cctor_m4028062860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.DeviceTrackerARController
struct DeviceTrackerARController_t3939888793;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Vuforia.DeviceTrackerARController::.ctor()
extern "C"  void DeviceTrackerARController__ctor_m2818749925 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::get_Instance()
extern "C"  DeviceTrackerARController_t3939888793 * DeviceTrackerARController_get_Instance_m1580284183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::RegisterARController()
extern "C"  void DeviceTrackerARController_RegisterARController_m2854473515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerARController::get_AutoInitTracker()
extern "C"  bool DeviceTrackerARController_get_AutoInitTracker_m2846266341 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerARController::get_AutoStartTracker()
extern "C"  bool DeviceTrackerARController_get_AutoStartTracker_m1257408439 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::get_ModelCorrectionMode()
extern "C"  int32_t DeviceTrackerARController_get_ModelCorrectionMode_m3252797747 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DeviceTrackerARController::get_ModelTransformEnabled()
extern "C"  bool DeviceTrackerARController_get_ModelTransformEnabled_m4028189422 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::get_ModelTransform()
extern "C"  Vector3_t2243707580  DeviceTrackerARController_get_ModelTransform_m3435521337 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::Awake()
extern "C"  void DeviceTrackerARController_Awake_m2580549902 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnEnable()
extern "C"  void DeviceTrackerARController_OnEnable_m540620973 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnDisable()
extern "C"  void DeviceTrackerARController_OnDisable_m1357064086 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnDestroy()
extern "C"  void DeviceTrackerARController_OnDestroy_m3636113416 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::Update()
extern "C"  void DeviceTrackerARController_Update_m1438584336 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::RegisterTrackerStartedCallback(System.Action)
extern "C"  void DeviceTrackerARController_RegisterTrackerStartedCallback_m2411507821 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::UnregisterTrackerStartedCallback(System.Action)
extern "C"  void DeviceTrackerARController_UnregisterTrackerStartedCallback_m3223277948 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::RegisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackerARController_RegisterBeforeDevicePoseUpdateCallback_m159769737 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::UnregisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackerARController_UnregisterBeforeDevicePoseUpdateCallback_m404633316 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::RegisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackerARController_RegisterDevicePoseUpdatedCallback_m1308315758 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::UnregisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackerARController_UnregisterDevicePoseUpdatedCallback_m3303356539 (DeviceTrackerARController_t3939888793 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::StartDeviceTracker()
extern "C"  void DeviceTrackerARController_StartDeviceTracker_m4250283669 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::StopDeviceTracker()
extern "C"  void DeviceTrackerARController_StopDeviceTracker_m1461789157 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::InitDeviceTracker()
extern "C"  void DeviceTrackerARController_InitDeviceTracker_m670940815 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::ApplySettings()
extern "C"  void DeviceTrackerARController_ApplySettings_m434773872 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnVuforiaInitialized()
extern "C"  void DeviceTrackerARController_OnVuforiaInitialized_m1760936328 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnVuforiaStarted()
extern "C"  void DeviceTrackerARController_OnVuforiaStarted_m126850285 (DeviceTrackerARController_t3939888793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::OnPause(System.Boolean)
extern "C"  void DeviceTrackerARController_OnPause_m3492338041 (DeviceTrackerARController_t3939888793 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackerARController::.cctor()
extern "C"  void DeviceTrackerARController__cctor_m3375416164 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

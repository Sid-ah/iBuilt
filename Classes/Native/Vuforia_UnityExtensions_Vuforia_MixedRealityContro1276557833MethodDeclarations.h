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

// Vuforia.MixedRealityController
struct MixedRealityController_t1276557833;
// Vuforia.IViewerParameters
struct IViewerParameters_t2342092655;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_MixedRealityControll38013191.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearARCo3746630162.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"

// Vuforia.MixedRealityController Vuforia.MixedRealityController::get_Instance()
extern "C"  MixedRealityController_t1276557833 * MixedRealityController_get_Instance_m2682544475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetMode(Vuforia.MixedRealityController/Mode)
extern "C"  void MixedRealityController_SetMode_m2979588521 (MixedRealityController_t1276557833 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerParameters(Vuforia.IViewerParameters)
extern "C"  void MixedRealityController_SetViewerParameters_m2297019686 (MixedRealityController_t1276557833 * __this, Il2CppObject * ___viewerParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ConfigureForDifferentStereoFramework(Vuforia.DigitalEyewearARController/StereoFramework,UnityEngine.Transform,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void MixedRealityController_ConfigureForDifferentStereoFramework_m1177858678 (MixedRealityController_t1276557833 * __this, int32_t ___stereoFramework0, Transform_t3275118058 * ___centralAnchorPoint1, Camera_t189460977 * ___leftCamera2, Camera_t189460977 * ___RightCamera3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MixedRealityController::get_AutoStopCameraIfNotRequired()
extern "C"  bool MixedRealityController_get_AutoStopCameraIfNotRequired_m2955406165 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::set_AutoStopCameraIfNotRequired(System.Boolean)
extern "C"  void MixedRealityController_set_AutoStopCameraIfNotRequired_m1178389852 (MixedRealityController_t1276557833 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ResolveMembers()
extern "C"  void MixedRealityController_ResolveMembers_m4187610732 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetVideoBackgroundEnabled(System.Boolean)
extern "C"  void MixedRealityController_SetVideoBackgroundEnabled_m3933299158 (MixedRealityController_t1276557833 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewer(System.Boolean)
extern "C"  void MixedRealityController_SetViewer_m2047248436 (MixedRealityController_t1276557833 * __this, bool ___viewerPresent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetTargetFPS(System.Boolean)
extern "C"  void MixedRealityController_SetTargetFPS_m4074645502 (MixedRealityController_t1276557833 * __this, bool ___isVR0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopDeviceTracker()
extern "C"  void MixedRealityController_StopDeviceTracker_m431585225 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartDeviceTracker(System.Boolean,Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void MixedRealityController_StartDeviceTracker_m2659636892 (MixedRealityController_t1276557833 * __this, bool ___videoBackground0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopCameraAndTrackersIfNotRequired()
extern "C"  void MixedRealityController_StopCameraAndTrackersIfNotRequired_m2636481967 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartCameraAndTrackersIfStopped()
extern "C"  void MixedRealityController_StartCameraAndTrackersIfStopped_m2661183636 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldAR()
extern "C"  void MixedRealityController_SetHandheldAR_m3681670 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalHandheldAR()
extern "C"  void MixedRealityController_SetRotationalHandheldAR_m752779695 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldVR()
extern "C"  void MixedRealityController_SetHandheldVR_m3344010865 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerAR()
extern "C"  void MixedRealityController_SetViewerAR_m3871906858 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalViewerAR()
extern "C"  void MixedRealityController_SetRotationalViewerAR_m3257244411 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerVR()
extern "C"  void MixedRealityController_SetViewerVR_m1378552669 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.ctor()
extern "C"  void MixedRealityController__ctor_m2809067313 (MixedRealityController_t1276557833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.cctor()
extern "C"  void MixedRealityController__cctor_m387094910 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

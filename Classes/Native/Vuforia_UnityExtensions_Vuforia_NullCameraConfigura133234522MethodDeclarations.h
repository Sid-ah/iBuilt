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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t133234522;
// System.Action
struct Action_t3226471752;
// Vuforia.WebCamARController
struct WebCamARController_t2804466264;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "System_Core_System_Action3226471752.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamARController2804466264.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C"  void NullCameraConfiguration_Init_m1947562486 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void NullCameraConfiguration_InitCameraDevice_m660566198 (NullCameraConfiguration_t133234522 * __this, int32_t ___cameraDeviceMode0, int32_t ___mirrorVideoBackground1, Action_t3226471752 * ___onVideoBackgroundConfigChanged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C"  void NullCameraConfiguration_ConfigureVideoBackground_m3142491847 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamARController,System.Single)
extern "C"  void NullCameraConfiguration_UpdatePlayModeParameters_m2900218451 (NullCameraConfiguration_t133234522 * __this, WebCamARController_t2804466264 * ___webCamBehaviour0, float ___cameraOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool NullCameraConfiguration_CheckForSurfaceChanges_m3091819914 (NullCameraConfiguration_t133234522 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void NullCameraConfiguration_UpdateStereoDepth_m2126623253 (NullCameraConfiguration_t133234522 * __this, Transform_t3275118058 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C"  bool NullCameraConfiguration_IsStereo_m2927167560 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void NullCameraConfiguration_ResetBackgroundPlane_m3928893918 (NullCameraConfiguration_t133234522 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m849057329 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void NullCameraConfiguration_set_VideoBackgroundMirrored_m525261562 (NullCameraConfiguration_t133234522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m1073353020 (NullCameraConfiguration_t133234522 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void NullCameraConfiguration_SetSkewFrustum_m1966287497 (NullCameraConfiguration_t133234522 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t3681755626  NullCameraConfiguration_get_VideoBackgroundViewportRect_m1997693548 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m3609770164 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m3442712861 (NullCameraConfiguration_t133234522 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetCameraParameterChanged()
extern "C"  void NullCameraConfiguration_SetCameraParameterChanged_m2769363672 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C"  void NullCameraConfiguration__ctor_m3104761766 (NullCameraConfiguration_t133234522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

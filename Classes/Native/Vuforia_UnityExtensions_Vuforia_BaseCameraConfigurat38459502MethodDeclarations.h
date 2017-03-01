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

// Vuforia.BaseCameraConfiguration
struct BaseCameraConfiguration_t38459502;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t3732945727;
// System.Action
struct Action_t3226471752;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_BackgroundPlaneAbs3732945727.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"
#include "System_Core_System_Action3226471752.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Vuforia.BaseCameraConfiguration::.ctor(Vuforia.BackgroundPlaneAbstractBehaviour)
extern "C"  void BaseCameraConfiguration__ctor_m3094252937 (BaseCameraConfiguration_t38459502 * __this, BackgroundPlaneAbstractBehaviour_t3732945727 * ___bgpBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void BaseCameraConfiguration_InitCameraDevice_m3505891002 (BaseCameraConfiguration_t38459502 * __this, int32_t ___cameraDeviceMode0, int32_t ___mirrorVideoBackground1, Action_t3226471752 * ___onVideoBackgroundConfigChanged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::Init()
extern "C"  void BaseCameraConfiguration_Init_m298244606 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void BaseCameraConfiguration_ResetBackgroundPlane_m2070059094 (BaseCameraConfiguration_t38459502 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t BaseCameraConfiguration_get_VideoBackgroundMirrored_m1044842027 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.BaseCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t3681755626  BaseCameraConfiguration_get_VideoBackgroundViewportRect_m2228415960 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::SetCameraParameterChanged()
extern "C"  void BaseCameraConfiguration_SetCameraParameterChanged_m4117501824 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void BaseCameraConfiguration_EnableObjectRenderer_m3084190396 (BaseCameraConfiguration_t38459502 * __this, GameObject_t1756533147 * ___go0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseCameraConfiguration_ResolveVideoBackgroundBehaviours_m1968638351 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::CameraParameterChanged()
extern "C"  bool BaseCameraConfiguration_CameraParameterChanged_m2410154426 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::IsVideoBackgroundEnabled()
extern "C"  bool BaseCameraConfiguration_IsVideoBackgroundEnabled_m1349021320 (BaseCameraConfiguration_t38459502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

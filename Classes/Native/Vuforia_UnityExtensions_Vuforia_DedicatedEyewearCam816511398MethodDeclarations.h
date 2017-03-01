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

// Vuforia.DedicatedEyewearCameraConfiguration
struct DedicatedEyewearCameraConfiguration_t816511398;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Vuforia.DedicatedEyewearCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void DedicatedEyewearCameraConfiguration__ctor_m1667563612 (DedicatedEyewearCameraConfiguration_t816511398 * __this, Camera_t189460977 * ___leftCamera0, Camera_t189460977 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::Init()
extern "C"  void DedicatedEyewearCameraConfiguration_Init_m916427222 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ConfigureVideoBackground()
extern "C"  void DedicatedEyewearCameraConfiguration_ConfigureVideoBackground_m2365872095 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool DedicatedEyewearCameraConfiguration_CheckForSurfaceChanges_m2087224994 (DedicatedEyewearCameraConfiguration_t816511398 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateStereoDepth_m390416257 (DedicatedEyewearCameraConfiguration_t816511398 * __this, Transform_t3275118058 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::IsStereo()
extern "C"  bool DedicatedEyewearCameraConfiguration_IsStereo_m3733768260 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyCorrectedProjectionMatrix_m2649971740 (DedicatedEyewearCameraConfiguration_t816511398 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void DedicatedEyewearCameraConfiguration_ResolveVideoBackgroundBehaviours_m3449389477 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CameraParameterChanged()
extern "C"  bool DedicatedEyewearCameraConfiguration_CameraParameterChanged_m3422302974 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateProjection()
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateProjection_m3771262396 (DedicatedEyewearCameraConfiguration_t816511398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::SetProjectionAndOffset(UnityEngine.Camera,UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  void DedicatedEyewearCameraConfiguration_SetProjectionAndOffset_m190191563 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, Matrix4x4_t2933234003  ___proj1, Matrix4x4_t2933234003  ___adjustment2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyMatrix_m2808423005 (DedicatedEyewearCameraConfiguration_t816511398 * __this, Camera_t189460977 * ___cam0, Matrix4x4_t2933234003  ___inputMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_SetSkewFrustum_m3518157437 (DedicatedEyewearCameraConfiguration_t816511398 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

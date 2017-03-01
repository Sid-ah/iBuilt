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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t3796201132;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera)
extern "C"  void MonoCameraConfiguration__ctor_m4556692 (MonoCameraConfiguration_t3796201132 * __this, Camera_t189460977 * ___leftCamera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C"  void MonoCameraConfiguration_ConfigureVideoBackground_m751732411 (MonoCameraConfiguration_t3796201132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool MonoCameraConfiguration_CheckForSurfaceChanges_m4001232568 (MonoCameraConfiguration_t3796201132 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void MonoCameraConfiguration_UpdateStereoDepth_m534515481 (MonoCameraConfiguration_t3796201132 * __this, Transform_t3275118058 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C"  bool MonoCameraConfiguration_IsStereo_m172501270 (MonoCameraConfiguration_t3796201132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m1818632510 (MonoCameraConfiguration_t3796201132 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void MonoCameraConfiguration_SetSkewFrustum_m2496860125 (MonoCameraConfiguration_t3796201132 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection()
extern "C"  void MonoCameraConfiguration_UpdateProjection_m4171837790 (MonoCameraConfiguration_t3796201132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m2707286965 (MonoCameraConfiguration_t3796201132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C"  bool MonoCameraConfiguration_CameraParameterChanged_m840282076 (MonoCameraConfiguration_t3796201132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

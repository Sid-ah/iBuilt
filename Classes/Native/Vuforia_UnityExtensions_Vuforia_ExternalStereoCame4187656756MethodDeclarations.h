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

// Vuforia.ExternalStereoCameraConfiguration
struct ExternalStereoCameraConfiguration_t4187656756;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Vuforia.ExternalStereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void ExternalStereoCameraConfiguration__ctor_m2052271870 (ExternalStereoCameraConfiguration_t4187656756 * __this, Camera_t189460977 * ___leftCamera0, Camera_t189460977 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool ExternalStereoCameraConfiguration_CheckForSurfaceChanges_m3741145436 (ExternalStereoCameraConfiguration_t4187656756 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void ExternalStereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m2924592674 (ExternalStereoCameraConfiguration_t4187656756 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ExternalStereoCameraConfiguration::CameraParameterChanged()
extern "C"  bool ExternalStereoCameraConfiguration_CameraParameterChanged_m1803384904 (ExternalStereoCameraConfiguration_t4187656756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ExternalStereoCameraConfiguration::UpdateProjection()
extern "C"  void ExternalStereoCameraConfiguration_UpdateProjection_m1009762910 (ExternalStereoCameraConfiguration_t4187656756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

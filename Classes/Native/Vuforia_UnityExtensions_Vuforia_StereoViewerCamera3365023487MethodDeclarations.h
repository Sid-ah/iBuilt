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

// Vuforia.StereoViewerCameraConfiguration
struct StereoViewerCameraConfiguration_t3365023487;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Vuforia.StereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Single,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration__ctor_m710267357 (StereoViewerCameraConfiguration_t3365023487 * __this, Camera_t189460977 * ___leftCamera0, Camera_t189460977 * ___rightCamera1, float ___cameraOffset2, bool ___isDistorted3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_ApplyCorrectedProjectionMatrix_m1039505813 (StereoViewerCameraConfiguration_t3365023487 * __this, Matrix4x4_t2933234003  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::SetDistortion(System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_SetDistortion_m2668939769 (StereoViewerCameraConfiguration_t3365023487 * __this, bool ___isDistorted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void StereoViewerCameraConfiguration_ConfigureVideoBackground_m77414874 (StereoViewerCameraConfiguration_t3365023487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoViewerCameraConfiguration::CameraParameterChanged()
extern "C"  bool StereoViewerCameraConfiguration_CameraParameterChanged_m1220298069 (StereoViewerCameraConfiguration_t3365023487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::UpdateProjection()
extern "C"  void StereoViewerCameraConfiguration_UpdateProjection_m2815333043 (StereoViewerCameraConfiguration_t3365023487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

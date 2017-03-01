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

// Vuforia.BaseStereoViewerCameraConfiguration
struct BaseStereoViewerCameraConfiguration_t1102239676;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void Vuforia.BaseStereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void BaseStereoViewerCameraConfiguration__ctor_m3437146506 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, Camera_t189460977 * ___leftCamera0, Camera_t189460977 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void BaseStereoViewerCameraConfiguration_ConfigureVideoBackground_m1335627989 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool BaseStereoViewerCameraConfiguration_CheckForSurfaceChanges_m1470795320 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void BaseStereoViewerCameraConfiguration_UpdateStereoDepth_m1632133579 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, Transform_t3275118058 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::IsStereo()
extern "C"  bool BaseStereoViewerCameraConfiguration_IsStereo_m2497032490 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void BaseStereoViewerCameraConfiguration_SetSkewFrustum_m1294368151 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseStereoViewerCameraConfiguration_ResolveVideoBackgroundBehaviours_m2899238147 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ComputeViewPortRect(System.Int32,System.Int32)
extern "C"  void BaseStereoViewerCameraConfiguration_ComputeViewPortRect_m755714555 (BaseStereoViewerCameraConfiguration_t1102239676 * __this, int32_t ___leftCameraViewPortHeight0, int32_t ___leftCameraViewPortWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

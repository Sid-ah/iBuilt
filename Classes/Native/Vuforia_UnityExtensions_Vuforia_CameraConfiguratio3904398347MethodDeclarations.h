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

// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void Vuforia.CameraConfigurationUtility::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C"  void CameraConfigurationUtility_ExtractCameraClippingPlanes_m569612754 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___inverseProjMatrix0, float* ___near1, float* ___far2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractVerticalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractVerticalCameraFoV_m2831675234 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___inverseProjMatrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::ExtractHorizontalCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float CameraConfigurationUtility_ExtractHorizontalCameraFoV_m3166710172 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___inverseProjMatrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.CameraConfigurationUtility::ScalePerspectiveProjectionMatrix(UnityEngine.Matrix4x4,System.Single,System.Single)
extern "C"  Matrix4x4_t2933234003  CameraConfigurationUtility_ScalePerspectiveProjectionMatrix_m3901594560 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___inputMatrix0, float ___targetVerticalFoVDeg1, float ___targetHorizontalFoVDeg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::CalculateHorizontalFoVFromViewPortAspect(System.Single,System.Single)
extern "C"  float CameraConfigurationUtility_CalculateHorizontalFoVFromViewPortAspect_m1570910890 (Il2CppObject * __this /* static, unused */, float ___verticalFoVDeg0, float ___viewportAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CameraConfigurationUtility::CalculateVerticalFoVFromViewPortAspect(System.Single,System.Single)
extern "C"  float CameraConfigurationUtility_CalculateVerticalFoVFromViewPortAspect_m908386196 (Il2CppObject * __this /* static, unused */, float ___horizontalFoVDeg0, float ___viewportAspect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::SetFovForCustomProjection(UnityEngine.Camera)
extern "C"  void CameraConfigurationUtility_SetFovForCustomProjection_m3414450521 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CameraConfigurationUtility::HomogenizedVec3(UnityEngine.Vector4)
extern "C"  Vector3_t2243707580  CameraConfigurationUtility_HomogenizedVec3_m3137916003 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___vec40, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraConfigurationUtility::.cctor()
extern "C"  void CameraConfigurationUtility__cctor_m1510687646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

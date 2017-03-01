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

// Vuforia.ViewerParameters
struct ViewerParameters_t1247673784;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType413015468.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignment791464321.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void Vuforia.ViewerParameters::.ctor(System.IntPtr)
extern "C"  void ViewerParameters__ctor_m2907337924 (ViewerParameters_t1247673784 * __this, IntPtr_t ___nativePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParameters::Finalize()
extern "C"  void ViewerParameters_Finalize_m2784781450 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetVersion()
extern "C"  float ViewerParameters_GetVersion_m2317581570 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetName()
extern "C"  String_t* ViewerParameters_GetName_m911448262 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.ViewerParameters::GetManufacturer()
extern "C"  String_t* ViewerParameters_GetManufacturer_m3085188268 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerButtonType Vuforia.ViewerParameters::GetButtonType()
extern "C"  int32_t ViewerParameters_GetButtonType_m745873483 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ViewerTrayAlignment Vuforia.ViewerParameters::GetTrayAlignment()
extern "C"  int32_t ViewerParameters_GetTrayAlignment_m2536018591 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetScreenToLensDistance()
extern "C"  float ViewerParameters_GetScreenToLensDistance_m1062311894 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetInterLensDistance()
extern "C"  float ViewerParameters_GetInterLensDistance_m3548251609 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetLensCentreToTrayDistance()
extern "C"  float ViewerParameters_GetLensCentreToTrayDistance_m3799826503 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParameters::GetNumDistortionCoefficients()
extern "C"  int32_t ViewerParameters_GetNumDistortionCoefficients_m989971033 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ViewerParameters::GetDistortionCoefficient(System.Int32)
extern "C"  float ViewerParameters_GetDistortionCoefficient_m255258205 (ViewerParameters_t1247673784 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Vuforia.ViewerParameters::GetFieldOfView()
extern "C"  Vector4_t2243707581  ViewerParameters_GetFieldOfView_m1495976935 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ViewerParameters::ContainsMagnet()
extern "C"  bool ViewerParameters_ContainsMagnet_m893246661 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ViewerParameters::get_NativePtr()
extern "C"  IntPtr_t ViewerParameters_get_NativePtr_m4157973501 (ViewerParameters_t1247673784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

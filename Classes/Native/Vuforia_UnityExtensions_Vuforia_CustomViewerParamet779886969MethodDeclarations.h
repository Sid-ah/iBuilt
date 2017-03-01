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

// Vuforia.CustomViewerParameters
struct CustomViewerParameters_t779886969;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType413015468.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignment791464321.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void Vuforia.CustomViewerParameters::.ctor(System.Single,System.String,System.String)
extern "C"  void CustomViewerParameters__ctor_m809587384 (CustomViewerParameters_t779886969 * __this, float ___version0, String_t* ___viewerName1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::Finalize()
extern "C"  void CustomViewerParameters_Finalize_m1145899515 (CustomViewerParameters_t779886969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetButtonType(Vuforia.ViewerButtonType)
extern "C"  void CustomViewerParameters_SetButtonType_m3873926571 (CustomViewerParameters_t779886969 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetScreenToLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetScreenToLensDistance_m3284214742 (CustomViewerParameters_t779886969 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetInterLensDistance(System.Single)
extern "C"  void CustomViewerParameters_SetInterLensDistance_m2641452009 (CustomViewerParameters_t779886969 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetTrayAlignment(Vuforia.ViewerTrayAlignment)
extern "C"  void CustomViewerParameters_SetTrayAlignment_m506724771 (CustomViewerParameters_t779886969 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetLensCentreToTrayDistance(System.Single)
extern "C"  void CustomViewerParameters_SetLensCentreToTrayDistance_m3667288231 (CustomViewerParameters_t779886969 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::ClearDistortionCoefficients()
extern "C"  void CustomViewerParameters_ClearDistortionCoefficients_m1791454617 (CustomViewerParameters_t779886969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::AddDistortionCoefficient(System.Single)
extern "C"  void CustomViewerParameters_AddDistortionCoefficient_m569217303 (CustomViewerParameters_t779886969 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetFieldOfView(UnityEngine.Vector4)
extern "C"  void CustomViewerParameters_SetFieldOfView_m1152285759 (CustomViewerParameters_t779886969 * __this, Vector4_t2243707581  ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CustomViewerParameters::SetContainsMagnet(System.Boolean)
extern "C"  void CustomViewerParameters_SetContainsMagnet_m2479681583 (CustomViewerParameters_t779886969 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t3510735303;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4137084396.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi2617831468.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fp1598668988.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Ren804170727.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRendererImp4076072164.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4106934884.h"

// UnityEngine.Texture Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C"  Texture_t2243626319 * VuforiaRendererImpl_get_VideoBackgroundTexture_m832380897 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C"  VideoBGCfgData_t4137084396  VuforiaRendererImpl_GetVideoBackgroundConfig_m3531408893 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C"  void VuforiaRendererImpl_ClearVideoBackgroundConfig_m2519576127 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfig_m1563624558 (VuforiaRendererImpl_t3510735303 * __this, VideoBGCfgData_t4137084396  ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaRendererImpl::createNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaRendererImpl_createNativeTexture_m3932804897 (VuforiaRendererImpl_t3510735303 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture,System.Int32)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexture_m66201618 (VuforiaRendererImpl_t3510735303 * __this, Texture_t2243626319 * ___texture0, int32_t ___nativeTextureID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexturePtr(UnityEngine.Texture,System.IntPtr)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexturePtr_m1482649197 (VuforiaRendererImpl_t3510735303 * __this, Texture_t2243626319 * ___texture0, IntPtr_t ___nativeTexturePtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C"  bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m1515605869 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t2617831468  VuforiaRendererImpl_GetVideoTextureInfo_m394771892 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C"  void VuforiaRendererImpl_Pause_m2076107180 (VuforiaRendererImpl_t3510735303 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRendererImpl_GetRecommendedFps_m3251648129 (VuforiaRendererImpl_t3510735303 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/RendererAPI Vuforia.VuforiaRendererImpl::GetRendererAPI()
extern "C"  int32_t VuforiaRendererImpl_GetRendererAPI_m2962944766 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C"  void VuforiaRendererImpl_UnityRenderEvent_m3449656070 (VuforiaRendererImpl_t3510735303 * __this, int32_t ___renderEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C"  bool VuforiaRendererImpl_HasBackgroundTextureChanged_m3768314602 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m1001709025 (VuforiaRendererImpl_t3510735303 * __this, VideoBGCfgData_t4137084396  ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C"  int32_t VuforiaRendererImpl_GetLastSetReflection_m2994414649 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C"  void VuforiaRendererImpl__ctor_m998191311 (VuforiaRendererImpl_t3510735303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.WebCamImpl
struct WebCamImpl_t2771725761;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec829768013.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video3451594282.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi2617831468.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamImpl_get_DidUpdateThisFrame_m3380320051 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m3141718436 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C"  int32_t WebCamImpl_get_ActualWidth_m2252839076 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C"  int32_t WebCamImpl_get_ActualHeight_m3528721215 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m4042103541 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m1295557856 (WebCamImpl_t2771725761 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C"  bool WebCamImpl_get_FlipHorizontally_m3677192580 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C"  Vec2I_t829768013  WebCamImpl_get_ResampledTextureSize_m3469975071 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m1533056019 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m2108257629 (WebCamImpl_t2771725761 * __this, CameraU5BU5D_t3079764780* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m2311244138 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m3184021270 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m3915685594 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t30278651* WebCamImpl_GetPixels32AndBufferFrame_m2484403945 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C"  void WebCamImpl_RenderFrame_m1518656991 (WebCamImpl_t2771725761 * __this, int32_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C"  VideoModeData_t3451594282  WebCamImpl_GetVideoMode_m920069202 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t2617831468  WebCamImpl_GetVideoTextureInfo_m3954133244 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C"  bool WebCamImpl_IsRendererDirty_m2680557624 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m615947000 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m4105536744 (WebCamImpl_t2771725761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

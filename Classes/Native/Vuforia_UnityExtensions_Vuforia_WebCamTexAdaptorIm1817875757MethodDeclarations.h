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

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t1817875757;
// UnityEngine.Texture
struct Texture_t2243626319;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec829768013.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m2756135115 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C"  bool WebCamTexAdaptorImpl_get_IsPlaying_m1323517514 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C"  Texture_t2243626319 * WebCamTexAdaptorImpl_get_Texture_m594176022 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void WebCamTexAdaptorImpl__ctor_m2179149417 (WebCamTexAdaptorImpl_t1817875757 * __this, String_t* ___deviceName0, int32_t ___requestedFPS1, Vec2I_t829768013  ___requestedTextureSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C"  void WebCamTexAdaptorImpl_Play_m3880371477 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C"  void WebCamTexAdaptorImpl_Stop_m946549237 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::CheckPermissions()
extern "C"  void WebCamTexAdaptorImpl_CheckPermissions_m644464339 (WebCamTexAdaptorImpl_t1817875757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

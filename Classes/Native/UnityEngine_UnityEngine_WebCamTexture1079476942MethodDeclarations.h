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

// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t2903637840;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamTexture1079476942.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C"  void WebCamTexture__ctor_m1125343005 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m1601948981 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m1997372813 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3743409567 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m4045220381 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Stop_m3253711615 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m1392703560 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m2284562713 (WebCamTexture_t1079476942 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m608448968 (WebCamTexture_t1079476942 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m3863095 (WebCamTexture_t1079476942 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m299835388 (WebCamTexture_t1079476942 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t2903637840* WebCamTexture_get_devices_m4137524804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m4104709683 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

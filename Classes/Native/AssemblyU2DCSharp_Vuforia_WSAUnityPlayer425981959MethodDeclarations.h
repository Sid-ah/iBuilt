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

// Vuforia.WSAUnityPlayer
struct WSAUnityPlayer_t425981959;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE2149396216.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"

// System.Void Vuforia.WSAUnityPlayer::.ctor()
extern "C"  void WSAUnityPlayer__ctor_m1279021334 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::LoadNativeLibraries()
extern "C"  void WSAUnityPlayer_LoadNativeLibraries_m2310474608 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::InitializePlatform()
extern "C"  void WSAUnityPlayer_InitializePlatform_m2450540007 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.WSAUnityPlayer::InitializeVuforia(System.String)
extern "C"  int32_t WSAUnityPlayer_InitializeVuforia_m1467576933 (WSAUnityPlayer_t425981959 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::StartScene()
extern "C"  void WSAUnityPlayer_StartScene_m2884648656 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::Update()
extern "C"  void WSAUnityPlayer_Update_m3453039605 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::Dispose()
extern "C"  void WSAUnityPlayer_Dispose_m459169223 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnPause()
extern "C"  void WSAUnityPlayer_OnPause_m2815166635 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnResume()
extern "C"  void WSAUnityPlayer_OnResume_m2572251502 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnDestroy()
extern "C"  void WSAUnityPlayer_OnDestroy_m3845019931 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::InitializeSurface()
extern "C"  void WSAUnityPlayer_InitializeSurface_m2485130165 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::SetUnityScreenOrientation()
extern "C"  void WSAUnityPlayer_SetUnityScreenOrientation_m3964512799 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.WSAUnityPlayer::GetActualScreenOrientation()
extern "C"  int32_t WSAUnityPlayer_GetActualScreenOrientation_m2906081196 (WSAUnityPlayer_t425981959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::setPlatFormNative()
extern "C"  void WSAUnityPlayer_setPlatFormNative_m413995854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WSAUnityPlayer::initVuforiaWSA(System.String)
extern "C"  int32_t WSAUnityPlayer_initVuforiaWSA_m2461582347 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::setSurfaceOrientationWSA(System.Int32)
extern "C"  void WSAUnityPlayer_setSurfaceOrientationWSA_m2082052129 (Il2CppObject * __this /* static, unused */, int32_t ___screenOrientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

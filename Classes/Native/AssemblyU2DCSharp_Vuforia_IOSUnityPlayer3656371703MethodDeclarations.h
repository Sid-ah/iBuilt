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

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t3656371703;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE2149396216.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C"  void IOSUnityPlayer__ctor_m676692974 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C"  void IOSUnityPlayer_LoadNativeLibraries_m1172109064 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C"  void IOSUnityPlayer_InitializePlatform_m286541247 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.IOSUnityPlayer::InitializeVuforia(System.String)
extern "C"  int32_t IOSUnityPlayer_InitializeVuforia_m260052685 (IOSUnityPlayer_t3656371703 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::StartScene()
extern "C"  void IOSUnityPlayer_StartScene_m2357985464 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C"  void IOSUnityPlayer_Update_m3611099589 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C"  void IOSUnityPlayer_Dispose_m444239215 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C"  void IOSUnityPlayer_OnPause_m2518700507 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C"  void IOSUnityPlayer_OnResume_m921094382 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C"  void IOSUnityPlayer_OnDestroy_m3703758411 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C"  void IOSUnityPlayer_InitializeSurface_m4219932605 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C"  void IOSUnityPlayer_SetUnityScreenOrientation_m3793088327 (IOSUnityPlayer_t3656371703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C"  void IOSUnityPlayer_setPlatFormNative_m2804175766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.Int32,System.String)
extern "C"  int32_t IOSUnityPlayer_initQCARiOS_m4109121394 (Il2CppObject * __this /* static, unused */, int32_t ___rendererAPI0, int32_t ___screenOrientation1, String_t* ___licenseKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C"  void IOSUnityPlayer_setSurfaceOrientationiOS_m3165018273 (Il2CppObject * __this /* static, unused */, int32_t ___screenOrientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

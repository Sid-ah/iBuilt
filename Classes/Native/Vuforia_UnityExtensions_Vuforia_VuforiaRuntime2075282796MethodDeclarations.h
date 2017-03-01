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

// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t2075282796;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t2720985375;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1951195598;

#include "codegen/il2cpp-codegen.h"

// System.Void Vuforia.VuforiaRuntime::.ctor()
extern "C"  void VuforiaRuntime__ctor_m3341498150 (VuforiaRuntime_t2075282796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t2075282796 * VuforiaRuntime_get_Instance_m4069915631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::InitPlatform(Vuforia.IUnityPlayer)
extern "C"  void VuforiaRuntime_InitPlatform_m3306160978 (VuforiaRuntime_t2075282796 * __this, Il2CppObject * ___player0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::InitVuforia()
extern "C"  void VuforiaRuntime_InitVuforia_m2353933398 (VuforiaRuntime_t2075282796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::Deinit()
extern "C"  void VuforiaRuntime_Deinit_m746211317 (VuforiaRuntime_t2075282796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m1800574616 (VuforiaRuntime_t2075282796 * __this, Action_1_t1951195598 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m2870938817 (VuforiaRuntime_t2075282796 * __this, Action_1_t1951195598 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntime::get_HasInitialized()
extern "C"  bool VuforiaRuntime_get_HasInitialized_m3411757181 (VuforiaRuntime_t2075282796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::CreateDeinitHelper()
extern "C"  void VuforiaRuntime_CreateDeinitHelper_m348246935 (VuforiaRuntime_t2075282796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::.cctor()
extern "C"  void VuforiaRuntime__cctor_m3105021749 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

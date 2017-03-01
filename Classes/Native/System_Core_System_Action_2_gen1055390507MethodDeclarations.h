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

// System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>
struct Action_2_t1055390507;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1245147708_gshared (Action_2_t1055390507 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m1245147708(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1055390507 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1245147708_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m4205403568_gshared (Action_2_t1055390507 * __this, TrackableIdPair_t1329355276  ___arg10, bool ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m4205403568(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1055390507 *, TrackableIdPair_t1329355276 , bool, const MethodInfo*))Action_2_Invoke_m4205403568_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m3330166845_gshared (Action_2_t1055390507 * __this, TrackableIdPair_t1329355276  ___arg10, bool ___arg21, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m3330166845(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1055390507 *, TrackableIdPair_t1329355276 , bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m3330166845_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1638366563_gshared (Action_2_t1055390507 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m1638366563(__this, ___result0, method) ((  void (*) (Action_2_t1055390507 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1638366563_gshared)(__this, ___result0, method)

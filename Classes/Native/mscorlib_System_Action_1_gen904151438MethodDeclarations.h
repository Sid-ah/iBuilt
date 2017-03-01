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

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t904151438;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainInitia1102352056.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2184330030_gshared (Action_1_t904151438 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m2184330030(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t904151438 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m2184330030_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C"  void Action_1_Invoke_m592407309_gshared (Action_1_t904151438 * __this, SmartTerrainInitializationInfo_t1102352056  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m592407309(__this, ___obj0, method) ((  void (*) (Action_1_t904151438 *, SmartTerrainInitializationInfo_t1102352056 , const MethodInfo*))Action_1_Invoke_m592407309_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1999307955_gshared (Action_1_t904151438 * __this, SmartTerrainInitializationInfo_t1102352056  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m1999307955(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t904151438 *, SmartTerrainInitializationInfo_t1102352056 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1999307955_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m4199649012_gshared (Action_1_t904151438 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m4199649012(__this, ___result0, method) ((  void (*) (Action_1_t904151438 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m4199649012_gshared)(__this, ___result0, method)

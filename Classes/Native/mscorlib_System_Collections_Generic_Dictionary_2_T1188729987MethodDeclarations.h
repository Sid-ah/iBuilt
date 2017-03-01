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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManager/TrackableIdPair>
struct Transform_1_t1188729987;
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
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManager/TrackableIdPair>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m378763558_gshared (Transform_1_t1188729987 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m378763558(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1188729987 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m378763558_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManager/TrackableIdPair>::Invoke(TKey,TValue)
extern "C"  TrackableIdPair_t1329355276  Transform_1_Invoke_m1721734334_gshared (Transform_1_t1188729987 * __this, TrackableIdPair_t1329355276  ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1721734334(__this, ___key0, ___value1, method) ((  TrackableIdPair_t1329355276  (*) (Transform_1_t1188729987 *, TrackableIdPair_t1329355276 , int32_t, const MethodInfo*))Transform_1_Invoke_m1721734334_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManager/TrackableIdPair>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m170449759_gshared (Transform_1_t1188729987 * __this, TrackableIdPair_t1329355276  ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m170449759(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1188729987 *, TrackableIdPair_t1329355276 , int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m170449759_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour/Status,Vuforia.VuforiaManager/TrackableIdPair>::EndInvoke(System.IAsyncResult)
extern "C"  TrackableIdPair_t1329355276  Transform_1_EndInvoke_m1773329000_gshared (Transform_1_t1188729987 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1773329000(__this, ___result0, method) ((  TrackableIdPair_t1329355276  (*) (Transform_1_t1188729987 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1773329000_gshared)(__this, ___result0, method)

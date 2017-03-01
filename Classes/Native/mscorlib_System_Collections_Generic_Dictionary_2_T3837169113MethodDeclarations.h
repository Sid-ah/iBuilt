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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>
struct Transform_1_t3837169113;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m422834957_gshared (Transform_1_t3837169113 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m422834957(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3837169113 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m422834957_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m1424521241_gshared (Transform_1_t3837169113 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1424521241(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t3837169113 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1424521241_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m852013770_gshared (Transform_1_t3837169113 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m852013770(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3837169113 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m852013770_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m2450384407_gshared (Transform_1_t3837169113 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2450384407(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t3837169113 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2450384407_gshared)(__this, ___result0, method)

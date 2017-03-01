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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>>
struct Transform_1_t1611375883;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_823082168.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1978900308_gshared (Transform_1_t1611375883 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1978900308(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1611375883 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1978900308_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t823082168  Transform_1_Invoke_m3913597300_gshared (Transform_1_t1611375883 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3913597300(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t823082168  (*) (Transform_1_t1611375883 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m3913597300_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1836076395_gshared (Transform_1_t1611375883 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1836076395(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1611375883 *, int32_t, int32_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1836076395_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t823082168  Transform_1_EndInvoke_m3402850782_gshared (Transform_1_t1611375883 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3402850782(__this, ___result0, method) ((  KeyValuePair_2_t823082168  (*) (Transform_1_t1611375883 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3402850782_gshared)(__this, ___result0, method)

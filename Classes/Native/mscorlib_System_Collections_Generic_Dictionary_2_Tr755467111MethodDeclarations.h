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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct Transform_1_t755467111;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22631255257.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3551863574_gshared (Transform_1_t755467111 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3551863574(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t755467111 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3551863574_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2631255257  Transform_1_Invoke_m2051902166_gshared (Transform_1_t755467111 * __this, Il2CppObject * ___key0, uint16_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2051902166(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2631255257  (*) (Transform_1_t755467111 *, Il2CppObject *, uint16_t, const MethodInfo*))Transform_1_Invoke_m2051902166_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3964891327_gshared (Transform_1_t755467111 * __this, Il2CppObject * ___key0, uint16_t ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3964891327(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t755467111 *, Il2CppObject *, uint16_t, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3964891327_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2631255257  Transform_1_EndInvoke_m3201392492_gshared (Transform_1_t755467111 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3201392492(__this, ___result0, method) ((  KeyValuePair_2_t2631255257  (*) (Transform_1_t755467111 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3201392492_gshared)(__this, ___result0, method)

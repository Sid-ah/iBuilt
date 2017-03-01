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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct Transform_1_t2827528371;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23369039134.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1724666488.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2916375062_gshared (Transform_1_t2827528371 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2916375062(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2827528371 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2916375062_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3369039134  Transform_1_Invoke_m909098262_gshared (Transform_1_t2827528371 * __this, Il2CppObject * ___key0, ProfileData_t1724666488  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m909098262(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3369039134  (*) (Transform_1_t2827528371 *, Il2CppObject *, ProfileData_t1724666488 , const MethodInfo*))Transform_1_Invoke_m909098262_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3175591935_gshared (Transform_1_t2827528371 * __this, Il2CppObject * ___key0, ProfileData_t1724666488  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3175591935(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2827528371 *, Il2CppObject *, ProfileData_t1724666488 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3175591935_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3369039134  Transform_1_EndInvoke_m1570680620_gshared (Transform_1_t2827528371 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1570680620(__this, ___result0, method) ((  KeyValuePair_2_t3369039134  (*) (Transform_1_t2827528371 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1570680620_gshared)(__this, ___result0, method)

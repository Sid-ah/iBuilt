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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
struct Transform_1_t2147938532;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1724666488.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2088140547_gshared (Transform_1_t2147938532 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2088140547(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2147938532 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2088140547_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m519637335_gshared (Transform_1_t2147938532 * __this, Il2CppObject * ___key0, ProfileData_t1724666488  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m519637335(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2147938532 *, Il2CppObject *, ProfileData_t1724666488 , const MethodInfo*))Transform_1_Invoke_m519637335_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3164846456_gshared (Transform_1_t2147938532 * __this, Il2CppObject * ___key0, ProfileData_t1724666488  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3164846456(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2147938532 *, Il2CppObject *, ProfileData_t1724666488 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3164846456_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3041686233_gshared (Transform_1_t2147938532 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3041686233(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2147938532 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3041686233_gshared)(__this, ___result0, method)

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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>
struct Transform_1_t1906025159;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1223885651.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4154496808_gshared (Transform_1_t1906025159 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4154496808(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1906025159 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4154496808_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m2110329656_gshared (Transform_1_t1906025159 * __this, int32_t ___key0, VirtualButtonData_t1223885651  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2110329656(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t1906025159 *, int32_t, VirtualButtonData_t1223885651 , const MethodInfo*))Transform_1_Invoke_m2110329656_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3375480339_gshared (Transform_1_t1906025159 * __this, int32_t ___key0, VirtualButtonData_t1223885651  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3375480339(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1906025159 *, int32_t, VirtualButtonData_t1223885651 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3375480339_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2901876014_gshared (Transform_1_t1906025159 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2901876014(__this, ___result0, method) ((  int32_t (*) (Transform_1_t1906025159 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2901876014_gshared)(__this, ___result0, method)

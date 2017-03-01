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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,System.Collections.DictionaryEntry>
struct Transform_1_t2910497288;
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
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr3432166560.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2897343013_gshared (Transform_1_t2910497288 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2897343013(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2910497288 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2897343013_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m134111705_gshared (Transform_1_t2910497288 * __this, TrackableIdPair_t1329355276  ___key0, PoseAgeEntry_t3432166560  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m134111705(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2910497288 *, TrackableIdPair_t1329355276 , PoseAgeEntry_t3432166560 , const MethodInfo*))Transform_1_Invoke_m134111705_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3407289780_gshared (Transform_1_t2910497288 * __this, TrackableIdPair_t1329355276  ___key0, PoseAgeEntry_t3432166560  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3407289780(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2910497288 *, TrackableIdPair_t1329355276 , PoseAgeEntry_t3432166560 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3407289780_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m152644459_gshared (Transform_1_t2910497288 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m152644459(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2910497288 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m152644459_gshared)(__this, ___result0, method)

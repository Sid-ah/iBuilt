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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct Transform_1_t3293788450;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr3432166560.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1345066737_gshared (Transform_1_t3293788450 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1345066737(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3293788450 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1345066737_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::Invoke(TKey,TValue)
extern "C"  PoseAgeEntry_t3432166560  Transform_1_Invoke_m1107381605_gshared (Transform_1_t3293788450 * __this, TrackableIdPair_t1329355276  ___key0, PoseAgeEntry_t3432166560  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1107381605(__this, ___key0, ___value1, method) ((  PoseAgeEntry_t3432166560  (*) (Transform_1_t3293788450 *, TrackableIdPair_t1329355276 , PoseAgeEntry_t3432166560 , const MethodInfo*))Transform_1_Invoke_m1107381605_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1508964964_gshared (Transform_1_t3293788450 * __this, TrackableIdPair_t1329355276  ___key0, PoseAgeEntry_t3432166560  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1508964964(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3293788450 *, TrackableIdPair_t1329355276 , PoseAgeEntry_t3432166560 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1508964964_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::EndInvoke(System.IAsyncResult)
extern "C"  PoseAgeEntry_t3432166560  Transform_1_EndInvoke_m3952120147_gshared (Transform_1_t3293788450 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3952120147(__this, ___result0, method) ((  PoseAgeEntry_t3432166560  (*) (Transform_1_t3293788450 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3952120147_gshared)(__this, ___result0, method)

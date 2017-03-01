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

// Vuforia.NullHoloLensApiAbstraction
struct NullHoloLensApiAbstraction_t1386933393;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>
struct Action_2_t1055390507;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"

// System.Void Vuforia.NullHoloLensApiAbstraction::SetFocusPoint(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void NullHoloLensApiAbstraction_SetFocusPoint_m3336859543 (NullHoloLensApiAbstraction_t1386933393 * __this, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___normal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullHoloLensApiAbstraction::SetWorldAnchor(Vuforia.TrackableBehaviour,Vuforia.VuforiaManager/TrackableIdPair)
extern "C"  void NullHoloLensApiAbstraction_SetWorldAnchor_m1996244266 (NullHoloLensApiAbstraction_t1386933393 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, TrackableIdPair_t1329355276  ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullHoloLensApiAbstraction::DeleteWorldAnchor(Vuforia.VuforiaManager/TrackableIdPair)
extern "C"  void NullHoloLensApiAbstraction_DeleteWorldAnchor_m582689819 (NullHoloLensApiAbstraction_t1386933393 * __this, TrackableIdPair_t1329355276  ___trackableID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullHoloLensApiAbstraction::DeleteWorldAnchor(Vuforia.TrackableBehaviour)
extern "C"  void NullHoloLensApiAbstraction_DeleteWorldAnchor_m1157685605 (NullHoloLensApiAbstraction_t1386933393 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullHoloLensApiAbstraction::SetSpatialAnchorTrackingCallback(System.Action`2<Vuforia.VuforiaManager/TrackableIdPair,System.Boolean>)
extern "C"  void NullHoloLensApiAbstraction_SetSpatialAnchorTrackingCallback_m3294576552 (NullHoloLensApiAbstraction_t1386933393 * __this, Action_2_t1055390507 * ___trackingCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullHoloLensApiAbstraction::.ctor()
extern "C"  void NullHoloLensApiAbstraction__ctor_m2279623137 (NullHoloLensApiAbstraction_t1386933393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

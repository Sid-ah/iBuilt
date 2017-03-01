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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// Vuforia.Trackable
struct Trackable_t432275407;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t696806248;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C"  int32_t TrackableBehaviour_get_CurrentStatus_m161631220 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C"  Il2CppObject * TrackableBehaviour_get_Trackable_m2299553042 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3173853042 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Vuforia.TrackableBehaviour::get_TimeStamp()
extern "C"  double TrackableBehaviour_get_TimeStamp_m4066162022 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::set_TimeStamp(System.Double)
extern "C"  void TrackableBehaviour_set_TimeStamp_m2646705715 (TrackableBehaviour_t1779888572 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m1156666476 (TrackableBehaviour_t1779888572 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m635108731 (TrackableBehaviour_t1779888572 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableBehaviour_OnTrackerUpdate_m3635877487 (TrackableBehaviour_t1779888572 * __this, int32_t ___newStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void TrackableBehaviour_OnFrameIndexUpdate_m1905371942 (TrackableBehaviour_t1779888572 * __this, int32_t ___newFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C"  void TrackableBehaviour_OnDisable_m2060273815 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScale()
extern "C"  bool TrackableBehaviour_CorrectScale_m4114224384 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::UnregisterTrackable()
extern "C"  void TrackableBehaviour_UnregisterTrackable_m3237011489 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C"  bool TrackableBehaviour_CorrectScaleImpl_m2374582286 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::EnforceUniformScaling()
extern "C"  bool TrackableBehaviour_EnforceUniformScaling_m563763785 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScaleFromWidth(System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScaleFromWidth_m1609285904 (TrackableBehaviour_t1779888572 * __this, float ___width0, float ___aspectRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScaleFromHeight(System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScaleFromHeight_m309122327 (TrackableBehaviour_t1779888572 * __this, float ___height0, float ___aspectRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScale(System.Single,System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScale_m3549084047 (TrackableBehaviour_t1779888572 * __this, float ___length0, float ___aspectRatio11, float ___aspectRatio22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m3061730430 (TrackableBehaviour_t1779888572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

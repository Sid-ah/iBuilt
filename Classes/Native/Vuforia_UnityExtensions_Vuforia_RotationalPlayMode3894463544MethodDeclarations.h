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

// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct RotationalPlayModeDeviceTrackerImpl_t3894463544;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1947527974.h"

// System.Boolean Vuforia.RotationalPlayModeDeviceTrackerImpl::Start()
extern "C"  bool RotationalPlayModeDeviceTrackerImpl_Start_m173489900 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::Stop()
extern "C"  void RotationalPlayModeDeviceTrackerImpl_Stop_m3812319390 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::RecenterPose()
extern "C"  void RotationalPlayModeDeviceTrackerImpl_RecenterPose_m2490632205 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::RecenterPose(System.Boolean)
extern "C"  void RotationalPlayModeDeviceTrackerImpl_RecenterPose_m1188573378 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, bool ___resetToCurrentPose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::SetPosePrediction(System.Boolean)
extern "C"  void RotationalPlayModeDeviceTrackerImpl_SetPosePrediction_m112933485 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.RotationalPlayModeDeviceTrackerImpl::GetPosePrediction()
extern "C"  bool RotationalPlayModeDeviceTrackerImpl_GetPosePrediction_m3272406264 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::SetModelCorrectionMode(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void RotationalPlayModeDeviceTrackerImpl_SetModelCorrectionMode_m2540140746 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalPlayModeDeviceTrackerImpl::GetModelCorrectionMode()
extern "C"  int32_t RotationalPlayModeDeviceTrackerImpl_GetModelCorrectionMode_m289456285 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::SetModelCorrectionModeWithTransform(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE,UnityEngine.Vector3)
extern "C"  void RotationalPlayModeDeviceTrackerImpl_SetModelCorrectionModeWithTransform_m989160497 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, int32_t ___mode0, Vector3_t2243707580  ___transform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::GetModelCorrectionTransform()
extern "C"  Vector3_t2243707580  RotationalPlayModeDeviceTrackerImpl_GetModelCorrectionTransform_m3693354085 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaManagerImpl/TrackableResultData Vuforia.RotationalPlayModeDeviceTrackerImpl::GetTrackable()
extern "C"  TrackableResultData_t1947527974  RotationalPlayModeDeviceTrackerImpl_GetTrackable_m3786154696 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::get_Rotation()
extern "C"  Vector3_t2243707580  RotationalPlayModeDeviceTrackerImpl_get_Rotation_m578061435 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::set_Rotation(UnityEngine.Vector3)
extern "C"  void RotationalPlayModeDeviceTrackerImpl_set_Rotation_m3386153514 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::RecenterPoseToCurrentAnchorPointPosition()
extern "C"  void RotationalPlayModeDeviceTrackerImpl_RecenterPoseToCurrentAnchorPointPosition_m1325380295 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalPlayModeDeviceTrackerImpl::.ctor()
extern "C"  void RotationalPlayModeDeviceTrackerImpl__ctor_m789415676 (RotationalPlayModeDeviceTrackerImpl_t3894463544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

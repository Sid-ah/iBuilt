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

// Vuforia.RotationalDeviceTrackerImpl
struct RotationalDeviceTrackerImpl_t832065887;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Boolean Vuforia.RotationalDeviceTrackerImpl::Start()
extern "C"  bool RotationalDeviceTrackerImpl_Start_m915491143 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::Stop()
extern "C"  void RotationalDeviceTrackerImpl_Stop_m2160469823 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPose()
extern "C"  void RotationalDeviceTrackerImpl_RecenterPose_m4022457808 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPose(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_RecenterPose_m223560889 (RotationalDeviceTrackerImpl_t832065887 * __this, bool ___resetToCurrentPose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetPosePrediction(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_SetPosePrediction_m2142991668 (RotationalDeviceTrackerImpl_t832065887 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.RotationalDeviceTrackerImpl::GetPosePrediction()
extern "C"  bool RotationalDeviceTrackerImpl_GetPosePrediction_m3862713161 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetModelCorrectionMode(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void RotationalDeviceTrackerImpl_SetModelCorrectionMode_m3720502293 (RotationalDeviceTrackerImpl_t832065887 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalDeviceTrackerImpl::GetModelCorrectionMode()
extern "C"  int32_t RotationalDeviceTrackerImpl_GetModelCorrectionMode_m2629405988 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::SetModelCorrectionModeWithTransform(Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE,UnityEngine.Vector3)
extern "C"  void RotationalDeviceTrackerImpl_SetModelCorrectionModeWithTransform_m462537128 (RotationalDeviceTrackerImpl_t832065887 * __this, int32_t ___mode0, Vector3_t2243707580  ___transform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.RotationalDeviceTrackerImpl::GetModelCorrectionTransform()
extern "C"  Vector3_t2243707580  RotationalDeviceTrackerImpl_GetModelCorrectionTransform_m2743554492 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::RecenterPoseToCurrentAnchorPointPosition(System.Boolean)
extern "C"  void RotationalDeviceTrackerImpl_RecenterPoseToCurrentAnchorPointPosition_m2265721211 (RotationalDeviceTrackerImpl_t832065887 * __this, bool ___resetToCurrentPose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.RotationalDeviceTrackerImpl::.ctor()
extern "C"  void RotationalDeviceTrackerImpl__ctor_m1248228927 (RotationalDeviceTrackerImpl_t832065887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

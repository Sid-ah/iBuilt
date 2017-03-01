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

// Vuforia.PlayModeEyewearUserCalibratorImpl
struct PlayModeEyewearUserCalibratorImpl_t117253723;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t3228338942;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_init_m843849621 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMinScaleHint_m799932846 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.PlayModeEyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float PlayModeEyewearUserCalibratorImpl_getMaxScaleHint_m1607338756 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool PlayModeEyewearUserCalibratorImpl_isStereoStretched_m3277696653 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool PlayModeEyewearUserCalibratorImpl_getProjectionMatrix_m2769701112 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, EyewearCalibrationReadingU5BU5D_t3228338942* ___readings0, Matrix4x4_t2933234003 * ___cameraToEyeMatrix1, Matrix4x4_t2933234003 * ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearUserCalibratorImpl::.ctor()
extern "C"  void PlayModeEyewearUserCalibratorImpl__ctor_m3689106987 (PlayModeEyewearUserCalibratorImpl_t117253723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

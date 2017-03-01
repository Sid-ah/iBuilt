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

// Vuforia.EyewearUserCalibratorImpl
struct EyewearUserCalibratorImpl_t1518014586;
// Vuforia.EyewearDevice/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t3228338942;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Boolean Vuforia.EyewearUserCalibratorImpl::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool EyewearUserCalibratorImpl_init_m4030421004 (EyewearUserCalibratorImpl_t1518014586 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMinScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMinScaleHint_m1195487277 (EyewearUserCalibratorImpl_t1518014586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.EyewearUserCalibratorImpl::getMaxScaleHint()
extern "C"  float EyewearUserCalibratorImpl_getMaxScaleHint_m4213719891 (EyewearUserCalibratorImpl_t1518014586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::isStereoStretched()
extern "C"  bool EyewearUserCalibratorImpl_isStereoStretched_m1235533350 (EyewearUserCalibratorImpl_t1518014586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearUserCalibratorImpl::getProjectionMatrix(Vuforia.EyewearDevice/EyewearCalibrationReading[],UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool EyewearUserCalibratorImpl_getProjectionMatrix_m3134012839 (EyewearUserCalibratorImpl_t1518014586 * __this, EyewearCalibrationReadingU5BU5D_t3228338942* ___readings0, Matrix4x4_t2933234003 * ___cameraToEyeMatrix1, Matrix4x4_t2933234003 * ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearUserCalibratorImpl::.ctor()
extern "C"  void EyewearUserCalibratorImpl__ctor_m2882584214 (EyewearUserCalibratorImpl_t1518014586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

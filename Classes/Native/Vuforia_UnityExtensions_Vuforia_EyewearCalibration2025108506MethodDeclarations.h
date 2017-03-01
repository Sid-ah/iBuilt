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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t2025108506;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeID642957731.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m16215983 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m3471545206 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m3576754687 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m2594318099 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m3165712324 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t2933234003  EyewearCalibrationProfileManagerImpl_getCameraToEyePose_m3028272859 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t2933234003  EyewearCalibrationProfileManagerImpl_getEyeProjection_m386752457 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setCameraToEyePose_m1060105678 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t2933234003  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setEyeProjection_m4228391584 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t2933234003  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m3993114516 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setProfileName_m2632119145 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_clearProfile_m2025779759 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void EyewearCalibrationProfileManagerImpl__ctor_m1645369704 (EyewearCalibrationProfileManagerImpl_t2025108506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

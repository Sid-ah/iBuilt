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

// Vuforia.PlayModeEyewearCalibrationProfileManagerImpl
struct PlayModeEyewearCalibrationProfileManagerImpl_t3632467967;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice_EyeID642957731.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getMaxCount_m2586101394 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getUsedCount_m3700336979 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_isProfileUsed_m2155002998 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t PlayModeEyewearCalibrationProfileManagerImpl_getActiveProfile_m2761998828 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setActiveProfile_m884227855 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t2933234003  PlayModeEyewearCalibrationProfileManagerImpl_getCameraToEyePose_m747602590 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID)
extern "C"  Matrix4x4_t2933234003  PlayModeEyewearCalibrationProfileManagerImpl_getEyeProjection_m3464309072 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, int32_t ___eyeID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setCameraToEyePose(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setCameraToEyePose_m4244120335 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t2933234003  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setEyeProjection(System.Int32,Vuforia.EyewearDevice/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setEyeProjection_m1076870429 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, int32_t ___eyeID1, Matrix4x4_t2933234003  ___projectionMatrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* PlayModeEyewearCalibrationProfileManagerImpl_getProfileName_m3780786733 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_setProfileName_m3761072908 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool PlayModeEyewearCalibrationProfileManagerImpl_clearProfile_m4230319932 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PlayModeEyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void PlayModeEyewearCalibrationProfileManagerImpl__ctor_m2916353515 (PlayModeEyewearCalibrationProfileManagerImpl_t3632467967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

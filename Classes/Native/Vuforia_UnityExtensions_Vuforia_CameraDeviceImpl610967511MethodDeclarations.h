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

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t610967511;
// Vuforia.IWebCam
struct IWebCam_t1151950364;
// Vuforia.Image
struct Image_t1391689025;
// System.Collections.Generic.IEnumerable`1<Vuforia.CameraDevice/CameraField>
struct IEnumerable_1_t4139640894;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3085942560;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video3451594282.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer2705300828.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Focus4087668361.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3010530044.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Int64Ra56370998.h"

// Vuforia.IWebCam Vuforia.CameraDeviceImpl::get_WebCam()
extern "C"  Il2CppObject * CameraDeviceImpl_get_WebCam_m2368945734 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::set_WebCam(Vuforia.IWebCam)
extern "C"  void CameraDeviceImpl_set_WebCam_m4069630425 (CameraDeviceImpl_t610967511 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C"  bool CameraDeviceImpl_get_CameraReady_m4180092652 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDeviceImpl_Init_m1642247777 (CameraDeviceImpl_t610967511 * __this, int32_t ___cameraDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C"  bool CameraDeviceImpl_Deinit_m3523334444 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C"  bool CameraDeviceImpl_Start_m2745191011 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C"  bool CameraDeviceImpl_Stop_m2928202319 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsActive()
extern "C"  bool CameraDeviceImpl_IsActive_m304627893 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C"  VideoModeData_t3451594282  CameraDeviceImpl_GetVideoMode_m3945058294 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  VideoModeData_t3451594282  CameraDeviceImpl_GetVideoMode_m78221528 (CameraDeviceImpl_t610967511 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  bool CameraDeviceImpl_SelectVideoMode_m741422015 (CameraDeviceImpl_t610967511 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C"  bool CameraDeviceImpl_GetSelectedVideoMode_m1029196468 (CameraDeviceImpl_t610967511 * __this, int32_t* ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFlashTorchMode_m2829915691 (CameraDeviceImpl_t610967511 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C"  bool CameraDeviceImpl_SetFocusMode_m3577916841 (CameraDeviceImpl_t610967511 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFrameFormat_m2991608962 (CameraDeviceImpl_t610967511 * __this, int32_t ___format0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C"  Image_t1391689025 * CameraDeviceImpl_GetCameraImage_m1023970763 (CameraDeviceImpl_t610967511 * __this, int32_t ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C"  int32_t CameraDeviceImpl_GetCameraDirection_m2070360910 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedCameraDirection(Vuforia.CameraDevice/CameraDirection&)
extern "C"  bool CameraDeviceImpl_GetSelectedCameraDirection_m3866201548 (CameraDeviceImpl_t610967511 * __this, int32_t* ___cameraDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C"  Vector2_t2243707579  CameraDeviceImpl_GetCameraFieldOfViewRads_m3897768225 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.CameraDevice/CameraField> Vuforia.CameraDeviceImpl::GetCameraFields()
extern "C"  Il2CppObject* CameraDeviceImpl_GetCameraFields_m3126017110 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetField(System.String,System.String)
extern "C"  bool CameraDeviceImpl_SetField_m1544277991 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetField(System.String,System.Int64)
extern "C"  bool CameraDeviceImpl_SetField_m3202339311 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetField(System.String,System.Single)
extern "C"  bool CameraDeviceImpl_SetField_m2393123802 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetField(System.String,System.Boolean)
extern "C"  bool CameraDeviceImpl_SetField_m2545485720 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetField(System.String,Vuforia.CameraDevice/Int64Range)
extern "C"  bool CameraDeviceImpl_SetField_m1823643171 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, Int64Range_t56370998  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetField(System.String,System.String&)
extern "C"  bool CameraDeviceImpl_GetField_m1612583753 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, String_t** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetField(System.String,System.Int64&)
extern "C"  bool CameraDeviceImpl_GetField_m1241974801 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, int64_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetField(System.String,System.Single&)
extern "C"  bool CameraDeviceImpl_GetField_m2396688318 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, float* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetField(System.String,System.Boolean&)
extern "C"  bool CameraDeviceImpl_GetField_m1895402300 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, bool* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetField(System.String,Vuforia.CameraDevice/Int64Range&)
extern "C"  bool CameraDeviceImpl_GetField_m4244435533 (CameraDeviceImpl_t610967511 * __this, String_t* ___key0, Int64Range_t56370998 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C"  Dictionary_2_t3085942560 * CameraDeviceImpl_GetAllImages_m3901853571 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C"  bool CameraDeviceImpl_IsDirty_m1477532715 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C"  void CameraDeviceImpl_ResetDirtyFlag_m4104124686 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C"  void CameraDeviceImpl__ctor_m3359037219 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  void CameraDeviceImpl_ForceFrameFormat_m189252245 (CameraDeviceImpl_t610967511 * __this, int32_t ___format0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C"  int32_t CameraDeviceImpl_InitCameraDevice_m894861495 (CameraDeviceImpl_t610967511 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C"  int32_t CameraDeviceImpl_DeinitCameraDevice_m2896002515 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StartCameraDevice_m1679253860 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StopCameraDevice_m4211349264 (CameraDeviceImpl_t610967511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C"  void CameraDeviceImpl__cctor_m2888628436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

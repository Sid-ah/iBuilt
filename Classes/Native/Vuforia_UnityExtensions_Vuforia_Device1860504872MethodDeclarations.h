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

// Vuforia.Device
struct Device_t1860504872;
// Vuforia.IViewerParametersList
struct IViewerParametersList_t1894052641;
// Vuforia.IViewerParameters
struct IViewerParameters_t2342092655;
// Vuforia.ICustomViewerParameters
struct ICustomViewerParameters_t2614756624;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_Device_Mode2855916820.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_View3542740111.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// Vuforia.Device Vuforia.Device::get_Instance()
extern "C"  Device_t1860504872 * Device_get_Instance_m1237482335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Device/Mode Vuforia.Device::GetMode()
extern "C"  int32_t Device_GetMode_m2892028838 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::IsViewerActive()
extern "C"  bool Device_IsViewerActive_m2356223832 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParametersList Vuforia.Device::GetViewerList()
extern "C"  Il2CppObject * Device_GetViewerList_m645073826 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SelectViewer(Vuforia.IViewerParameters)
extern "C"  bool Device_SelectViewer_m3327922579 (Device_t1860504872 * __this, Il2CppObject * ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.Device::GetSelectedViewer()
extern "C"  Il2CppObject * Device_GetSelectedViewer_m3761765071 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICustomViewerParameters Vuforia.Device::CreateCustomViewerParameters(System.Single,System.String,System.String)
extern "C"  Il2CppObject * Device_CreateCustomViewerParameters_m1149928607 (Device_t1860504872 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetPlayModeEyewearDevice()
extern "C"  void Device_SetPlayModeEyewearDevice_m1187330507 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::UnsetDevice()
extern "C"  void Device_UnsetDevice_m3159407959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::DeleteRenderingPrimitives()
extern "C"  void Device_DeleteRenderingPrimitives_m4037723359 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetViewerActive(System.Boolean)
extern "C"  void Device_SetViewerActive_m1008036893 (Device_t1860504872 * __this, bool ___isActive0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SetMode(Vuforia.Device/Mode)
extern "C"  bool Device_SetMode_m1521156141 (Device_t1860504872 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.Device::GetDistortionMesh(Vuforia.View,UnityEngine.Mesh)
extern "C"  Mesh_t1356156583 * Device_GetDistortionMesh_m2538401350 (Device_t1860504872 * __this, int32_t ___viewId0, Mesh_t1356156583 * ___oldMesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::GetTextureSize(Vuforia.View,System.Int32&,System.Int32&)
extern "C"  void Device_GetTextureSize_m1525311301 (Device_t1860504872 * __this, int32_t ___viewId0, int32_t* ___textureWidth1, int32_t* ___textureHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetProjectionMatrix(Vuforia.View,System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t2933234003  Device_GetProjectionMatrix_m2206724463 (Device_t1860504872 * __this, int32_t ___viewId0, float ___near1, float ___far2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetDistortionTextureViewport(Vuforia.View)
extern "C"  Rect_t3681755626  Device_GetDistortionTextureViewport_m1917920699 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetViewport(Vuforia.View)
extern "C"  Rect_t3681755626  Device_GetViewport_m1670722187 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetNormalizedViewport(Vuforia.View)
extern "C"  Rect_t3681755626  Device_GetNormalizedViewport_m3877469804 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetEyeDisplayAdjustmentMatrix(Vuforia.View)
extern "C"  Matrix4x4_t2933234003  Device_GetEyeDisplayAdjustmentMatrix_m3054861827 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Vuforia.Device::GetEffectiveFovRads(Vuforia.View)
extern "C"  Vector4_t2243707581  Device_GetEffectiveFovRads_m1782659422 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.Device::GetViewportCentreToEyeAxis(Vuforia.View)
extern "C"  Vector2_t2243707579  Device_GetViewportCentreToEyeAxis_m1945166372 (Device_t1860504872 * __this, int32_t ___viewId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.ctor()
extern "C"  void Device__ctor_m2337754346 (Device_t1860504872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.cctor()
extern "C"  void Device__cctor_m1006421149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

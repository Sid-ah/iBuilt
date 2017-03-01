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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t2427143318;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t3703236737;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t3995363782;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType3906864138.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData934532407.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3703236737.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl__ctor_m3921570766 (CloudRecoImageTargetImpl_t2427143318 * __this, String_t* ___name0, int32_t ___id1, Vector3_t2243707580  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m392286440 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C"  Vector3_t2243707580  CloudRecoImageTargetImpl_GetSize_m3190175895 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CloudRecoImageTargetImpl::GetLargestSizeComponent()
extern "C"  float CloudRecoImageTargetImpl_GetLargestSizeComponent_m2315964978 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl_SetSize_m3248189010 (CloudRecoImageTargetImpl_t2427143318 * __this, Vector3_t2243707580  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t3703236737 * CloudRecoImageTargetImpl_CreateVirtualButton_m403491976 (CloudRecoImageTargetImpl_t2427143318 * __this, String_t* ___name0, RectangleData_t934532407  ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t3703236737 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m748910883 (CloudRecoImageTargetImpl_t2427143318 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C"  Il2CppObject* CloudRecoImageTargetImpl_GetVirtualButtons_m4045798261 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool CloudRecoImageTargetImpl_DestroyVirtualButton_m2406708878 (CloudRecoImageTargetImpl_t2427143318 * __this, VirtualButton_t3703236737 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StartExtendedTracking_m4026259656 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StopExtendedTracking_m3289519250 (CloudRecoImageTargetImpl_t2427143318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t2700679413;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t199901830;
// System.String
struct String_t;
// Vuforia.InstanceId
struct InstanceId_t1732537268;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3922476088;
// Vuforia.Image
struct Image_t1391689025;
// Vuforia.ImageImpl
struct ImageImpl_t2564717533;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType467315012.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkTemplateImpl199901830.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3150040852.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl2564717533.h"

// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m2799170966 (VuMarkTargetImpl_t2700679413 * __this, int32_t ___id0, ByteU5BU5D_t3397334013* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t199901830 * ___template5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t2243707580  VuMarkTargetImpl_GetSize_m266131082 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuMarkTargetImpl::GetLargestSizeComponent()
extern "C"  float VuMarkTargetImpl_GetLargestSizeComponent_m1554647361 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTargetImpl_SetSize_m1721897007 (VuMarkTargetImpl_t2700679413 * __this, Vector3_t2243707580  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StartExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StartExtendedTracking_m1406240925 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StopExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StopExtendedTracking_m2975163645 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::ExtendedTrackingEnabled()
extern "C"  bool VuMarkTargetImpl_ExtendedTrackingEnabled_m902197676 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuMarkTargetImpl::get_Name()
extern "C"  String_t* VuMarkTargetImpl_get_Name_m931358238 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3173237059 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InstanceId Vuforia.VuMarkTargetImpl::get_InstanceId()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_InstanceId_m1883644529 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_Template_m977518223 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.VuMarkTargetImpl::get_InstanceImage()
extern "C"  Image_t1391689025 * VuMarkTargetImpl_get_InstanceImage_m188603180 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m191303874 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m2497056139 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_SetImageValues_m500105563 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t3150040852  ___imageHeader0, ImageImpl_t2564717533 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_AllocateImage_m2957561888 (Il2CppObject * __this /* static, unused */, ImageImpl_t2564717533 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

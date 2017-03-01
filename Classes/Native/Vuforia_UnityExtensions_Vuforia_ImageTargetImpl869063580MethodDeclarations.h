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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t869063580;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t626511550;
// Vuforia.VirtualButton
struct VirtualButton_t3703236737;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t3995363782;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType3906864138.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData934532407.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3703236737.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C"  void ImageTargetImpl__ctor_m2593363911 (ImageTargetImpl_t869063580 * __this, String_t* ___name0, int32_t ___id1, int32_t ___imageTargetType2, DataSet_t626511550 * ___dataSet3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t ImageTargetImpl_get_ImageTargetType_m932177854 (ImageTargetImpl_t869063580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t3703236737 * ImageTargetImpl_CreateVirtualButton_m3854995304 (ImageTargetImpl_t869063580 * __this, String_t* ___name0, RectangleData_t934532407  ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t3703236737 * ImageTargetImpl_GetVirtualButtonByName_m1711054985 (ImageTargetImpl_t869063580 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C"  Il2CppObject* ImageTargetImpl_GetVirtualButtons_m186656835 (ImageTargetImpl_t869063580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_DestroyVirtualButton_m2704165902 (ImageTargetImpl_t869063580 * __this, VirtualButton_t3703236737 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t3703236737 * ImageTargetImpl_CreateNewVirtualButtonInNative_m583407816 (ImageTargetImpl_t869063580 * __this, String_t* ___name0, RectangleData_t934532407  ___rectangleData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_UnregisterVirtualButtonInNative_m523759288 (ImageTargetImpl_t869063580 * __this, VirtualButton_t3703236737 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C"  void ImageTargetImpl_CreateVirtualButtonsFromNative_m361753039 (ImageTargetImpl_t869063580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

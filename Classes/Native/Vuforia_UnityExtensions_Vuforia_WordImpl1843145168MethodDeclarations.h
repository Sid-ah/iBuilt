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

// Vuforia.WordImpl
struct WordImpl_t1843145168;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t1391689025;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t2944021518;
// Vuforia.ImageImpl
struct ImageImpl_t2564717533;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3150040852.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl2564717533.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m2135802911 (WordImpl_t1843145168 * __this, int32_t ___id0, String_t* ___text1, Vector2_t2243707579  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m131447204 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t2243707579  WordImpl_get_Size_m2498138279 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t1391689025 * WordImpl_GetLetterMask_m1285376160 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t2944021518* WordImpl_GetLetterBoundingBoxes_m3281201375 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m492255088 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m1974445140 (WordImpl_t1843145168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m2453811954 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t3150040852  ___imageHeader0, ImageImpl_t2564717533 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m2347164983 (Il2CppObject * __this /* static, unused */, ImageImpl_t2564717533 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.ImageImpl
struct ImageImpl_t2564717533;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3010530044.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"

// System.Int32 Vuforia.ImageImpl::get_Width()
extern "C"  int32_t ImageImpl_get_Width_m2846704276 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Width(System.Int32)
extern "C"  void ImageImpl_set_Width_m1617992279 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Height()
extern "C"  int32_t ImageImpl_get_Height_m1190386785 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Height(System.Int32)
extern "C"  void ImageImpl_set_Height_m1808934552 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Stride()
extern "C"  int32_t ImageImpl_get_Stride_m2588114675 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Stride(System.Int32)
extern "C"  void ImageImpl_set_Stride_m1803209726 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferWidth()
extern "C"  int32_t ImageImpl_get_BufferWidth_m200377818 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferWidth(System.Int32)
extern "C"  void ImageImpl_set_BufferWidth_m492104915 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferHeight()
extern "C"  int32_t ImageImpl_get_BufferHeight_m601828869 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferHeight(System.Int32)
extern "C"  void ImageImpl_set_BufferHeight_m3144821170 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::get_PixelFormat()
extern "C"  int32_t ImageImpl_get_PixelFormat_m4082995534 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  void ImageImpl_set_PixelFormat_m2623990565 (ImageImpl_t2564717533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.ImageImpl::get_Pixels()
extern "C"  ByteU5BU5D_t3397334013* ImageImpl_get_Pixels_m2847445935 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Pixels(System.Byte[])
extern "C"  void ImageImpl_set_Pixels_m3848062066 (ImageImpl_t2564717533 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C"  IntPtr_t ImageImpl_get_UnmanagedData_m4100531499 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C"  void ImageImpl_set_UnmanagedData_m768794850 (ImageImpl_t2564717533 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C"  void ImageImpl__ctor_m1562615945 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::Finalize()
extern "C"  void ImageImpl_Finalize_m1850203523 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageImpl::IsValid()
extern "C"  bool ImageImpl_IsValid_m2070893053 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyToTexture(UnityEngine.Texture2D)
extern "C"  void ImageImpl_CopyToTexture_m2382529606 (ImageImpl_t2564717533 * __this, Texture2D_t3542995729 * ___texture2D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C"  void ImageImpl_CopyPixelsFromUnmanagedBuffer_m3959285315 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C"  Color32U5BU5D_t30278651* ImageImpl_GetPixels32_m3926724551 (ImageImpl_t2564717533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat Vuforia.ImageImpl::ConvertPixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  int32_t ImageImpl_ConvertPixelFormat_m2077189007 (ImageImpl_t2564717533 * __this, int32_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

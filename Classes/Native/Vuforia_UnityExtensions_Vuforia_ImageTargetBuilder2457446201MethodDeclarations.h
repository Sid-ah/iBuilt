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

// Vuforia.ImageTargetBuilderImpl
struct ImageTargetBuilderImpl_t2457446201;
// System.String
struct String_t;
// Vuforia.TrackableSource
struct TrackableSource_t2832298792;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder2061101710.h"

// System.Boolean Vuforia.ImageTargetBuilderImpl::Build(System.String,System.Single)
extern "C"  bool ImageTargetBuilderImpl_Build_m3394855988 (ImageTargetBuilderImpl_t2457446201 * __this, String_t* ___targetName0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StartScan()
extern "C"  void ImageTargetBuilderImpl_StartScan_m3041873830 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StopScan()
extern "C"  void ImageTargetBuilderImpl_StopScan_m1055866958 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.ImageTargetBuilderImpl::GetFrameQuality()
extern "C"  int32_t ImageTargetBuilderImpl_GetFrameQuality_m4132906308 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableSource Vuforia.ImageTargetBuilderImpl::GetTrackableSource()
extern "C"  TrackableSource_t2832298792 * ImageTargetBuilderImpl_GetTrackableSource_m193365126 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetBuilderImpl::IsScanning()
extern "C"  bool ImageTargetBuilderImpl_IsScanning_m2389375152 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::.ctor()
extern "C"  void ImageTargetBuilderImpl__ctor_m3200368865 (ImageTargetBuilderImpl_t2457446201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t211382711;
// Vuforia.WordList
struct WordList_t1278495262;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleIntData2869769236.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video3451594282.h"
#include "Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD944577254.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C"  WordList_t1278495262 * TextTrackerImpl_get_WordList_m3637742575 (TextTrackerImpl_t211382711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C"  bool TextTrackerImpl_Start_m3238301911 (TextTrackerImpl_t211382711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C"  void TextTrackerImpl_Stop_m119305535 (TextTrackerImpl_t211382711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool TextTrackerImpl_SetRegionOfInterest_m2711259384 (TextTrackerImpl_t211382711 * __this, Rect_t3681755626  ___detectionRegion0, Rect_t3681755626  ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool TextTrackerImpl_GetRegionOfInterest_m590102462 (TextTrackerImpl_t211382711 * __this, Rect_t3681755626 * ___detectionRegion0, Rect_t3681755626 * ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Rect_t3681755626  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m3215332742 (TextTrackerImpl_t211382711 * __this, RectangleIntData_t2869769236  ___camSpaceRectData0, Rect_t3681755626  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t3451594282  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C"  int32_t TextTrackerImpl_get_CurrentUpDirection_m3412825062 (TextTrackerImpl_t211382711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C"  void TextTrackerImpl__ctor_m3562927119 (TextTrackerImpl_t211382711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

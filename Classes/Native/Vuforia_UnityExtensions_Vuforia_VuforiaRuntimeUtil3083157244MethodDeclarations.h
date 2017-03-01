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

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_t3083157244;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora3897282321.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec829768013.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video3451594282.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo3172429123.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"

// System.String Vuforia.VuforiaRuntimeUtilities::GetStoragePath(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  String_t* VuforiaRuntimeUtilities_GetStoragePath_m937083168 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m3600327917 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m1976521327 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m2573996161 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C"  int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m1546146121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m1736391522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m989453348 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C"  void VuforiaRuntimeUtilities_ForceDisableTrackables_m1370852495 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m2939358997 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWSARuntime()
extern "C"  bool VuforiaRuntimeUtilities_IsWSARuntime_m3848252715 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1774515559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsWebCamUsed()
extern "C"  bool VuforiaRuntimeUtilities_IsWebCamUsed_m1353111182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vec2I_t829768013  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m3801339830 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___screenSpaceCoordinate0, Rect_t3681755626  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t3451594282  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vector2_t2243707579  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m1680369179 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___cameraFrameCoordinate0, Rect_t3681755626  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t3451594282  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t3172429123  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3404428623 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t3172429123  ___cameraFrameObb0, Rect_t3681755626  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t3451594282  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m1389683231 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenSpaceRect0, bool ___isMirrored1, Vector2_t2243707579 * ___topLeft2, Vector2_t2243707579 * ___bottomRight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  Rect_t3681755626  VuforiaRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m1942396741 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___topLeft0, Vector2_t2243707579  ___bottomRight1, bool ___isMirrored2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C"  void VuforiaRuntimeUtilities_DisableSleepMode_m2123290978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C"  void VuforiaRuntimeUtilities_ResetSleepMode_m2455636941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::MatrixIsNaN(UnityEngine.Matrix4x4)
extern "C"  bool VuforiaRuntimeUtilities_MatrixIsNaN_m431823786 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::CheckNativePluginSupport()
extern "C"  bool VuforiaRuntimeUtilities_CheckNativePluginSupport_m1706982001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsNativePluginSupportAvailable()
extern "C"  bool VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m148657444 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::StopCameraIfPossible(System.Boolean&)
extern "C"  bool VuforiaRuntimeUtilities_StopCameraIfPossible_m3496297228 (Il2CppObject * __this /* static, unused */, bool* ___objectTrackerWasStopped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::CleanTrackableFromUnwantedComponents(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaRuntimeUtilities_CleanTrackableFromUnwantedComponents_m2746381936 (Il2CppObject * __this /* static, unused */, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C"  void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m1474731089 (Il2CppObject * __this /* static, unused */, bool ___isTextureMirrored0, float* ___prefixX1, float* ___prefixY2, float* ___inversionMultiplierX3, float* ___inversionMultiplierY4, bool* ___isPortrait5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRuntimeUtilities::qcarCheckNativePluginSupport()
extern "C"  int32_t VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m1038601354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C"  void VuforiaRuntimeUtilities__ctor_m222360936 (VuforiaRuntimeUtilities_t3083157244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C"  void VuforiaRuntimeUtilities__cctor_m1059653703 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

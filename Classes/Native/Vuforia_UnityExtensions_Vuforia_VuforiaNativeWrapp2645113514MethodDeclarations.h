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

// Vuforia.VuforiaNativeWrapper
struct VuforiaNativeWrapper_t2645113514;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceDeinitCamera_m1109208629 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetCameraDirection_m703468441 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CameraDeviceGetCameraField_m63553131 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetCameraFieldOfViewRads_m808578640 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___fovVectorContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldBool_m2539675793 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldFloat_m423682739 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldInt64_m531726890 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldInt64Range_m3248407549 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, IntPtr_t ___intRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetFieldString_m1690296337 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, StringBuilder_t1221177846 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetNumCameraFields_m2982742771 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceGetNumVideoModes_m1468494034 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CameraDeviceGetVideoMode_m831836610 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceInitCamera_m2164031797 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSelectVideoMode_m1038892030 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_CameraDeviceSetCameraConfiguration_m3586296648 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldBool_m1466270898 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldFloat_m3231490170 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldInt64_m3339716288 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldInt64Range_m4205204779 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFieldString_m2544232480 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFlashTorchMode_m1268187253 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceSetFocusMode_m1516702471 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceStartCamera_m1648509688 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeWrapper_CameraDeviceStopCamera_m382415192 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_AddDistortionCoefficient_m4050510332 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_ClearDistortionCoefficients_m2969993578 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_delete_m2560137619 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_CustomViewerParameters_new_m2285257164 (VuforiaNativeWrapper_t2645113514 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetButtonType_m2557764195 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetContainsMagnet_m441592582 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetFieldOfView_m4256636688 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetInterLensDistance_m750366472 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m1881978978 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetScreenToLensDistance_m2504455073 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_CustomViewerParameters_SetTrayAlignment_m2300096494 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetGetDimensions_m4288176978 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetBottomDiameter_m322495034 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetSideLength_m258427277 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_CylinderTargetSetTopDiameter_m449536726 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetCreateTrackable_m2990128992 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetDestroyTrackable_m3681595572 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetExists_m2807206103 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetNumTrackableType_m2351326228 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetTrackableName_m3695645824 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetGetTrackablesOfType_m604571841 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetHasReachedTrackableLimit_m2620656106 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_DataSetLoad_m1260320755 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_DeinitFrameState_m3888900699 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNativeWrapper_Device_GetMode_m424990260 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeWrapper_Device_GetSelectedViewer_m2323016995 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeWrapper_Device_GetViewerList_m700311300 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::Device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeWrapper_Device_IsViewerPresent_m2010970110 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_Device_SelectViewer_m116751893 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::Device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_Device_SetMode_m1718017929 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeWrapper_Device_SetViewerPresent_m2479357667 (VuforiaNativeWrapper_t2645113514 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DeviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeWrapper_DeviceIsEyewearDevice_m2970460386 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMClearProfile_m3627509031 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetActiveProfile_m3497764733 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetCameraToEyePose_m941746972 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetEyeProjection_m1482460470 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetMaxCount_m3171668281 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_EyewearCPMGetProfileName_m505697772 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMGetUsedCount_m280960342 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMIsProfileUsed_m2552144799 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetActiveProfile_m2104105680 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetCameraToEyePose_m2875139712 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetEyeProjection_m3300367642 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearCPMSetProfileName_m553815769 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceGetScreenOrientation_m378511126 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceIsDisplayExtended_m4119027101 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m1981191680 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceIsDualDisplay_m771840902 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m2051618457 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceIsSeeThru_m3209053292 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceSetDisplayExtended_m587511586 (VuforiaNativeWrapper_t2645113514 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_EyewearDeviceSetPredictiveTracking_m2880039531 (VuforiaNativeWrapper_t2645113514 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m3515881541 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m497648927 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m344279799 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_EyewearUserCalibratorInit_m1428546714 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeWrapper_EyewearUserCalibratorIsStereoStretched_m3029041672 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_FrameCounterGetBenchmarkingData_m2933366218 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeWrapper_GetCameraThreadID_m2761409230 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_GetProjectionGL_m844412913 (VuforiaNativeWrapper_t2645113514 * __this, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeWrapper_GetVuforiaLibraryVersion_m354038804 (VuforiaNativeWrapper_t2645113514 * __this, StringBuilder_t1221177846 * ___value0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::HasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeWrapper_HasSurfaceBeenRecreated_m2036938132 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetBuilderBuild_m910660886 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___name0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetBuilderGetFrameQuality_m2416629835 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeWrapper_ImageTargetBuilderGetTrackableSource_m2360215990 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeWrapper_ImageTargetBuilderStartScan_m809644532 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeWrapper_ImageTargetBuilderStopScan_m2535540620 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetCreateVirtualButton_m1368760967 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetDestroyVirtualButton_m82814135 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetNumVirtualButtons_m3628348058 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtonName_m2112234436 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t1221177846 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtons_m2320424507 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_InitFrameState_m4223899912 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeWrapper_InitPlatformNative_m2860361880 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::MultiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeWrapper_MultiTargetGetLargestSizeComponent_m2654880854 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTargetGetSize_m1080718975 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTargetSetSize_m2490596547 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerActivateDataSet_m1405592088 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeWrapper_ObjectTrackerCreateDataSet_m3669350956 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerDeactivateDataSet_m1775103787 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerDestroyDataSet_m1829171873 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerPersistExtendedTracking_m49830696 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeWrapper_ObjectTrackerResetExtendedTracking_m3037757866 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnPause()
extern "C"  void VuforiaNativeWrapper_OnPause_m2681763759 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnResume()
extern "C"  void VuforiaNativeWrapper_OnResume_m3769569024 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_OnSurfaceChanged_m51781902 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_QcarAddCameraFrame_m800762140 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::QcarDeinit()
extern "C"  void VuforiaNativeWrapper_QcarDeinit_m4180067380 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarGetBufferSize_m812514041 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeWrapper_QcarInit_m1548867895 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarSetFrameFormat_m3674889639 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_QcarSetHint_m2216260991 (VuforiaNativeWrapper_t2645113514 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4241304182 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m2216601704 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionIsReconstructing_m4219088470 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionReset_m2652192527 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionSetMaximumArea_m2200790357 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_ReconstructionSetNavMeshPadding_m1245734770 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionStart_m1708729006 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ReconstructionStop_m2213730332 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::RendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_RendererCreateNativeTexture_m4108368443 (VuforiaNativeWrapper_t2645113514 * __this, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererEnd()
extern "C"  void VuforiaNativeWrapper_RendererEnd_m2755310140 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeWrapper_RendererGetGraphicsAPI_m311384318 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RendererGetRecommendedFps_m2718147006 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RendererGetVideoBackgroundCfg_m3445707232 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_RendererGetVideoBackgroundTextureInfo_m813611765 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3325794448 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RendererSetVideoBackgroundCfg_m316024940 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTextureID_m2114615881 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTexturePtr_m1202149405 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_DeleteCopy_m3000368135 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionMesh_m4283176662 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionMeshSize_m912665527 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetDistortionTextureViewport_m1785851748 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetEffectiveFov_m3093465092 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m738133225 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetNormalizedViewport_m52452887 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetProjectionMatrix_m574647785 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetViewport_m2137207794 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m266470848 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeWrapper_RenderingPrimitives_UpdateCopy_m2449350739 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m3601203876 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m556679759 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_GetPosePrediction_m2112929460 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_Recenter_m3572830818 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m900228177 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m3356567657 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_RotationalDeviceTracker_SetPosePrediction_m3042270249 (VuforiaNativeWrapper_t2645113514 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_SetApplicationEnvironment_m3227637697 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SetHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_SetHolographicAppCS_m3683919625 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___appSpecifiedCS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_SetRenderBuffers_m2507583749 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeWrapper_SetStateBufferSize_m2648144133 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainBuilderAddReconstruction_m408374664 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m464511443 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m2726296039 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m3369434467 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m3540107375 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainTrackerDeinitBuilder_m3528945108 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainTrackerInitBuilder_m2371827647 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m1896207680 (VuforiaNativeWrapper_t2645113514 * __this, float ___scaleToMillimenters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_StartExtendedTracking_m1582118465 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_StopExtendedTracking_m809694617 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeWrapper_TargetFinderClearTrackables_m2478094286 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderDeinit_m793830682 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderEnableTracking_m4099626151 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_TargetFinderGetImageTargets_m189431547 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderGetInitState_m2991932808 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderGetResults_m3707893436 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStartInit_m2209911127 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStartRecognition_m660185564 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeWrapper_TargetFinderStop_m864798381 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_TargetFinderUpdate_m3958322217 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_TextTrackerGetRegionOfInterest_m474085108 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TextTrackerSetRegionOfInterest_m2425820735 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TrackerManagerDeinitTracker_m2521888619 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TrackerManagerInitTracker_m1042086034 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_TrackerStart_m2627030839 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNativeWrapper_TrackerStop_m1349417349 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_UpdateQCAR_m334369828 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_ContainsMagnet_m3851168722 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_copy_m2541527997 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_ViewerParameters_delete_m3934079046 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetButtonType_m2399075267 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetDistortionCoefficient_m2805254700 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_ViewerParameters_GetFieldOfView_m994860239 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetInterLensDistance_m3452712974 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetLensCentreToTrayDistance_m391308882 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_GetManufacturer_m3535128349 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParameters_GetName_m3589734657 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetNumDistortionCoefficients_m1434048572 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetScreenToLensDistance_m365067601 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParameters_GetTrayAlignment_m224107260 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_ViewerParameters_GetVersion_m1936265387 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Begin_m3690712145 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_GetByIndex_m2565238122 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_GetByNameManufacturer_m3464335699 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_GetListForAuthoringTools_m561272181 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_ViewerParametersList_Next_m1307807527 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeWrapper_ViewerParametersList_SetSDKFilter_m172044647 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_ViewerParametersList_Size_m1586103964 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonGetId_m694900924 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetAreaRectangle_m3735602825 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetEnabled_m2700062673 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_VirtualButtonSetSensitivity_m941855429 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeWrapper_VuforiaGetRenderEventCallback_m2198644342 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTargetGetInstanceImage_m50631174 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateGetOrigin_m3473411830 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateGetVuMarkUserData_m4092156073 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t1221177846 * ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m2541755296 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordGetLetterBoundingBoxes_m714582278 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordGetLetterMask_m1848572543 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordsFromFile_m3894640849 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordToFilterListU_m2143677823 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListAddWordU_m2234464154 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeWrapper_WordListClearFilterList_m857813409 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListContainsWordU_m410011466 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeWrapper_WordListGetFilterListWordCount_m4067127347 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_WordListGetFilterListWordU_m686241119 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeWrapper_WordListGetFilterMode_m1898643183 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListLoadFilterList_m153306409 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListLoadWordList_m3917314203 (VuforiaNativeWrapper_t2645113514 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListRemoveWordFromFilterListU_m513490925 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_WordListRemoveWordU_m2959518757 (VuforiaNativeWrapper_t2645113514 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_WordListSetFilterMode_m1278809324 (VuforiaNativeWrapper_t2645113514 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeWrapper_WordListUnloadAllLists_m437045667 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceDeinitCamera_m4219703893 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetCameraDirection_m2401033145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_cameraDeviceGetCameraField_m2600414923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cameraField0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetCameraFieldOfViewRads_m753933936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___fovVectorContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldBool_m4040444337 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldFloat_m3650590099 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldInt64_m3267825034 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldInt64Range_m1758802909 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___intRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetFieldString_m3351294513 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t1221177846 * ___value1, int32_t ___maxLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetNumCameraFields_m3022289683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceGetNumVideoModes_m1617386610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_cameraDeviceGetVideoMode_m686866146 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceInitCamera_m3271950677 (Il2CppObject * __this /* static, unused */, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSelectVideoMode_m3123920734 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_cameraDeviceSetCameraConfiguration_m2074319656 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldBool_m1910033874 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldFloat_m1203177242 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldInt64_m4226630496 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldInt64Range_m3417788619 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFieldString_m1167631232 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFlashTorchMode_m987214613 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceSetFocusMode_m754677991 (Il2CppObject * __this /* static, unused */, int32_t ___focusMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceStartCamera_m1692944472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeWrapper_cameraDeviceStopCamera_m1259053624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_AddDistortionCoefficient_m413939100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_ClearDistortionCoefficients_m1194991818 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_delete_m2379453683 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_customViewerParameters_new_m2125218156 (Il2CppObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetButtonType_m300520387 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetContainsMagnet_m1853518630 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetFieldOfView_m2657211120 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetInterLensDistance_m3585563240 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetLensCentreToTrayDistance_m2196889346 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetScreenToLensDistance_m3153848193 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_customViewerParameters_SetTrayAlignment_m2685206414 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetGetDimensions_m2149491314 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetBottomDiameter_m373820186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetSideLength_m2452915437 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_cylinderTargetSetTopDiameter_m1932526582 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetCreateTrackable_m1637079488 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetDestroyTrackable_m630077332 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetExists_m667588599 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetNumTrackableType_m3985595764 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetTrackableName_m819104800 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetGetTrackablesOfType_m3970202721 (Il2CppObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetHasReachedTrackableLimit_m3457465354 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_dataSetLoad_m3890757715 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_deinitFrameState_m194699131 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeWrapper_device_GetMode_m310845780 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeWrapper_device_GetSelectedViewer_m2226509315 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeWrapper_device_GetViewerList_m2441017316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeWrapper_device_IsViewerPresent_m1486093406 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_device_SelectViewer_m2510235061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_device_SetMode_m2099758953 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeWrapper_device_SetViewerPresent_m4028844547 (Il2CppObject * __this /* static, unused */, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeWrapper_deviceIsEyewearDevice_m1088392962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMClearProfile_m3838594439 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetActiveProfile_m3855135517 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetCameraToEyePose_m1383118460 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetEyeProjection_m1748705494 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetMaxCount_m3406048793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_eyewearCPMGetProfileName_m2665778956 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMGetUsedCount_m944267382 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMIsProfileUsed_m1923593855 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetActiveProfile_m3135509040 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetCameraToEyePose_m3316511200 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetEyeProjection_m3566612666 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearCPMSetProfileName_m3420132601 (Il2CppObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceGetScreenOrientation_m1904932918 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDisplayExtended_m1519405693 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m1047329568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsDualDisplay_m1724349606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m2951791865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceIsSeeThru_m1119616716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceSetDisplayExtended_m2123754818 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_eyewearDeviceSetPredictiveTracking_m1482673163 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m499366373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m1472226495 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m2427406231 (Il2CppObject * __this /* static, unused */, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorInit_m639017466 (Il2CppObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeWrapper_eyewearUserCalibratorIsStereoStretched_m1648620072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_frameCounterGetBenchmarkingData_m3146208618 (Il2CppObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeWrapper_getCameraThreadID_m2369258158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_getProjectionGL_m152731153 (Il2CppObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeWrapper_getVuforiaLibraryVersion_m4106512244 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___value0, int32_t ___maxLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeWrapper_hasSurfaceBeenRecreated_m4147998836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetBuilderBuild_m4139814006 (Il2CppObject * __this /* static, unused */, String_t* ___name0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeWrapper_imageTargetBuilderGetFrameQuality_m3815886699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeWrapper_imageTargetBuilderGetTrackableSource_m3676749142 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeWrapper_imageTargetBuilderStartScan_m491243668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeWrapper_imageTargetBuilderStopScan_m3697451820 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetCreateVirtualButton_m3357179879 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetDestroyVirtualButton_m4207113303 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetNumVirtualButtons_m441334138 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtonName_m1217998884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t1221177846 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtons_m3961565275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_initFrameState_m2998378728 (Il2CppObject * __this /* static, unused */, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initPlatformNative()
extern "C"  void VuforiaNativeWrapper_initPlatformNative_m2039690296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::multiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeWrapper_multiTargetGetLargestSizeComponent_m1862802294 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTargetGetSize_m2150902047 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTargetSetSize_m3560779619 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerActivateDataSet_m3431537464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeWrapper_objectTrackerCreateDataSet_m976305484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerDeactivateDataSet_m2930407563 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerDestroyDataSet_m428522689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerPersistExtendedTracking_m3306568840 (Il2CppObject * __this /* static, unused */, int32_t ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeWrapper_objectTrackerResetExtendedTracking_m2904863626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onPause()
extern "C"  void VuforiaNativeWrapper_onPause_m2643881807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onResume()
extern "C"  void VuforiaNativeWrapper_onResume_m3731695520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_onSurfaceChanged_m4067509614 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_qcarAddCameraFrame_m351656252 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::qcarDeinit()
extern "C"  void VuforiaNativeWrapper_qcarDeinit_m2998966292 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarGetBufferSize_m248372185 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeWrapper_qcarInit_m1662005975 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarSetFrameFormat_m3074094087 (Il2CppObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_qcarSetHint_m4155760287 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m3916566870 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionFromTargetSetInitializationTarget_m2592142536 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionIsReconstructing_m2923969014 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionReset_m1642657839 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionSetMaximumArea_m378375349 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeWrapper_reconstructionSetNavMeshPadding_m2807717266 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionStart_m2129778766 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_reconstructionStop_m3099766012 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::rendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_rendererCreateNativeTexture_m499622875 (Il2CppObject * __this /* static, unused */, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererEnd()
extern "C"  void VuforiaNativeWrapper_rendererEnd_m2514244188 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeWrapper_rendererGetGraphicsAPI_m2912221086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rendererGetRecommendedFps_m3352865310 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rendererGetVideoBackgroundCfg_m2516003008 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_rendererGetVideoBackgroundTextureInfo_m969300693 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m2647975856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rendererSetVideoBackgroundCfg_m3681288012 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTextureID_m323774441 (Il2CppObject * __this /* static, unused */, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTexturePtr_m3208397117 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_DeleteCopy_m1503846695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionMesh_m584414326 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionMeshSize_m3734207831 (Il2CppObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetDistortionTextureViewport_m3706007108 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetEffectiveFov_m2974713892 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m1670241993 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetNormalizedViewport_m1095725751 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetProjectionMatrix_m3281247241 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetViewport_m3415550290 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m3582423392 (Il2CppObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeWrapper_renderingPrimitives_UpdateCopy_m952689779 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1644218884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m3353439215 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_GetPosePrediction_m3773104276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_Recenter_m1839585666 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m2980623857 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2483871049 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_rotationalDeviceTracker_SetPosePrediction_m2407139081 (Il2CppObject * __this /* static, unused */, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeWrapper_setApplicationEnvironment_m4251470817 (Il2CppObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::setHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_setHolographicAppCS_m25892073 (Il2CppObject * __this /* static, unused */, IntPtr_t ___appSpecifiedCS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_setRenderBuffers_m2134602725 (Il2CppObject * __this /* static, unused */, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeWrapper_setStateBufferSize_m1346191333 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderAddReconstruction_m1696364648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3734179059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m2378007559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderDestroyReconstruction_m3285370947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainBuilderRemoveReconstruction_m1273352847 (Il2CppObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerDeinitBuilder_m2680314868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerInitBuilder_m4098769311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m1090673760 (Il2CppObject * __this /* static, unused */, float ___scaleToMillimenters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_startExtendedTracking_m4085874657 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_stopExtendedTracking_m353569209 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeWrapper_targetFinderClearTrackables_m2526441262 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderDeinit_m1484163770 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderEnableTracking_m38241287 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_targetFinderGetImageTargets_m456651291 (Il2CppObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderGetInitState_m1497219688 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderGetResults_m1283572124 (Il2CppObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStartInit_m2442180407 (Il2CppObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStartRecognition_m191924028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeWrapper_targetFinderStop_m1362528013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeWrapper_targetFinderUpdate_m2352440713 (Il2CppObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_textTrackerGetRegionOfInterest_m1891530900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_textTrackerSetRegionOfInterest_m3471806751 (Il2CppObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerManagerDeinitTracker_m2273347339 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerManagerInitTracker_m858909298 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_trackerStart_m568363351 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeWrapper_trackerStop_m2575825061 (Il2CppObject * __this /* static, unused */, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_updateQCAR_m1093217348 (Il2CppObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_ContainsMagnet_m1499879730 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_copy_m569414813 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeWrapper_viewerParameters_delete_m3849308198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetButtonType_m3479264483 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetDistortionCoefficient_m1565627276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeWrapper_viewerParameters_GetFieldOfView_m3035666863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetInterLensDistance_m3407840686 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetLensCentreToTrayDistance_m3353119410 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_GetManufacturer_m265937277 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParameters_GetName_m2432302177 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetNumDistortionCoefficients_m3854295580 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetScreenToLensDistance_m1173661425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParameters_GetTrayAlignment_m1705092636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeWrapper_viewerParameters_GetVersion_m3414344075 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_Begin_m3298523633 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetByIndex_m1255506634 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetByNameManufacturer_m529139379 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_GetListForAuthoringTools_m2114064725 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeWrapper_viewerParametersList_Next_m2110456839 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeWrapper_viewerParametersList_SetSDKFilter_m3030342599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_viewerParametersList_Size_m1603735676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonGetId_m2307391772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetAreaRectangle_m1540384489 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetEnabled_m4204282993 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_virtualButtonSetSensitivity_m924368869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeWrapper_vuforiaGetRenderEventCallback_m3628388438 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTargetGetInstanceImage_m3526919718 (Il2CppObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateGetOrigin_m3601807190 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateGetVuMarkUserData_m2215830537 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t1221177846 * ___data2, uint32_t ___dataLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m231246400 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordGetLetterBoundingBoxes_m1609842662 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordGetLetterMask_m3756631839 (Il2CppObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordsFromFile_m2923970929 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordToFilterListU_m1962642783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListAddWordU_m1925461882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeWrapper_wordListClearFilterList_m3088835841 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListContainsWordU_m280995818 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeWrapper_wordListGetFilterListWordCount_m351766995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeWrapper_wordListGetFilterListWordU_m847201919 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeWrapper_wordListGetFilterMode_m3740979215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListLoadFilterList_m2452788105 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListLoadWordList_m3728913723 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListRemoveWordFromFilterListU_m716212941 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeWrapper_wordListRemoveWordU_m1201629957 (Il2CppObject * __this /* static, unused */, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeWrapper_wordListSetFilterMode_m209973708 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeWrapper_wordListUnloadAllLists_m3021676931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::.ctor()
extern "C"  void VuforiaNativeWrapper__ctor_m4015888056 (VuforiaNativeWrapper_t2645113514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

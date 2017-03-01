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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t3885489748;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t2072015617;
// Vuforia.WordManager
struct WordManager_t1585193471;
// Vuforia.VuMarkManager
struct VuMarkManager_t3604726399;
// Vuforia.Trackable
struct Trackable_t432275407;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t4245242584;
// Vuforia.DataSet
struct DataSet_t626511550;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t3327552701;
// Vuforia.ImageTarget
struct ImageTarget_t2090577482;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t1634063505;
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t1439643011;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t644033633;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t1250596477;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t148237038;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t388531058;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t2097550852;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t2972779363;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t3616801211;
// Vuforia.MultiTarget
struct MultiTarget_t314883130;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t665872082;
// Vuforia.CylinderTarget
struct CylinderTarget_t2505063929;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t1830666997;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3922476088;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t2805337095;
// Vuforia.ObjectTarget
struct ObjectTarget_t1960696348;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra1329355276.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C"  Il2CppObject* StateManagerImpl_GetActiveTrackableBehaviours_m3188209273 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C"  Il2CppObject* StateManagerImpl_GetTrackableBehaviours_m2498430077 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C"  WordManager_t1585193471 * StateManagerImpl_GetWordManager_m1212839285 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkManager Vuforia.StateManagerImpl::GetVuMarkManager()
extern "C"  VuMarkManager_t3604726399 * StateManagerImpl_GetVuMarkManager_m4048863781 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m2189903977 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___trackable0, bool ___destroyGameObjects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ReassociateTrackables()
extern "C"  void StateManagerImpl_ReassociateTrackables_m4093501627 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetExtendedTrackingManager(Vuforia.IExtendedTrackingManager)
extern "C"  void StateManagerImpl_SetExtendedTrackingManager_m3767416747 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___extendedTrackingManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IExtendedTrackingManager Vuforia.StateManagerImpl::GetExtendedTrackingManager()
extern "C"  Il2CppObject * StateManagerImpl_GetExtendedTrackingManager_m1335164220 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m605110910 (StateManagerImpl_t3885489748 * __this, DataSet_t626511550 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C"  void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m2854225912 (StateManagerImpl_t3885489748 * __this, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C"  void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m1668424766 (StateManagerImpl_t3885489748 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C"  void StateManagerImpl_RemoveDestroyedTrackables_m3493103741 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C"  void StateManagerImpl_ClearTrackableBehaviours_m948612896 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m3679415397 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___trackable0, GameObject_t1756533147 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m1783817517 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___trackable0, GameObject_t1756533147 * ___gameObject1, DataSet_t626511550 * ___dataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C"  void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m2100230538 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_EnableTrackableBehavioursForTrackable_m1913018672 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___trackable0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>&)
extern "C"  void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m2204456482 (StateManagerImpl_t3885489748 * __this, LinkedList_1_t1634063505 ** ___trackableIDs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPoseWRTTrackable(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManager/TrackableIdPair,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_UpdateCameraPoseWRTTrackable_m1054313662 (StateManagerImpl_t3885489748 * __this, Transform_t3275118058 * ___cameraTransform0, Transform_t3275118058 * ___parentTransformToUpdate1, TrackableIdPair_t1329355276  ___trackableId2, PoseData_t1264148721  ___trackablePose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[],Vuforia.VuforiaManager/TrackableIdPair,System.Int32)
extern "C"  void StateManagerImpl_UpdateTrackablePoses_m948589520 (StateManagerImpl_t3885489748 * __this, Transform_t3275118058 * ___arCameraTransform0, TrackableResultDataU5BU5D_t1439643011* ___trackableResultDataArray1, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResultDataArray2, TrackableIdPair_t1329355276  ___originTrackableID3, int32_t ___frameIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C"  void StateManagerImpl_UpdateVirtualButtons_m1831629644 (StateManagerImpl_t3885489748 * __this, int32_t ___numVirtualButtons0, IntPtr_t ___virtualButtonPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void StateManagerImpl_UpdateWords_m3051686358 (StateManagerImpl_t3885489748 * __this, Transform_t3275118058 * ___arCameraTransform0, WordDataU5BU5D_t1250596477* ___wordData1, WordResultDataU5BU5D_t148237038* ___wordResultData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void StateManagerImpl_UpdateVuMarks_m1642590239 (StateManagerImpl_t3885489748 * __this, VuMarkTargetDataU5BU5D_t388531058* ___vuMarkData0, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResultData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DeviceTrackingManager Vuforia.StateManagerImpl::GetDeviceTrackingManager()
extern "C"  DeviceTrackingManager_t2097550852 * StateManagerImpl_GetDeviceTrackingManager_m3049689921 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StateManagerImpl::TryGetBehaviour(Vuforia.VuforiaManager/TrackableIdPair,Vuforia.TrackableBehaviour&)
extern "C"  bool StateManagerImpl_TryGetBehaviour_m4080092800 (StateManagerImpl_t3885489748 * __this, TrackableIdPair_t1329355276  ___trackableId0, TrackableBehaviour_t1779888572 ** ___trackableBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateVirtualButtonBehaviours_m3624020269 (StateManagerImpl_t3885489748 * __this, VirtualButtonAbstractBehaviourU5BU5D_t2972779363* ___vbBehaviours0, DataSet_t626511550 * ___dataSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C"  void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m3568257287 (StateManagerImpl_t3885489748 * __this, DataSet_t626511550 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * StateManagerImpl_CreateImageTargetBehaviour_m3101612347 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___imageTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C"  MultiTargetAbstractBehaviour_t3616801211 * StateManagerImpl_CreateMultiTargetBehaviour_m3905144773 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___multiTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C"  CylinderTargetAbstractBehaviour_t665872082 * StateManagerImpl_CreateCylinderTargetBehaviour_m3709521290 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___cylinderTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.StateManagerImpl::CreateVuMarkBehaviour(Vuforia.VuMarkTemplate)
extern "C"  VuMarkAbstractBehaviour_t1830666997 * StateManagerImpl_CreateVuMarkBehaviour_m2036105967 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C"  ObjectTargetAbstractBehaviour_t2805337095 * StateManagerImpl_CreateObjectTargetBehaviour_m411101805 (StateManagerImpl_t3885489748 * __this, Il2CppObject * ___objectTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCameraToTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionCameraToTrackable_m3867107221 (StateManagerImpl_t3885489748 * __this, TrackableBehaviour_t1779888572 * ___trackable0, Transform_t3275118058 * ___cameraTransform1, Transform_t3275118058 * ___parentTransformToUpdate2, PoseData_t1264148721  ___camToTargetPose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t2243707580  StateManagerImpl_ExtractTranslationFromMatrix_m244134135 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t4030073918  StateManagerImpl_ExtractRotationFromMatrix_m3042784432 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData,System.Double)
extern "C"  void StateManagerImpl_PositionTrackable_m691777470 (Il2CppObject * __this /* static, unused */, TrackableBehaviour_t1779888572 * ___trackableBehaviour0, Transform_t3275118058 * ___arCameraTransform1, PoseData_t1264148721  ___camToTargetPose2, double ___timeStamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C"  void StateManagerImpl__ctor_m1684002598 (StateManagerImpl_t3885489748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.VuMarkManagerImpl
struct VuMarkManagerImpl_t1660847547;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkTarget>
struct IEnumerable_1_t515111798;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour>
struct IEnumerable_1_t2122794042;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t222984753;
// System.Action`1<Vuforia.VuMarkTarget>
struct Action_1_t24784135;
// System.Action`1<Vuforia.VuMarkAbstractBehaviour>
struct Action_1_t1632466379;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t388531058;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t644033633;
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t1830666997;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3922476088;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t448824215;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkAbstractBeha1830666997.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1779888572.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl2130450083.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManagerImpl::GetActiveVuMarks()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveVuMarks_m3057777205 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetActiveBehaviours(Vuforia.VuMarkTarget)
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveBehaviours_m193147855 (VuMarkManagerImpl_t1660847547 * __this, Il2CppObject * ___vuMark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetActiveBehaviours()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveBehaviours_m2701874204 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetAllBehaviours()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetAllBehaviours_m824777727 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkDetectedCallback_m1548121458 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t24784135 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkDetectedCallback_m2011038775 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t24784135 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkLostCallback_m1875841390 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t24784135 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkLostCallback_m561735977 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t24784135 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkAbstractBehaviour>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkBehaviourDetectedCallback_m4277724253 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t1632466379 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkAbstractBehaviour>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkBehaviourDetectedCallback_m1301588478 (VuMarkManagerImpl_t1660847547 * __this, Action_1_t1632466379 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void VuMarkManagerImpl_UpdateVuMarks_m4251157048 (VuMarkManagerImpl_t1660847547 * __this, VuMarkTargetDataU5BU5D_t388531058* ___newVuMarks0, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarkPoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[],System.Int32)
extern "C"  void VuMarkManagerImpl_UpdateVuMarkPoses_m1799620 (VuMarkManagerImpl_t1660847547 * __this, Transform_t3275118058 * ___arCameraTransform0, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResults1, int32_t ___originTrackableResultId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::AddTemplateBehaviour(Vuforia.VuMarkAbstractBehaviour)
extern "C"  bool VuMarkManagerImpl_AddTemplateBehaviour_m2587528850 (VuMarkManagerImpl_t1660847547 * __this, VuMarkAbstractBehaviour_t1830666997 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::ContainsVuMarkTemplate(System.Int32)
extern "C"  bool VuMarkManagerImpl_ContainsVuMarkTemplate_m3766230023 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::ClearBehaviours()
extern "C"  void VuMarkManagerImpl_ClearBehaviours_m3239519372 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::DestroyBehaviourCopies()
extern "C"  void VuMarkManagerImpl_DestroyBehaviourCopies_m1656270747 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RemoveDestroyedTrackables()
extern "C"  void VuMarkManagerImpl_RemoveDestroyedTrackables_m2442166898 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::IsBehaviourMarkedForDeletion(Vuforia.TrackableBehaviour)
extern "C"  bool VuMarkManagerImpl_IsBehaviourMarkedForDeletion_m2344385681 (VuMarkManagerImpl_t1660847547 * __this, TrackableBehaviour_t1779888572 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::GetBehaviourWithResultID(System.Int32)
extern "C"  VuMarkAbstractBehaviour_t1830666997 * VuMarkManagerImpl_GetBehaviourWithResultID_m2260936321 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___resultId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateNewVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[])
extern "C"  void VuMarkManagerImpl_UpdateNewVuMarks_m1556174676 (VuMarkManagerImpl_t1660847547 * __this, VuMarkTargetDataU5BU5D_t388531058* ___newVuMarks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateLostVuMarks(System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  void VuMarkManagerImpl_UpdateLostVuMarks_m3845955716 (VuMarkManagerImpl_t1660847547 * __this, HashSet_1_t405338302 * ___trackedIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkManagerImpl::CreateVuMarkTarget(Vuforia.VuforiaManagerImpl/VuMarkTargetData)
extern "C"  Il2CppObject * VuMarkManagerImpl_CreateVuMarkTarget_m1497932471 (VuMarkManagerImpl_t1660847547 * __this, VuMarkTargetData_t2130450083  ___newVuMark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::CreateOrGetUnusedBehaviour(System.Int32)
extern "C"  VuMarkAbstractBehaviour_t1830666997 * VuMarkManagerImpl_CreateOrGetUnusedBehaviour_m4109115014 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkManagerImpl::GetVuMarkTemplate(System.Int32)
extern "C"  Il2CppObject * VuMarkManagerImpl_GetVuMarkTemplate_m1492647889 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::CopyGameObject(Vuforia.VuMarkAbstractBehaviour)
extern "C"  VuMarkAbstractBehaviour_t1830666997 * VuMarkManagerImpl_CopyGameObject_m2594454544 (VuMarkManagerImpl_t1660847547 * __this, VuMarkAbstractBehaviour_t1830666997 * ___bhvr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::MarkBehaviourUntracked(Vuforia.VuMarkAbstractBehaviour)
extern "C"  void VuMarkManagerImpl_MarkBehaviourUntracked_m3376456811 (VuMarkManagerImpl_t1660847547 * __this, VuMarkAbstractBehaviour_t1830666997 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::AssociateTargetWithBehaviour(Vuforia.VuMarkTarget,Vuforia.VuMarkAbstractBehaviour)
extern "C"  void VuMarkManagerImpl_AssociateTargetWithBehaviour_m3771986789 (VuMarkManagerImpl_t1660847547 * __this, Il2CppObject * ___vuMark0, VuMarkAbstractBehaviour_t1830666997 * ___bhvr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarkResults(Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void VuMarkManagerImpl_UpdateVuMarkResults_m1335032210 (VuMarkManagerImpl_t1660847547 * __this, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::GetActiveBehaviour(System.Int32,System.Int32)
extern "C"  VuMarkAbstractBehaviour_t1830666997 * VuMarkManagerImpl_GetActiveBehaviour_m4237687970 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___targetId0, int32_t ___resultId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkManagerImpl::GetVuMarkTarget(System.Int32)
extern "C"  Il2CppObject * VuMarkManagerImpl_GetVuMarkTarget_m43906157 (VuMarkManagerImpl_t1660847547 * __this, int32_t ___targetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Vuforia.VuMarkManagerImpl::GroupResultsByTargetId(Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  Dictionary_2_t448824215 * VuMarkManagerImpl_GroupResultsByTargetId_m3129483197 (VuMarkManagerImpl_t1660847547 * __this, VuMarkTargetResultDataU5BU5D_t644033633* ___vuMarkResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::.ctor()
extern "C"  void VuMarkManagerImpl__ctor_m3457070443 (VuMarkManagerImpl_t1660847547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

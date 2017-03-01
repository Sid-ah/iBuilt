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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t4282786523;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t2207634242;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t4164246531;
// Vuforia.Word
struct Word_t3872119486;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t2878458725;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t3170585770;
// UnityEngine.Transform
struct Transform_t3275118058;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t1250596477;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t148237038;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t1566091129;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t4034363676;
// Vuforia.WordResult
struct WordResult_t1915507197;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordAbstractBehavi2878458725.h"
#include "Vuforia_UnityExtensions_Vuforia_WordPrefabCreation3171836134.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1915507197.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C"  Il2CppObject* WordManagerImpl_GetActiveWordResults_m1373666590 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C"  Il2CppObject* WordManagerImpl_GetNewWords_m3002296077 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C"  Il2CppObject* WordManagerImpl_GetLostWords_m3146633038 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C"  bool WordManagerImpl_TryGetWordBehaviour_m1106367364 (WordManagerImpl_t4282786523 * __this, Il2CppObject * ___word0, WordAbstractBehaviour_t2878458725 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C"  Il2CppObject* WordManagerImpl_GetTrackableBehaviours_m896923779 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C"  void WordManagerImpl_DestroyWordBehaviour_m2846089908 (WordManagerImpl_t4282786523 * __this, WordAbstractBehaviour_t2878458725 * ___behaviour0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m3992314456 (WordManagerImpl_t4282786523 * __this, int32_t ___wordPrefabCreationMode0, int32_t ___maxInstances1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m4020699935 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C"  void WordManagerImpl_RemoveDestroyedTrackables_m3725489426 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void WordManagerImpl_UpdateWords_m506580541 (WordManagerImpl_t4282786523 * __this, Transform_t3275118058 * ___arCameraTransform0, WordDataU5BU5D_t1250596477* ___newWordData1, WordResultDataU5BU5D_t148237038* ___wordResults2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C"  void WordManagerImpl_SetWordBehavioursToNotFound_m1520214889 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C"  void WordManagerImpl_CleanupWordBehaviours_m3463819555 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m2132655282 (WordManagerImpl_t4282786523 * __this, Il2CppObject* ___newWordData0, Il2CppObject* ___wordResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m1487928222 (WordManagerImpl_t4282786523 * __this, Transform_t3275118058 * ___arCameraTransform0, Il2CppObject* ___wordResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m2500550211 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m1604343620 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m93294755 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t2878458725 * WordManagerImpl_AssociateWordBehaviour_m1493851823 (WordManagerImpl_t4282786523 * __this, WordResult_t1915507197 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t2878458725 * WordManagerImpl_AssociateWordBehaviour_m3359416954 (WordManagerImpl_t4282786523 * __this, WordResult_t1915507197 * ___wordResult0, WordAbstractBehaviour_t2878458725 * ___wordBehaviourTemplate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t2878458725 * WordManagerImpl_InstantiateWordBehaviour_m2525602245 (Il2CppObject * __this /* static, unused */, WordAbstractBehaviour_t2878458725 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t2878458725 * WordManagerImpl_CreateWordBehaviour_m810645364 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C"  void WordManagerImpl__ctor_m1978406723 (WordManagerImpl_t4282786523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

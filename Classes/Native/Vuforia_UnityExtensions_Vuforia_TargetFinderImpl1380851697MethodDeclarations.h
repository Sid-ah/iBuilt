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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t1380851697;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t2250853551;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t3327552701;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t2382704527;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_InitStat4409649.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Updat1473252352.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Filte3082493643.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Targe1958726506.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C"  void TargetFinderImpl__ctor_m4043272937 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C"  void TargetFinderImpl_Finalize_m4085200791 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C"  bool TargetFinderImpl_StartInit_m81465743 (TargetFinderImpl_t1380851697 * __this, String_t* ___userAuth0, String_t* ___secretAuth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C"  int32_t TargetFinderImpl_GetInitState_m2960710876 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C"  bool TargetFinderImpl_Deinit_m233710940 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C"  bool TargetFinderImpl_StartRecognition_m4133014850 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C"  bool TargetFinderImpl_Stop_m1069546045 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C"  bool TargetFinderImpl_IsRequesting_m527431398 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C"  int32_t TargetFinderImpl_Update_m1230191095 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C"  int32_t TargetFinderImpl_Update_m696384020 (TargetFinderImpl_t1380851697 * __this, int32_t ___filterMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C"  Il2CppObject* TargetFinderImpl_GetResults_m3079493181 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * TargetFinderImpl_EnableTracking_m1345350475 (TargetFinderImpl_t1380851697 * __this, TargetSearchResult_t1958726506  ___result0, String_t* ___gameObjectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * TargetFinderImpl_EnableTracking_m393981657 (TargetFinderImpl_t1380851697 * __this, TargetSearchResult_t1958726506  ___result0, GameObject_t1756533147 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C"  void TargetFinderImpl_ClearTrackables_m1565896857 (TargetFinderImpl_t1380851697 * __this, bool ___destroyGameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C"  Il2CppObject* TargetFinderImpl_GetImageTargets_m3243864554 (TargetFinderImpl_t1380851697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

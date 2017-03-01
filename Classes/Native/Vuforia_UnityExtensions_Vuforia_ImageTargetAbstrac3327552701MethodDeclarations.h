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

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t3327552701;
// Vuforia.ImageTarget
struct ImageTarget_t2090577482;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t742425223;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t2478279366;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t2770406411;
// Vuforia.Trackable
struct Trackable_t432275407;
// Vuforia.VirtualButton
struct VirtualButton_t3703236737;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType3906864138.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstr2478279366.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3703236737.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C"  Il2CppObject * ImageTargetAbstractBehaviour_get_ImageTarget_m3261756177 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C"  void ImageTargetAbstractBehaviour__ctor_m3584284597 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m2789088199 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m551580173 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m257797196 (ImageTargetAbstractBehaviour_t3327552701 * __this, Vector3_t2243707580 * ___boundsMin0, Vector3_t2243707580 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1937534315 (ImageTargetAbstractBehaviour_t3327552701 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  VirtualButtonAbstractBehaviour_t2478279366 * ImageTargetAbstractBehaviour_CreateVirtualButton_m387103575 (ImageTargetAbstractBehaviour_t3327552701 * __this, String_t* ___vbName0, Vector2_t2243707579  ___position1, Vector2_t2243707579  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C"  VirtualButtonAbstractBehaviour_t2478279366 * ImageTargetAbstractBehaviour_CreateVirtualButton_m803373355 (Il2CppObject * __this /* static, unused */, String_t* ___vbName0, Vector2_t2243707579  ___localScale1, GameObject_t1756533147 * ___immediateParent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C"  Il2CppObject* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m253719924 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C"  void ImageTargetAbstractBehaviour_DestroyVirtualButton_m81583840 (ImageTargetAbstractBehaviour_t3327552701 * __this, String_t* ___vbName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C"  Vector2_t2243707579  ImageTargetAbstractBehaviour_GetSize_m4105784097 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetWidth_m3729972608 (ImageTargetAbstractBehaviour_t3327552701 * __this, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetHeight_m1092881085 (ImageTargetAbstractBehaviour_t3327552701 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::get_ImageTargetType()
extern "C"  int32_t ImageTargetAbstractBehaviour_get_ImageTargetType_m3883916497 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool ImageTargetAbstractBehaviour_InitializeTarget_m3341073650 (ImageTargetAbstractBehaviour_t3327552701 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  void ImageTargetAbstractBehaviour_AssociateExistingVirtualButtonBehaviour_m3138298 (ImageTargetAbstractBehaviour_t3327552701 * __this, VirtualButtonAbstractBehaviour_t2478279366 * ___virtualButtonBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateMissingVirtualButtonBehaviours()
extern "C"  void ImageTargetAbstractBehaviour_CreateMissingVirtualButtonBehaviours_m3316820328 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C"  bool ImageTargetAbstractBehaviour_TryGetVirtualButtonBehaviourByID_m3556963011 (ImageTargetAbstractBehaviour_t3327552701 * __this, int32_t ___id0, VirtualButtonAbstractBehaviour_t2478279366 ** ___virtualButtonBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C"  void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m303145262 (ImageTargetAbstractBehaviour_t3327552701 * __this, VirtualButton_t3703236737 * ___virtualButton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m2457901221 (ImageTargetAbstractBehaviour_t3327552701 * __this, VirtualButtonAbstractBehaviour_t2478279366 * ___newVBB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::OnValidate()
extern "C"  void ImageTargetAbstractBehaviour_OnValidate_m150764676 (ImageTargetAbstractBehaviour_t3327552701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t665872082;
// Vuforia.CylinderTarget
struct CylinderTarget_t2505063929;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t742425223;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C"  Il2CppObject * CylinderTargetAbstractBehaviour_get_CylinderTarget_m889426098 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C"  float CylinderTargetAbstractBehaviour_get_SideLength_m999963300 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_TopDiameter_m3611487623 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_BottomDiameter_m3823535359 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetSideLength_m2003326118 (CylinderTargetAbstractBehaviour_t665872082 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetTopDiameter_m955743771 (CylinderTargetAbstractBehaviour_t665872082 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m156860143 (CylinderTargetAbstractBehaviour_t665872082 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m1259366318 (CylinderTargetAbstractBehaviour_t665872082 * __this, int32_t ___newFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m2243067026 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m979126964 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1437490191 (CylinderTargetAbstractBehaviour_t665872082 * __this, Vector3_t2243707580 * ___boundsMin0, Vector3_t2243707580 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1548690706 (CylinderTargetAbstractBehaviour_t665872082 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool CylinderTargetAbstractBehaviour_InitializeTarget_m3813686769 (CylinderTargetAbstractBehaviour_t665872082 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C"  float CylinderTargetAbstractBehaviour_GetScale_m3431207024 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetScale_m3803922251 (CylinderTargetAbstractBehaviour_t665872082 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_ApplyScale_m2021663953 (CylinderTargetAbstractBehaviour_t665872082 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnValidate()
extern "C"  void CylinderTargetAbstractBehaviour_OnValidate_m3144050943 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C"  void CylinderTargetAbstractBehaviour__ctor_m3025238902 (CylinderTargetAbstractBehaviour_t665872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

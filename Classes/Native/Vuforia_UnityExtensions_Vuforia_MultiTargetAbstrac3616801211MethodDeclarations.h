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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t3616801211;
// Vuforia.MultiTarget
struct MultiTarget_t314883130;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t742425223;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C"  Il2CppObject * MultiTargetAbstractBehaviour_get_MultiTarget_m3726252483 (MultiTargetAbstractBehaviour_t3616801211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m3635061031 (MultiTargetAbstractBehaviour_t3616801211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m3132316772 (MultiTargetAbstractBehaviour_t3616801211 * __this, Vector3_t2243707580 * ___boundsMin0, Vector3_t2243707580 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m347807997 (MultiTargetAbstractBehaviour_t3616801211 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool MultiTargetAbstractBehaviour_InitializeTarget_m3505194470 (MultiTargetAbstractBehaviour_t3616801211 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C"  void MultiTargetAbstractBehaviour__ctor_m3602545575 (MultiTargetAbstractBehaviour_t3616801211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t2149050756;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionImpl__ctor_m2915415100 (ReconstructionImpl_t2149050756 * __this, IntPtr_t ___nativeReconstructionPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C"  IntPtr_t ReconstructionImpl_get_NativePtr_m887299403 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C"  bool ReconstructionImpl_SetMaximumArea_m2111402412 (ReconstructionImpl_t2149050756 * __this, Rect_t3681755626  ___maximumArea0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C"  bool ReconstructionImpl_GetMaximumArea_m2846034152 (ReconstructionImpl_t2149050756 * __this, Rect_t3681755626 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C"  bool ReconstructionImpl_Stop_m2391810884 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C"  bool ReconstructionImpl_Start_m2283817134 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C"  bool ReconstructionImpl_IsReconstructing_m310848938 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C"  void ReconstructionImpl_SetNavMeshPadding_m275882688 (ReconstructionImpl_t2149050756 * __this, float ___padding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C"  float ReconstructionImpl_get_NavMeshPadding_m1833982022 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C"  void ReconstructionImpl_StartNavMeshUpdates_m4284814640 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C"  void ReconstructionImpl_StopNavMeshUpdates_m3341200882 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C"  bool ReconstructionImpl_IsNavMeshUpdating_m2656148540 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C"  bool ReconstructionImpl_Reset_m1974985481 (ReconstructionImpl_t2149050756 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

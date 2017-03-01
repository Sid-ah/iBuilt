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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t447373045;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t3801722462;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t3509595417;
// Vuforia.Reconstruction
struct Reconstruction_t2469242802;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t1130239436;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t3785078544;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t3978980304;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ReconstructionAbst3509595417.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C"  bool SmartTerrainBuilderImpl_Init_m2118379831 (SmartTerrainBuilderImpl_t447373045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C"  bool SmartTerrainBuilderImpl_Deinit_m1072296474 (SmartTerrainBuilderImpl_t447373045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C"  Il2CppObject* SmartTerrainBuilderImpl_GetReconstructions_m3718619771 (SmartTerrainBuilderImpl_t447373045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_AddReconstruction_m3421075475 (SmartTerrainBuilderImpl_t447373045 * __this, ReconstructionAbstractBehaviour_t3509595417 * ___reconstructionBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_RemoveReconstruction_m3833434424 (SmartTerrainBuilderImpl_t447373045 * __this, ReconstructionAbstractBehaviour_t3509595417 * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C"  bool SmartTerrainBuilderImpl_DestroyReconstruction_m4053523625 (SmartTerrainBuilderImpl_t447373045 * __this, Il2CppObject * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m78551351 (SmartTerrainBuilderImpl_t447373045 * __this, SmartTerrainRevisionDataU5BU5D_t1130239436* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t3785078544* ___updatedSurfaces1, PropDataU5BU5D_t3978980304* ___updatedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C"  void SmartTerrainBuilderImpl__ctor_m2450610753 (SmartTerrainBuilderImpl_t447373045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

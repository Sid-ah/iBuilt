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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t3509595417;
// Vuforia.Reconstruction
struct Reconstruction_t2469242802;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t2945706201;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t904151438;
// System.Action`1<Vuforia.Prop>
struct Action_1_t245871341;
// System.Action`1<Vuforia.Surface>
struct Action_1_t2023440477;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t1047177596;
// Vuforia.Prop
struct Prop_t444071959;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t2669615494;
// Vuforia.Surface
struct Surface_t2221641095;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t736199004;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t2513768140;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t1130239436;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t3785078544;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t3978980304;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t949783837;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t4108160387;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t1590762227;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_PropAbstractBehavi1047177596.h"
#include "Vuforia_UnityExtensions_Vuforia_SurfaceAbstractBeh2669615494.h"
#include "mscorlib_System_IntPtr2504060609.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C"  Il2CppObject * ReconstructionAbstractBehaviour_get_Reconstruction_m3690308805 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C"  void ReconstructionAbstractBehaviour_OnDrawGizmos_m3110211705 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnValidate()
extern "C"  void ReconstructionAbstractBehaviour_OnValidate_m1158941226 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m2320074155 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m3855240990 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m2803194273 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t904151438 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m1227727352 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t904151438 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m4192941617 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m2048741868 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m3281839854 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m1510042523 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m4253060992 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m2424874071 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t245871341 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m3624331525 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m1039740100 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m711979100 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m413525535 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m4165818170 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m3605289059 (ReconstructionAbstractBehaviour_t3509595417 * __this, Action_1_t2023440477 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C"  PropAbstractBehaviour_t1047177596 * ReconstructionAbstractBehaviour_AssociateProp_m920258964 (ReconstructionAbstractBehaviour_t3509595417 * __this, PropAbstractBehaviour_t1047177596 * ___templateBehaviour0, Il2CppObject * ___newProp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C"  SurfaceAbstractBehaviour_t2669615494 * ReconstructionAbstractBehaviour_AssociateSurface_m4192971254 (ReconstructionAbstractBehaviour_t3509595417 * __this, SurfaceAbstractBehaviour_t2669615494 * ___templateBehaviour0, Il2CppObject * ___newSurface1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C"  Il2CppObject* ReconstructionAbstractBehaviour_GetActiveProps_m3842873790 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m1603883707 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___prop0, PropAbstractBehaviour_t1047177596 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C"  Il2CppObject* ReconstructionAbstractBehaviour_GetActiveSurfaces_m227777230 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m3130467827 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___surface0, SurfaceAbstractBehaviour_t2669615494 ** ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C"  void ReconstructionAbstractBehaviour_Initialize_m1984027653 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C"  void ReconstructionAbstractBehaviour_Deinitialize_m63619284 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m512220199 (ReconstructionAbstractBehaviour_t3509595417 * __this, SmartTerrainRevisionDataU5BU5D_t1130239436* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t3785078544* ___updatedSurfaces1, PropDataU5BU5D_t3978980304* ___updatedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C"  void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m3776253569 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C"  void ReconstructionAbstractBehaviour_ClearOnReset_m3379428694 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C"  void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m3175675738 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::get_AutomaticStart()
extern "C"  bool ReconstructionAbstractBehaviour_get_AutomaticStart_m1671730793 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ScaleEditorMeshesByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_ScaleEditorMeshesByFactor_m2714981886 (ReconstructionAbstractBehaviour_t3509595417 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ScaleEditorPropPositionsByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_ScaleEditorPropPositionsByFactor_m2992528058 (ReconstructionAbstractBehaviour_t3509595417 * __this, float ___scaleFactor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C"  PropAbstractBehaviour_t1047177596 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m2652920676 (Il2CppObject * __this /* static, unused */, PropAbstractBehaviour_t1047177596 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m1737543334 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___trackable0, PropAbstractBehaviour_t1047177596 * ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C"  SurfaceAbstractBehaviour_t2669615494 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m3240602130 (Il2CppObject * __this /* static, unused */, SurfaceAbstractBehaviour_t2669615494 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m1498417806 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject * ___trackable0, SurfaceAbstractBehaviour_t2669615494 * ___behaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C"  Il2CppObject * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m4027062030 (ReconstructionAbstractBehaviour_t3509595417 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m285606018 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject* ___newSurfaces0, Il2CppObject* ___updatedSurfaces1, Il2CppObject* ___deletedSurfaces2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m2386877132 (ReconstructionAbstractBehaviour_t3509595417 * __this, Il2CppObject* ___newProps0, Il2CppObject* ___updatedProps1, Il2CppObject* ___deletedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C"  Int32U5BU5D_t3030399641* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m69083921 (Il2CppObject * __this /* static, unused */, int32_t ___numBoundaries0, IntPtr_t ___boundaryArray1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m4145076513 (ReconstructionAbstractBehaviour_t3509595417 * __this, List_1_t4108160387 * ___deletedProps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m2867229921 (ReconstructionAbstractBehaviour_t3509595417 * __this, List_1_t1590762227 * ___deletedSurfaces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSurfaces_m1418941454 (ReconstructionAbstractBehaviour_t3509595417 * __this, SmartTerrainRevisionDataU5BU5D_t1130239436* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t3785078544* ___updatedSurfaceData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateProps_m2364323892 (ReconstructionAbstractBehaviour_t3509595417 * __this, SmartTerrainRevisionDataU5BU5D_t1130239436* ___smartTerrainRevisions0, PropDataU5BU5D_t3978980304* ___updatedPropData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C"  void ReconstructionAbstractBehaviour__ctor_m2037226869 (ReconstructionAbstractBehaviour_t3509595417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

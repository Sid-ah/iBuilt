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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t3452781876;
// Vuforia.Trackable
struct Trackable_t432275407;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t4122236588;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour4057911311.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_ReconstructionFrom4122236588.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C"  void DataSetTrackableBehaviour_OnDrawGizmos_m3549410262 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnValidate()
extern "C"  void DataSetTrackableBehaviour_OnValidate_m4218482479 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void DataSetTrackableBehaviour_OnTrackerUpdate_m4101108717 (DataSetTrackableBehaviour_t3452781876 * __this, int32_t ___newStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C"  bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m1076274819 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool DataSetTrackableBehaviour_InitializeTarget_m1796742157 (DataSetTrackableBehaviour_t3452781876 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::SetDefaultOccluderBounds()
extern "C"  void DataSetTrackableBehaviour_SetDefaultOccluderBounds_m2637168301 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::get_DataSetPath()
extern "C"  String_t* DataSetTrackableBehaviour_get_DataSetPath_m2206046803 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::get_DataSetName()
extern "C"  String_t* DataSetTrackableBehaviour_get_DataSetName_m3341980537 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::GetDataSetName(System.String)
extern "C"  String_t* DataSetTrackableBehaviour_GetDataSetName_m3318192172 (Il2CppObject * __this /* static, unused */, String_t* ___datasetPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_ExtendedTracking()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_ExtendedTracking_m1029100091 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_ExtendedTracking(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_ExtendedTracking_m172963200 (DataSetTrackableBehaviour_t3452781876 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_InitializeSmartTerrain()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_InitializeSmartTerrain_m2141021537 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_InitializeSmartTerrain(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_InitializeSmartTerrain_m2525867288 (DataSetTrackableBehaviour_t3452781876 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_ReconstructionToInitialize()
extern "C"  ReconstructionFromTargetAbstractBehaviour_t4122236588 * DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_ReconstructionToInitialize_m2016534471 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_ReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_ReconstructionToInitialize_m3694045158 (DataSetTrackableBehaviour_t3452781876 * __this, ReconstructionFromTargetAbstractBehaviour_t4122236588 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C"  Vector3_t2243707580  DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_SmartTerrainOccluderBoundsMin_m3425900541 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_SmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_SmartTerrainOccluderBoundsMin_m2929626406 (DataSetTrackableBehaviour_t3452781876 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C"  Vector3_t2243707580  DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_SmartTerrainOccluderBoundsMax_m542558007 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_SmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_SmartTerrainOccluderBoundsMax_m220858924 (DataSetTrackableBehaviour_t3452781876 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C"  void DataSetTrackableBehaviour__ctor_m3284839088 (DataSetTrackableBehaviour_t3452781876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

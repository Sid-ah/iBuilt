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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t1691118791;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t518883741;
// Vuforia.TargetFinder
struct TargetFinder_t1347637805;
// Vuforia.DataSet
struct DataSet_t626511550;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t918638595;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet626511550.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C"  ImageTargetBuilder_t518883741 * ObjectTrackerImpl_get_ImageTargetBuilder_m2528094335 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C"  TargetFinder_t1347637805 * ObjectTrackerImpl_get_TargetFinder_m596223775 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C"  void ObjectTrackerImpl__ctor_m2286263407 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C"  bool ObjectTrackerImpl_Start_m3737479319 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C"  void ObjectTrackerImpl_Stop_m3775943247 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C"  DataSet_t626511550 * ObjectTrackerImpl_CreateDataSet_m793918966 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C"  bool ObjectTrackerImpl_DestroyDataSet_m1873361072 (ObjectTrackerImpl_t1691118791 * __this, DataSet_t626511550 * ___dataSet0, bool ___destroyTrackables1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_ActivateDataSet_m3873063170 (ObjectTrackerImpl_t1691118791 * __this, DataSet_t626511550 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_DeactivateDataSet_m1276087149 (ObjectTrackerImpl_t1691118791 * __this, DataSet_t626511550 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C"  Il2CppObject* ObjectTrackerImpl_GetActiveDataSets_m1766292390 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C"  Il2CppObject* ObjectTrackerImpl_GetDataSets_m685248976 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C"  void ObjectTrackerImpl_DestroyAllDataSets_m282189974 (ObjectTrackerImpl_t1691118791 * __this, bool ___destroyTrackables0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C"  bool ObjectTrackerImpl_PersistExtendedTracking_m4279500590 (ObjectTrackerImpl_t1691118791 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C"  bool ObjectTrackerImpl_ResetExtendedTracking_m3601965964 (ObjectTrackerImpl_t1691118791 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

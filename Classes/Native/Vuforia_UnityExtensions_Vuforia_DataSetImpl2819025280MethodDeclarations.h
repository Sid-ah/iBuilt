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

// Vuforia.DataSetImpl
struct DataSetImpl_t2819025280;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t724402452;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t3452781876;
// Vuforia.TrackableSource
struct TrackableSource_t2832298792;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Vuforia.Trackable
struct Trackable_t432275407;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora3897282321.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableSource2832298792.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C"  IntPtr_t DataSetImpl_get_DataSetPtr_m2088565894 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C"  String_t* DataSetImpl_get_Path_m3453191417 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C"  int32_t DataSetImpl_get_FileStorageType_m3722668690 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C"  void DataSetImpl__ctor_m3268081742 (DataSetImpl_t2819025280 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C"  bool DataSetImpl_Load_m2213875884 (DataSetImpl_t2819025280 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_Load_m2480845763 (DataSetImpl_t2819025280 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C"  Il2CppObject* DataSetImpl_GetTrackables_m1059672671 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C"  DataSetTrackableBehaviour_t3452781876 * DataSetImpl_CreateTrackable_m3721487460 (DataSetImpl_t2819025280 * __this, TrackableSource_t2832298792 * ___trackableSource0, String_t* ___gameObjectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C"  DataSetTrackableBehaviour_t3452781876 * DataSetImpl_CreateTrackable_m500192224 (DataSetImpl_t2819025280 * __this, TrackableSource_t2832298792 * ___trackableSource0, GameObject_t1756533147 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C"  bool DataSetImpl_Destroy_m1521540108 (DataSetImpl_t2819025280 * __this, Il2CppObject * ___trackable0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C"  bool DataSetImpl_HasReachedTrackableLimit_m1850194642 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C"  bool DataSetImpl_Contains_m486110610 (DataSetImpl_t2819025280 * __this, Il2CppObject * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C"  void DataSetImpl_DestroyAllTrackables_m2581107742 (DataSetImpl_t2819025280 * __this, bool ___destroyGameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_ExistsImpl_m2013534985 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C"  bool DataSetImpl_CreateImageTargets_m1029277413 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C"  bool DataSetImpl_CreateMultiTargets_m3311304843 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C"  bool DataSetImpl_CreateCylinderTargets_m801572728 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateVuMarkTemplates()
extern "C"  bool DataSetImpl_CreateVuMarkTemplates_m4280412609 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C"  bool DataSetImpl_CreateObjectTargets_m4247990235 (DataSetImpl_t2819025280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

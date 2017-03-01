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

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t32254201;
// System.String
struct String_t;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t949783837;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t1241910882;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1264148721.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl__ctor_m4179247743 (SmartTerrainTrackableImpl_t32254201 * __this, String_t* ___name0, int32_t ___id1, Il2CppObject * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C"  Il2CppObject* SmartTerrainTrackableImpl_get_Children_m3106361996 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C"  int32_t SmartTerrainTrackableImpl_get_MeshRevision_m3388232474 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C"  Il2CppObject * SmartTerrainTrackableImpl_get_Parent_m2919076160 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_set_Parent_m1829951485 (SmartTerrainTrackableImpl_t32254201 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C"  Mesh_t1356156583 * SmartTerrainTrackableImpl_GetMesh_m3696170651 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C"  Vector3_t2243707580  SmartTerrainTrackableImpl_get_LocalPosition_m1296524986 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void SmartTerrainTrackableImpl_SetLocalPose_m1074744374 (SmartTerrainTrackableImpl_t32254201 * __this, PoseData_t1264148721  ___localPose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C"  void SmartTerrainTrackableImpl_DestroyMesh_m2628371564 (SmartTerrainTrackableImpl_t32254201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_AddChild_m1598305199 (SmartTerrainTrackableImpl_t32254201 * __this, Il2CppObject * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_RemoveChild_m797376490 (SmartTerrainTrackableImpl_t32254201 * __this, Il2CppObject * ___removedChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

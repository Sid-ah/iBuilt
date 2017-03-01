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

// Vuforia.PropImpl
struct PropImpl_t1187075139;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t949783837;
// UnityEngine.Mesh
struct Mesh_t1356156583;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo1484796416.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void PropImpl__ctor_m2261528851 (PropImpl_t1187075139 * __this, int32_t ___id0, Il2CppObject * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C"  OrientedBoundingBox3D_t1484796416  PropImpl_get_BoundingBox_m4047710222 (PropImpl_t1187075139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C"  void PropImpl_SetMesh_m1717601107 (PropImpl_t1187075139 * __this, int32_t ___meshRev0, Mesh_t1356156583 * ___mesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C"  void PropImpl_SetObb_m1194184136 (PropImpl_t1187075139 * __this, OrientedBoundingBox3D_t1484796416  ___obb3D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

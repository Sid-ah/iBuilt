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

// UnityEngine.Mesh
struct Mesh_t1356156583;
// Vuforia.MeshUtils
struct MeshUtils_t2110180948;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1863273727.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "mscorlib_System_IntPtr2504060609.h"

// UnityEngine.Mesh Vuforia.MeshUtils::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean,System.Boolean)
extern "C"  Mesh_t1356156583 * MeshUtils_UpdateMesh_m3609502194 (Il2CppObject * __this /* static, unused */, MeshData_t1863273727  ___meshData0, Mesh_t1356156583 * ___oldMesh1, bool ___setNormalsUpwards2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyPositions(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyPositions_m2624573433 (Il2CppObject * __this /* static, unused */, IntPtr_t ___positionsArray0, int32_t ___numVertexValues1, Mesh_t1356156583 * ___mesh2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyNormals(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyNormals_m3587804019 (Il2CppObject * __this /* static, unused */, IntPtr_t ___normalsArray0, int32_t ___numVertexValues1, Mesh_t1356156583 * ___mesh2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTexCoords(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTexCoords_m3674850487 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texCoordsArray0, int32_t ___numTexCoordValues1, Mesh_t1356156583 * ___mesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTriangles(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTriangles_m2648173621 (Il2CppObject * __this /* static, unused */, IntPtr_t ___triangleIdxArray0, int32_t ___numTriangleIndices1, Mesh_t1356156583 * ___mesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::.ctor()
extern "C"  void MeshUtils__ctor_m3454226092 (MeshUtils_t2110180948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

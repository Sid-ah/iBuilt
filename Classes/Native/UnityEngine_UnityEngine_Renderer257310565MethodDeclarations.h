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

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C"  bool Renderer_get_enabled_m2362836534 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m142717579 (Renderer_t257310565 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t193706927 * Renderer_get_material_m2553789785 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C"  void Renderer_set_material_m1053097112 (Renderer_t257310565 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C"  void Renderer_set_sharedMaterial_m391095487 (Renderer_t257310565 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C"  MaterialU5BU5D_t3123989686* Renderer_get_materials_m810004692 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m2669445156 (Renderer_t257310565 * __this, MaterialU5BU5D_t3123989686* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m2403577271 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m1544525007 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

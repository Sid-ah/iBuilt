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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t3377289090;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t2430389951;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Shader2430389951.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t1756533147 * StencilHideExcessAreaClipping_CreateQuad_m1641056092 (StencilHideExcessAreaClipping_t3377289090 * __this, GameObject_t1756533147 * ___parent0, String_t* ___name1, Vector3_t2243707580  ___position2, Quaternion_t4030073918  ___rotation3, Vector3_t2243707580  ___scale4, int32_t ___layer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m2844737183 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void StencilHideExcessAreaClipping__ctor_m2937019428 (StencilHideExcessAreaClipping_t3377289090 * __this, GameObject_t1756533147 * ___gameObject0, Shader_t2430389951 * ___matteShader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m2624045410 (StencilHideExcessAreaClipping_t3377289090 * __this, bool ___activeflag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m3724166351 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C"  void StencilHideExcessAreaClipping_OnPreCull_m1426585804 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C"  void StencilHideExcessAreaClipping_OnPostRender_m42167053 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C"  void StencilHideExcessAreaClipping_Start_m2440281030 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C"  void StencilHideExcessAreaClipping_OnDestroy_m2004263581 (StencilHideExcessAreaClipping_t3377289090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void StencilHideExcessAreaClipping_Update_m2016281218 (StencilHideExcessAreaClipping_t3377289090 * __this, Vector3_t2243707580  ___planeOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

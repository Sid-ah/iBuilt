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

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t3475621185;
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

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t1756533147 * LegacyHideExcessAreaClipping_CreateQuad_m1790734755 (LegacyHideExcessAreaClipping_t3475621185 * __this, GameObject_t1756533147 * ___parent0, String_t* ___name1, Vector3_t2243707580  ___position2, Quaternion_t4030073918  ___rotation3, Vector3_t2243707580  ___scale4, int32_t ___layer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m1270543338 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void LegacyHideExcessAreaClipping__ctor_m1880831303 (LegacyHideExcessAreaClipping_t3475621185 * __this, GameObject_t1756533147 * ___gameObject0, Shader_t2430389951 * ___matteShader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m1567484271 (LegacyHideExcessAreaClipping_t3475621185 * __this, bool ___activeflag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m3952349606 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C"  void LegacyHideExcessAreaClipping_OnPreCull_m1743061293 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C"  void LegacyHideExcessAreaClipping_OnPostRender_m2540359138 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C"  void LegacyHideExcessAreaClipping_Start_m495781433 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C"  void LegacyHideExcessAreaClipping_OnDestroy_m1112703896 (LegacyHideExcessAreaClipping_t3475621185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void LegacyHideExcessAreaClipping_Update_m1412929669 (LegacyHideExcessAreaClipping_t3475621185 * __this, Vector3_t2243707580  ___planeOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

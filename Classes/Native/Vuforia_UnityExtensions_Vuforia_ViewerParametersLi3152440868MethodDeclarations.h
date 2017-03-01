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

// Vuforia.ViewerParametersList
struct ViewerParametersList_t3152440868;
// System.String
struct String_t;
// Vuforia.IViewerParameters
struct IViewerParameters_t2342092655;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters>
struct IEnumerable_1_t2634219700;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"

// Vuforia.ViewerParametersList Vuforia.ViewerParametersList::get_ListForAuthoringTools()
extern "C"  ViewerParametersList_t3152440868 * ViewerParametersList_get_ListForAuthoringTools_m1486777573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::.ctor(System.IntPtr)
extern "C"  void ViewerParametersList__ctor_m2493037388 (ViewerParametersList_t3152440868 * __this, IntPtr_t ___intPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::SetSDKFilter(System.String)
extern "C"  void ViewerParametersList_SetSDKFilter_m4259729048 (ViewerParametersList_t3152440868 * __this, String_t* ___filter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParametersList::Size()
extern "C"  int32_t ViewerParametersList_Size_m726643231 (ViewerParametersList_t3152440868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.Int32)
extern "C"  Il2CppObject * ViewerParametersList_Get_m527027107 (ViewerParametersList_t3152440868 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.String,System.String)
extern "C"  Il2CppObject * ViewerParametersList_Get_m4057077902 (ViewerParametersList_t3152440868 * __this, String_t* ___name0, String_t* ___manufacturer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters> Vuforia.ViewerParametersList::GetAllViewers()
extern "C"  Il2CppObject* ViewerParametersList_GetAllViewers_m3122624633 (ViewerParametersList_t3152440868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

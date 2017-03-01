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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C"  void GL_Vertex_m4110027235 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Vertex(UnityEngine.Vector3&)
extern "C"  void GL_INTERNAL_CALL_Vertex_m2514505792 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::BeginInternal(System.Int32)
extern "C"  void GL_BeginInternal_m1538792559 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m3874173032 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m2374230645 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_MultMatrix_m767401141 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_MultMatrix_m1969283986 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m1979053131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m856033754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
extern "C"  void GL_set_invertCulling_m153705642 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m154870981 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Clear_m2110364678 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Internal_Clear_m3348289810 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075  ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void GL_INTERNAL_CALL_Internal_Clear_m1893090931 (Il2CppObject * __this /* static, unused */, bool ___clearDepth0, bool ___clearColor1, Color_t2020392075 * ___backgroundColor2, float ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
extern "C"  void GL_IssuePluginEvent_m2498560141 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, int32_t ___eventID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEventInternal(System.IntPtr,System.Int32)
extern "C"  void GL_IssuePluginEventInternal_m3396520206 (Il2CppObject * __this /* static, unused */, IntPtr_t ___callback0, int32_t ___eventID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

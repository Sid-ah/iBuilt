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

// System.Action
struct Action_t3226471752;
// System.Delegate
struct Delegate_t3022476291;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_Delegate3022476291.h"

// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling(System.Action)
extern "C"  void DelegateHelper_InvokeWithExceptionHandling_m1427743576 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DelegateHelper::InvokeDelegate(System.Delegate,System.Object[])
extern "C"  void DelegateHelper_InvokeDelegate_m790092300 (Il2CppObject * __this /* static, unused */, Delegate_t3022476291 * ___action0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

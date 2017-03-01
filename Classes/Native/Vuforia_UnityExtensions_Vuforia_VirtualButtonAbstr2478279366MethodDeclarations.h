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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t2478279366;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t3703236737;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t2475414892;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t3327552701;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sens1678924861.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton3703236737.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C"  String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m2853719456 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C"  bool VirtualButtonAbstractBehaviour_get_Pressed_m1667011251 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C"  bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m3646300135 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C"  bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m135051996 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m3412426979 (VirtualButtonAbstractBehaviour_t2478279366 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C"  VirtualButton_t3703236737 * VirtualButtonAbstractBehaviour_get_VirtualButton_m513689368 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C"  void VirtualButtonAbstractBehaviour__ctor_m855896756 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  void VirtualButtonAbstractBehaviour_RegisterEventHandler_m2946769017 (VirtualButtonAbstractBehaviour_t2478279366 * __this, Il2CppObject * ___eventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m1632071242 (VirtualButtonAbstractBehaviour_t2478279366 * __this, Il2CppObject * ___eventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m3085583845 (VirtualButtonAbstractBehaviour_t2478279366 * __this, Vector2_t2243707579 * ___topLeft0, Vector2_t2243707579 * ___bottomRight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m786663139 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m4237066460 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateEnabled_m3641096346 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdatePose_m3480467650 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m981438975 (VirtualButtonAbstractBehaviour_t2478279366 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C"  ImageTargetAbstractBehaviour_t3327552701 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m2972458003 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::SetVirtualButtonName(System.String)
extern "C"  void VirtualButtonAbstractBehaviour_SetVirtualButtonName_m1373595752 (VirtualButtonAbstractBehaviour_t2478279366 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::get_Sensitivity()
extern "C"  int32_t VirtualButtonAbstractBehaviour_get_Sensitivity_m1288211212 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_Sensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  void VirtualButtonAbstractBehaviour_set_Sensitivity_m1575706723 (VirtualButtonAbstractBehaviour_t2478279366 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::get_PreviousTransform()
extern "C"  Matrix4x4_t2933234003  VirtualButtonAbstractBehaviour_get_PreviousTransform_m2680815663 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_PreviousTransform(UnityEngine.Matrix4x4)
extern "C"  void VirtualButtonAbstractBehaviour_set_PreviousTransform_m1516004684 (VirtualButtonAbstractBehaviour_t2478279366 * __this, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::get_PreviousParent()
extern "C"  GameObject_t1756533147 * VirtualButtonAbstractBehaviour_get_PreviousParent_m4289491239 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_PreviousParent(UnityEngine.GameObject)
extern "C"  void VirtualButtonAbstractBehaviour_set_PreviousParent_m3146033748 (VirtualButtonAbstractBehaviour_t2478279366 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::InitializeVirtualButton(Vuforia.VirtualButton)
extern "C"  void VirtualButtonAbstractBehaviour_InitializeVirtualButton_m1213136180 (VirtualButtonAbstractBehaviour_t2478279366 * __this, VirtualButton_t3703236737 * ___virtualButton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VirtualButtonAbstractBehaviour_SetPosAndScaleFromButtonArea_m2415782462 (VirtualButtonAbstractBehaviour_t2478279366 * __this, Vector2_t2243707579  ___topLeft0, Vector2_t2243707579  ___bottomRight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C"  void VirtualButtonAbstractBehaviour_LateUpdate_m1150004353 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C"  void VirtualButtonAbstractBehaviour_OnDisable_m2095615841 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C"  void VirtualButtonAbstractBehaviour_OnDestroy_m880609011 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnValidate()
extern "C"  void VirtualButtonAbstractBehaviour_OnValidate_m69939779 (VirtualButtonAbstractBehaviour_t2478279366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool VirtualButtonAbstractBehaviour_Equals_m1707174628 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___vec10, Vector2_t2243707579  ___vec21, float ___threshold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

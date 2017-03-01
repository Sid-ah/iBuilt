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

// System.String
struct String_t;
// Vuforia.IHoloLensApiAbstraction
struct IHoloLensApiAbstraction_t2620719467;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Vufor3491240575.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void Vuforia.VuforiaUnity::Deinit()
extern "C"  void VuforiaUnity_Deinit_m4072609744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::IsRendererDirty()
extern "C"  bool VuforiaUnity_IsRendererDirty_m3880978144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C"  bool VuforiaUnity_SetHint_m2330902584 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(System.UInt32,System.Int32)
extern "C"  bool VuforiaUnity_SetHint_m2483295745 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t2933234003  VuforiaUnity_GetProjectionGL_m3164064275 (Il2CppObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, int32_t ___screenOrientation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnPause()
extern "C"  void VuforiaUnity_OnPause_m2422224752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnResume()
extern "C"  void VuforiaUnity_OnResume_m2186520633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetRendererDirty()
extern "C"  void VuforiaUnity_SetRendererDirty_m1382076344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaUnity::GetVuforiaLibraryVersion()
extern "C"  String_t* VuforiaUnity_GetVuforiaLibraryVersion_m2417950331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHolographicAppCoordinateSystem(System.IntPtr)
extern "C"  bool VuforiaUnity_SetHolographicAppCoordinateSystem_m52519737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___appSpecifiedCS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetHoloLensApiAbstraction(Vuforia.IHoloLensApiAbstraction)
extern "C"  void VuforiaUnity_SetHoloLensApiAbstraction_m7689476 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___holoLensApiAbstraction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetAssetInitializationParameters()
extern "C"  void VuforiaUnity_SetAssetInitializationParameters_m3316561825 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetStandardInitializationParameters()
extern "C"  void VuforiaUnity_SetStandardInitializationParameters_m3220511984 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IHoloLensApiAbstraction Vuforia.VuforiaUnity::GetHoloLensApiAbstraction()
extern "C"  Il2CppObject * VuforiaUnity_GetHoloLensApiAbstraction_m3179952423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::.cctor()
extern "C"  void VuforiaUnity__cctor_m3355793260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

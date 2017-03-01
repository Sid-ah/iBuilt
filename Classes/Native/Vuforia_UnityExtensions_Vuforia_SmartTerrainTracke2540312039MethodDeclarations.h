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

// Vuforia.SmartTerrainTrackerARController
struct SmartTerrainTrackerARController_t2540312039;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"

// System.Void Vuforia.SmartTerrainTrackerARController::.ctor()
extern "C"  void SmartTerrainTrackerARController__ctor_m2312725407 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackerARController Vuforia.SmartTerrainTrackerARController::get_Instance()
extern "C"  SmartTerrainTrackerARController_t2540312039 * SmartTerrainTrackerARController_get_Instance_m891991031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::RegisterARController()
extern "C"  void SmartTerrainTrackerARController_RegisterARController_m172983013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainTrackerARController::get_AutoInitTracker()
extern "C"  bool SmartTerrainTrackerARController_get_AutoInitTracker_m1430244283 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainTrackerARController::get_AutoStartTracker()
extern "C"  bool SmartTerrainTrackerARController_get_AutoStartTracker_m1149906481 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainTrackerARController::get_AutoInitBuilder()
extern "C"  bool SmartTerrainTrackerARController_get_AutoInitBuilder_m3293906578 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SmartTerrainTrackerARController::get_SceneUnitsToMillimeter()
extern "C"  float SmartTerrainTrackerARController_get_SceneUnitsToMillimeter_m3798240910 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::Awake()
extern "C"  void SmartTerrainTrackerARController_Awake_m3955670294 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnEnable()
extern "C"  void SmartTerrainTrackerARController_OnEnable_m3423730171 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnDisable()
extern "C"  void SmartTerrainTrackerARController_OnDisable_m2076299066 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnDestroy()
extern "C"  void SmartTerrainTrackerARController_OnDestroy_m4092530404 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::RegisterTrackerStartedCallback(System.Action)
extern "C"  void SmartTerrainTrackerARController_RegisterTrackerStartedCallback_m1970126519 (SmartTerrainTrackerARController_t2540312039 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::UnregisterTrackerStartedCallback(System.Action)
extern "C"  void SmartTerrainTrackerARController_UnregisterTrackerStartedCallback_m148358516 (SmartTerrainTrackerARController_t2540312039 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::StartSmartTerrainTracker()
extern "C"  void SmartTerrainTrackerARController_StartSmartTerrainTracker_m4130963061 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::StopSmartTerrainTracker()
extern "C"  void SmartTerrainTrackerARController_StopSmartTerrainTracker_m25452409 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::InitSmartTerrainTracker()
extern "C"  void SmartTerrainTrackerARController_InitSmartTerrainTracker_m2031976015 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnVuforiaInitialized()
extern "C"  void SmartTerrainTrackerARController_OnVuforiaInitialized_m2259150560 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnVuforiaStarted()
extern "C"  void SmartTerrainTrackerARController_OnVuforiaStarted_m256185755 (SmartTerrainTrackerARController_t2540312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::OnPause(System.Boolean)
extern "C"  void SmartTerrainTrackerARController_OnPause_m1999452279 (SmartTerrainTrackerARController_t2540312039 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackerARController::.cctor()
extern "C"  void SmartTerrainTrackerARController__cctor_m587768000 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

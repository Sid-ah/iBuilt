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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t317971878;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_iOS_CalendarUnit4134400622.h"
#include "UnityEngine_UnityEngine_iOS_CalendarIdentifier259698391.h"

// System.Void UnityEngine.iOS.LocalNotification::.ctor()
extern "C"  void LocalNotification__ctor_m4030077664 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.iOS.LocalNotification::GetFireDate()
extern "C"  double LocalNotification_GetFireDate_m2090610709 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::SetFireDate(System.Double)
extern "C"  void LocalNotification_SetFireDate_m3822573886 (LocalNotification_t317971878 * __this, double ___dt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.iOS.LocalNotification::get_fireDate()
extern "C"  DateTime_t693205669  LocalNotification_get_fireDate_m1789441812 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_fireDate(System.DateTime)
extern "C"  void LocalNotification_set_fireDate_m462195765 (LocalNotification_t317971878 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_timeZone()
extern "C"  String_t* LocalNotification_get_timeZone_m165284569 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_timeZone(System.String)
extern "C"  void LocalNotification_set_timeZone_m1306235542 (LocalNotification_t317971878 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarUnit UnityEngine.iOS.LocalNotification::get_repeatInterval()
extern "C"  int32_t LocalNotification_get_repeatInterval_m523532072 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatInterval(UnityEngine.iOS.CalendarUnit)
extern "C"  void LocalNotification_set_repeatInterval_m2654714759 (LocalNotification_t317971878 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarIdentifier UnityEngine.iOS.LocalNotification::get_repeatCalendar()
extern "C"  int32_t LocalNotification_get_repeatCalendar_m3906163638 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatCalendar(UnityEngine.iOS.CalendarIdentifier)
extern "C"  void LocalNotification_set_repeatCalendar_m1866253719 (LocalNotification_t317971878 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertBody()
extern "C"  String_t* LocalNotification_get_alertBody_m3389080544 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertBody(System.String)
extern "C"  void LocalNotification_set_alertBody_m1054552499 (LocalNotification_t317971878 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertAction()
extern "C"  String_t* LocalNotification_get_alertAction_m1761754846 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertAction(System.String)
extern "C"  void LocalNotification_set_alertAction_m3106365785 (LocalNotification_t317971878 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.LocalNotification::get_hasAction()
extern "C"  bool LocalNotification_get_hasAction_m2700471435 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_hasAction(System.Boolean)
extern "C"  void LocalNotification_set_hasAction_m3772904808 (LocalNotification_t317971878 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertLaunchImage()
extern "C"  String_t* LocalNotification_get_alertLaunchImage_m1987036946 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertLaunchImage(System.String)
extern "C"  void LocalNotification_set_alertLaunchImage_m1613118657 (LocalNotification_t317971878 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.LocalNotification::get_applicationIconBadgeNumber()
extern "C"  int32_t LocalNotification_get_applicationIconBadgeNumber_m2229540452 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
extern "C"  void LocalNotification_set_applicationIconBadgeNumber_m1023929213 (LocalNotification_t317971878 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_soundName()
extern "C"  String_t* LocalNotification_get_soundName_m4273831850 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_soundName(System.String)
extern "C"  void LocalNotification_set_soundName_m1522089625 (LocalNotification_t317971878 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_defaultSoundName()
extern "C"  String_t* LocalNotification_get_defaultSoundName_m1631057317 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary UnityEngine.iOS.LocalNotification::get_userInfo()
extern "C"  Il2CppObject * LocalNotification_get_userInfo_m2319244588 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_userInfo(System.Collections.IDictionary)
extern "C"  void LocalNotification_set_userInfo_m3890141201 (LocalNotification_t317971878 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Destroy()
extern "C"  void LocalNotification_Destroy_m215220946 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C"  void LocalNotification_Finalize_m1087615408 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::InitWrapper()
extern "C"  void LocalNotification_InitWrapper_m2867883691 (LocalNotification_t317971878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern "C"  void LocalNotification__cctor_m1459868805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t3110978151;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C"  void AchievementDescription__ctor_m3827663715 (AchievementDescription_t3110978151 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t3542995729 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C"  String_t* AchievementDescription_ToString_m1223743222 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C"  void AchievementDescription_SetImage_m1395221782 (AchievementDescription_t3110978151 * __this, Texture2D_t3542995729 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C"  String_t* AchievementDescription_get_id_m4139130038 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C"  void AchievementDescription_set_id_m1767957413 (AchievementDescription_t3110978151 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C"  String_t* AchievementDescription_get_title_m2964721751 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C"  String_t* AchievementDescription_get_achievedDescription_m1849956442 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C"  String_t* AchievementDescription_get_unachievedDescription_m697687775 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C"  bool AchievementDescription_get_hidden_m2326761336 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C"  int32_t AchievementDescription_get_points_m508260507 (AchievementDescription_t3110978151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

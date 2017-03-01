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

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3365630962;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState455716270.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m1897167318 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m4176886497 (UserProfile_t3365630962 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t3542995729 * ___image4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern "C"  String_t* UserProfile_ToString_m3584230475 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m3667428096 (UserProfile_t3365630962 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m3818116510 (UserProfile_t3365630962 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m3142478163 (UserProfile_t3365630962 * __this, Texture2D_t3542995729 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m2334139476 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m1121636229 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m1824376057 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m2818183789 (UserProfile_t3365630962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

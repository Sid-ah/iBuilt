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
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2930725895;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t3198293052;
struct GcUserProfileData_t3198293052_marshaled_pinvoke;
struct GcUserProfileData_t3198293052_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter3198293052.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t3365630962 * GcUserProfileData_ToUserProfile_m1649282029 (GcUserProfileData_t3198293052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m2451723029 (GcUserProfileData_t3198293052 * __this, UserProfileU5BU5D_t2930725895** ___array0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GcUserProfileData_t3198293052;
struct GcUserProfileData_t3198293052_marshaled_pinvoke;

extern "C" void GcUserProfileData_t3198293052_marshal_pinvoke(const GcUserProfileData_t3198293052& unmarshaled, GcUserProfileData_t3198293052_marshaled_pinvoke& marshaled);
extern "C" void GcUserProfileData_t3198293052_marshal_pinvoke_back(const GcUserProfileData_t3198293052_marshaled_pinvoke& marshaled, GcUserProfileData_t3198293052& unmarshaled);
extern "C" void GcUserProfileData_t3198293052_marshal_pinvoke_cleanup(GcUserProfileData_t3198293052_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GcUserProfileData_t3198293052;
struct GcUserProfileData_t3198293052_marshaled_com;

extern "C" void GcUserProfileData_t3198293052_marshal_com(const GcUserProfileData_t3198293052& unmarshaled, GcUserProfileData_t3198293052_marshaled_com& marshaled);
extern "C" void GcUserProfileData_t3198293052_marshal_com_back(const GcUserProfileData_t3198293052_marshaled_com& marshaled, GcUserProfileData_t3198293052& unmarshaled);
extern "C" void GcUserProfileData_t3198293052_marshal_com_cleanup(GcUserProfileData_t3198293052_marshaled_com& marshaled);

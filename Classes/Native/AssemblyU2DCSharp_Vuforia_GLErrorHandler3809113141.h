#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GLErrorHandler
struct  GLErrorHandler_t3809113141  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GLErrorHandler_t3809113141_StaticFields
{
public:
	// System.String Vuforia.GLErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean Vuforia.GLErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(GLErrorHandler_t3809113141_StaticFields, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier(&___mErrorText_2, value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(GLErrorHandler_t3809113141_StaticFields, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

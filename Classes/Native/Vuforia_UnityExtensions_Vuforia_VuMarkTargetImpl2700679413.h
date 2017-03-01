#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t199901830;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t3955455590;
// Vuforia.Image
struct Image_t1391689025;

#include "mscorlib_System_Object2689449295.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3150040852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t2700679413  : public Il2CppObject
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t199901830 * ___mVuMarkTemplate_0;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t3955455590 * ___mInstanceId_1;
	// System.Int32 Vuforia.VuMarkTargetImpl::mTargetId
	int32_t ___mTargetId_2;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_t1391689025 * ___mInstanceImage_3;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_t3150040852  ___mInstanceImageHeader_4;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_0() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mVuMarkTemplate_0)); }
	inline VuMarkTemplateImpl_t199901830 * get_mVuMarkTemplate_0() const { return ___mVuMarkTemplate_0; }
	inline VuMarkTemplateImpl_t199901830 ** get_address_of_mVuMarkTemplate_0() { return &___mVuMarkTemplate_0; }
	inline void set_mVuMarkTemplate_0(VuMarkTemplateImpl_t199901830 * value)
	{
		___mVuMarkTemplate_0 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkTemplate_0, value);
	}

	inline static int32_t get_offset_of_mInstanceId_1() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mInstanceId_1)); }
	inline InstanceIdImpl_t3955455590 * get_mInstanceId_1() const { return ___mInstanceId_1; }
	inline InstanceIdImpl_t3955455590 ** get_address_of_mInstanceId_1() { return &___mInstanceId_1; }
	inline void set_mInstanceId_1(InstanceIdImpl_t3955455590 * value)
	{
		___mInstanceId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mInstanceId_1, value);
	}

	inline static int32_t get_offset_of_mTargetId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mTargetId_2)); }
	inline int32_t get_mTargetId_2() const { return ___mTargetId_2; }
	inline int32_t* get_address_of_mTargetId_2() { return &___mTargetId_2; }
	inline void set_mTargetId_2(int32_t value)
	{
		___mTargetId_2 = value;
	}

	inline static int32_t get_offset_of_mInstanceImage_3() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mInstanceImage_3)); }
	inline Image_t1391689025 * get_mInstanceImage_3() const { return ___mInstanceImage_3; }
	inline Image_t1391689025 ** get_address_of_mInstanceImage_3() { return &___mInstanceImage_3; }
	inline void set_mInstanceImage_3(Image_t1391689025 * value)
	{
		___mInstanceImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInstanceImage_3, value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mInstanceImageHeader_4)); }
	inline ImageHeaderData_t3150040852  get_mInstanceImageHeader_4() const { return ___mInstanceImageHeader_4; }
	inline ImageHeaderData_t3150040852 * get_address_of_mInstanceImageHeader_4() { return &___mInstanceImageHeader_4; }
	inline void set_mInstanceImageHeader_4(ImageHeaderData_t3150040852  value)
	{
		___mInstanceImageHeader_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

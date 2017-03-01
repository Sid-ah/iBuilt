#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractCon1223194715.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTra111727860.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration
struct  DeviceTrackerConfiguration_t2821512775  : public TrackerConfiguration_t1223194715
{
public:
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration::posePrediction
	bool ___posePrediction_2;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration::modelCorrectionMode
	int32_t ___modelCorrectionMode_3;
	// System.Boolean Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration::modelTransformEnabled
	bool ___modelTransformEnabled_4;
	// UnityEngine.Vector3 Vuforia.VuforiaAbstractConfiguration/DeviceTrackerConfiguration::modelTransform
	Vector3_t2243707580  ___modelTransform_5;

public:
	inline static int32_t get_offset_of_posePrediction_2() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t2821512775, ___posePrediction_2)); }
	inline bool get_posePrediction_2() const { return ___posePrediction_2; }
	inline bool* get_address_of_posePrediction_2() { return &___posePrediction_2; }
	inline void set_posePrediction_2(bool value)
	{
		___posePrediction_2 = value;
	}

	inline static int32_t get_offset_of_modelCorrectionMode_3() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t2821512775, ___modelCorrectionMode_3)); }
	inline int32_t get_modelCorrectionMode_3() const { return ___modelCorrectionMode_3; }
	inline int32_t* get_address_of_modelCorrectionMode_3() { return &___modelCorrectionMode_3; }
	inline void set_modelCorrectionMode_3(int32_t value)
	{
		___modelCorrectionMode_3 = value;
	}

	inline static int32_t get_offset_of_modelTransformEnabled_4() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t2821512775, ___modelTransformEnabled_4)); }
	inline bool get_modelTransformEnabled_4() const { return ___modelTransformEnabled_4; }
	inline bool* get_address_of_modelTransformEnabled_4() { return &___modelTransformEnabled_4; }
	inline void set_modelTransformEnabled_4(bool value)
	{
		___modelTransformEnabled_4 = value;
	}

	inline static int32_t get_offset_of_modelTransform_5() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t2821512775, ___modelTransform_5)); }
	inline Vector3_t2243707580  get_modelTransform_5() const { return ___modelTransform_5; }
	inline Vector3_t2243707580 * get_address_of_modelTransform_5() { return &___modelTransform_5; }
	inline void set_modelTransform_5(Vector3_t2243707580  value)
	{
		___modelTransform_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

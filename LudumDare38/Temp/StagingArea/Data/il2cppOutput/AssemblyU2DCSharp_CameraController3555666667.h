#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t2243707580  ___offset_2;
	// System.Single CameraController::sensitivity
	float ___sensitivity_3;
	// UnityEngine.Vector2 CameraController::tilt
	Vector2_t2243707579  ___tilt_4;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___offset_2)); }
	inline Vector3_t2243707580  get_offset_2() const { return ___offset_2; }
	inline Vector3_t2243707580 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector3_t2243707580  value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_sensitivity_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___sensitivity_3)); }
	inline float get_sensitivity_3() const { return ___sensitivity_3; }
	inline float* get_address_of_sensitivity_3() { return &___sensitivity_3; }
	inline void set_sensitivity_3(float value)
	{
		___sensitivity_3 = value;
	}

	inline static int32_t get_offset_of_tilt_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___tilt_4)); }
	inline Vector2_t2243707579  get_tilt_4() const { return ___tilt_4; }
	inline Vector2_t2243707579 * get_address_of_tilt_4() { return &___tilt_4; }
	inline void set_tilt_4(Vector2_t2243707579  value)
	{
		___tilt_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tilt
struct  Tilt_t450897119  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tilt::sensitivity
	float ___sensitivity_2;
	// UnityEngine.Vector2 Tilt::rotationLimits
	Vector2_t2243707579  ___rotationLimits_3;
	// UnityEngine.Vector2 Tilt::rotation
	Vector2_t2243707579  ___rotation_4;

public:
	inline static int32_t get_offset_of_sensitivity_2() { return static_cast<int32_t>(offsetof(Tilt_t450897119, ___sensitivity_2)); }
	inline float get_sensitivity_2() const { return ___sensitivity_2; }
	inline float* get_address_of_sensitivity_2() { return &___sensitivity_2; }
	inline void set_sensitivity_2(float value)
	{
		___sensitivity_2 = value;
	}

	inline static int32_t get_offset_of_rotationLimits_3() { return static_cast<int32_t>(offsetof(Tilt_t450897119, ___rotationLimits_3)); }
	inline Vector2_t2243707579  get_rotationLimits_3() const { return ___rotationLimits_3; }
	inline Vector2_t2243707579 * get_address_of_rotationLimits_3() { return &___rotationLimits_3; }
	inline void set_rotationLimits_3(Vector2_t2243707579  value)
	{
		___rotationLimits_3 = value;
	}

	inline static int32_t get_offset_of_rotation_4() { return static_cast<int32_t>(offsetof(Tilt_t450897119, ___rotation_4)); }
	inline Vector2_t2243707579  get_rotation_4() const { return ___rotation_4; }
	inline Vector2_t2243707579 * get_address_of_rotation_4() { return &___rotation_4; }
	inline void set_rotation_4(Vector2_t2243707579  value)
	{
		___rotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveABit
struct  MoveABit_t1248939901  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MoveABit::multiplier
	float ___multiplier_2;
	// UnityEngine.Vector3 MoveABit::desiredPosition
	Vector3_t2243707580  ___desiredPosition_3;

public:
	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(MoveABit_t1248939901, ___multiplier_2)); }
	inline float get_multiplier_2() const { return ___multiplier_2; }
	inline float* get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(float value)
	{
		___multiplier_2 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_3() { return static_cast<int32_t>(offsetof(MoveABit_t1248939901, ___desiredPosition_3)); }
	inline Vector3_t2243707580  get_desiredPosition_3() const { return ___desiredPosition_3; }
	inline Vector3_t2243707580 * get_address_of_desiredPosition_3() { return &___desiredPosition_3; }
	inline void set_desiredPosition_3(Vector3_t2243707580  value)
	{
		___desiredPosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

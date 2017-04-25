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

// BulletBehaviour
struct  BulletBehaviour_t1522543913  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BulletBehaviour::life
	float ___life_2;
	// System.Single BulletBehaviour::speed
	float ___speed_3;
	// UnityEngine.Vector3 BulletBehaviour::direction
	Vector3_t2243707580  ___direction_4;

public:
	inline static int32_t get_offset_of_life_2() { return static_cast<int32_t>(offsetof(BulletBehaviour_t1522543913, ___life_2)); }
	inline float get_life_2() const { return ___life_2; }
	inline float* get_address_of_life_2() { return &___life_2; }
	inline void set_life_2(float value)
	{
		___life_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BulletBehaviour_t1522543913, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(BulletBehaviour_t1522543913, ___direction_4)); }
	inline Vector3_t2243707580  get_direction_4() const { return ___direction_4; }
	inline Vector3_t2243707580 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t2243707580  value)
	{
		___direction_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

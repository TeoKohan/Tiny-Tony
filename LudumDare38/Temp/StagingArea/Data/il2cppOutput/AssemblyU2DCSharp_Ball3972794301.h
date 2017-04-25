#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Ball::maxSpeed
	float ___maxSpeed_2;
	// System.Single Ball::speed
	float ___speed_3;
	// System.Single Ball::inertia
	float ___inertia_4;
	// System.Int32 Ball::index
	int32_t ___index_5;
	// UnityEngine.Rigidbody Ball::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_6;

public:
	inline static int32_t get_offset_of_maxSpeed_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___maxSpeed_2)); }
	inline float get_maxSpeed_2() const { return ___maxSpeed_2; }
	inline float* get_address_of_maxSpeed_2() { return &___maxSpeed_2; }
	inline void set_maxSpeed_2(float value)
	{
		___maxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_inertia_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___inertia_4)); }
	inline float get_inertia_4() const { return ___inertia_4; }
	inline float* get_address_of_inertia_4() { return &___inertia_4; }
	inline void set_inertia_4(float value)
	{
		___inertia_4 = value;
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_rigidbody_6() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___rigidbody_6)); }
	inline Rigidbody_t4233889191 * get_rigidbody_6() const { return ___rigidbody_6; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_6() { return &___rigidbody_6; }
	inline void set_rigidbody_6(Rigidbody_t4233889191 * value)
	{
		___rigidbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SnakeMovement
struct  SnakeMovement_t1159956075  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 SnakeMovement::_sideSpeed
	Vector3_t2243707580  ____sideSpeed_2;
	// System.Single SnakeMovement::speed
	float ___speed_3;
	// System.Single SnakeMovement::switchSideDeltaTime
	float ___switchSideDeltaTime_4;
	// UnityEngine.Vector3 SnakeMovement::sideSpeed
	Vector3_t2243707580  ___sideSpeed_5;
	// UnityEngine.Animator SnakeMovement::animator
	Animator_t69676727 * ___animator_6;

public:
	inline static int32_t get_offset_of__sideSpeed_2() { return static_cast<int32_t>(offsetof(SnakeMovement_t1159956075, ____sideSpeed_2)); }
	inline Vector3_t2243707580  get__sideSpeed_2() const { return ____sideSpeed_2; }
	inline Vector3_t2243707580 * get_address_of__sideSpeed_2() { return &____sideSpeed_2; }
	inline void set__sideSpeed_2(Vector3_t2243707580  value)
	{
		____sideSpeed_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SnakeMovement_t1159956075, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_switchSideDeltaTime_4() { return static_cast<int32_t>(offsetof(SnakeMovement_t1159956075, ___switchSideDeltaTime_4)); }
	inline float get_switchSideDeltaTime_4() const { return ___switchSideDeltaTime_4; }
	inline float* get_address_of_switchSideDeltaTime_4() { return &___switchSideDeltaTime_4; }
	inline void set_switchSideDeltaTime_4(float value)
	{
		___switchSideDeltaTime_4 = value;
	}

	inline static int32_t get_offset_of_sideSpeed_5() { return static_cast<int32_t>(offsetof(SnakeMovement_t1159956075, ___sideSpeed_5)); }
	inline Vector3_t2243707580  get_sideSpeed_5() const { return ___sideSpeed_5; }
	inline Vector3_t2243707580 * get_address_of_sideSpeed_5() { return &___sideSpeed_5; }
	inline void set_sideSpeed_5(Vector3_t2243707580  value)
	{
		___sideSpeed_5 = value;
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(SnakeMovement_t1159956075, ___animator_6)); }
	inline Animator_t69676727 * get_animator_6() const { return ___animator_6; }
	inline Animator_t69676727 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t69676727 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier(&___animator_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyShooting
struct  EnemyShooting_t2476394687  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EnemyShooting::shootingPosition
	Transform_t3275118058 * ___shootingPosition_2;
	// UnityEngine.Animator EnemyShooting::animController
	Animator_t69676727 * ___animController_3;
	// UnityEngine.GameObject EnemyShooting::bullet
	GameObject_t1756533147 * ___bullet_4;
	// System.Single EnemyShooting::shootingSpeed
	float ___shootingSpeed_5;
	// System.Single EnemyShooting::bulletSpeed
	float ___bulletSpeed_6;
	// System.Single EnemyShooting::bulletLife
	float ___bulletLife_7;
	// System.Boolean EnemyShooting::disableCannon
	bool ___disableCannon_8;

public:
	inline static int32_t get_offset_of_shootingPosition_2() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___shootingPosition_2)); }
	inline Transform_t3275118058 * get_shootingPosition_2() const { return ___shootingPosition_2; }
	inline Transform_t3275118058 ** get_address_of_shootingPosition_2() { return &___shootingPosition_2; }
	inline void set_shootingPosition_2(Transform_t3275118058 * value)
	{
		___shootingPosition_2 = value;
		Il2CppCodeGenWriteBarrier(&___shootingPosition_2, value);
	}

	inline static int32_t get_offset_of_animController_3() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___animController_3)); }
	inline Animator_t69676727 * get_animController_3() const { return ___animController_3; }
	inline Animator_t69676727 ** get_address_of_animController_3() { return &___animController_3; }
	inline void set_animController_3(Animator_t69676727 * value)
	{
		___animController_3 = value;
		Il2CppCodeGenWriteBarrier(&___animController_3, value);
	}

	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___bullet_4)); }
	inline GameObject_t1756533147 * get_bullet_4() const { return ___bullet_4; }
	inline GameObject_t1756533147 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(GameObject_t1756533147 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_4, value);
	}

	inline static int32_t get_offset_of_shootingSpeed_5() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___shootingSpeed_5)); }
	inline float get_shootingSpeed_5() const { return ___shootingSpeed_5; }
	inline float* get_address_of_shootingSpeed_5() { return &___shootingSpeed_5; }
	inline void set_shootingSpeed_5(float value)
	{
		___shootingSpeed_5 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_6() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___bulletSpeed_6)); }
	inline float get_bulletSpeed_6() const { return ___bulletSpeed_6; }
	inline float* get_address_of_bulletSpeed_6() { return &___bulletSpeed_6; }
	inline void set_bulletSpeed_6(float value)
	{
		___bulletSpeed_6 = value;
	}

	inline static int32_t get_offset_of_bulletLife_7() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___bulletLife_7)); }
	inline float get_bulletLife_7() const { return ___bulletLife_7; }
	inline float* get_address_of_bulletLife_7() { return &___bulletLife_7; }
	inline void set_bulletLife_7(float value)
	{
		___bulletLife_7 = value;
	}

	inline static int32_t get_offset_of_disableCannon_8() { return static_cast<int32_t>(offsetof(EnemyShooting_t2476394687, ___disableCannon_8)); }
	inline bool get_disableCannon_8() const { return ___disableCannon_8; }
	inline bool* get_address_of_disableCannon_8() { return &___disableCannon_8; }
	inline void set_disableCannon_8(bool value)
	{
		___disableCannon_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

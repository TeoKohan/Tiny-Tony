#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BearTrap
struct  BearTrap_t3680485901  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator BearTrap::anima
	Animator_t69676727 * ___anima_2;

public:
	inline static int32_t get_offset_of_anima_2() { return static_cast<int32_t>(offsetof(BearTrap_t3680485901, ___anima_2)); }
	inline Animator_t69676727 * get_anima_2() const { return ___anima_2; }
	inline Animator_t69676727 ** get_address_of_anima_2() { return &___anima_2; }
	inline void set_anima_2(Animator_t69676727 * value)
	{
		___anima_2 = value;
		Il2CppCodeGenWriteBarrier(&___anima_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

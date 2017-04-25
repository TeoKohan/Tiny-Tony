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
// UnityEngine.Behaviour
struct Behaviour_t955675639;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Checkpoint
struct  Checkpoint_t1235175266  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Checkpoint::index
	int32_t ___index_2;
	// UnityEngine.Transform Checkpoint::spawnPoint
	Transform_t3275118058 * ___spawnPoint_3;
	// UnityEngine.Behaviour Checkpoint::halo
	Behaviour_t955675639 * ___halo_4;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Checkpoint_t1235175266, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_spawnPoint_3() { return static_cast<int32_t>(offsetof(Checkpoint_t1235175266, ___spawnPoint_3)); }
	inline Transform_t3275118058 * get_spawnPoint_3() const { return ___spawnPoint_3; }
	inline Transform_t3275118058 ** get_address_of_spawnPoint_3() { return &___spawnPoint_3; }
	inline void set_spawnPoint_3(Transform_t3275118058 * value)
	{
		___spawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_3, value);
	}

	inline static int32_t get_offset_of_halo_4() { return static_cast<int32_t>(offsetof(Checkpoint_t1235175266, ___halo_4)); }
	inline Behaviour_t955675639 * get_halo_4() const { return ___halo_4; }
	inline Behaviour_t955675639 ** get_address_of_halo_4() { return &___halo_4; }
	inline void set_halo_4(Behaviour_t955675639 * value)
	{
		___halo_4 = value;
		Il2CppCodeGenWriteBarrier(&___halo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

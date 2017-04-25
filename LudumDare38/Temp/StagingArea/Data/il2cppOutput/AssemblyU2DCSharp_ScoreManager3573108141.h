#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t3573108141  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScoreManager::score
	int32_t ___score_2;
	// UnityEngine.GameObject[] ScoreManager::coins
	GameObjectU5BU5D_t3057952154* ___coins_3;
	// UnityEngine.Transform ScoreManager::spawnLocation
	Transform_t3275118058 * ___spawnLocation_4;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_coins_3() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___coins_3)); }
	inline GameObjectU5BU5D_t3057952154* get_coins_3() const { return ___coins_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_coins_3() { return &___coins_3; }
	inline void set_coins_3(GameObjectU5BU5D_t3057952154* value)
	{
		___coins_3 = value;
		Il2CppCodeGenWriteBarrier(&___coins_3, value);
	}

	inline static int32_t get_offset_of_spawnLocation_4() { return static_cast<int32_t>(offsetof(ScoreManager_t3573108141, ___spawnLocation_4)); }
	inline Transform_t3275118058 * get_spawnLocation_4() const { return ___spawnLocation_4; }
	inline Transform_t3275118058 ** get_address_of_spawnLocation_4() { return &___spawnLocation_4; }
	inline void set_spawnLocation_4(Transform_t3275118058 * value)
	{
		___spawnLocation_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawnLocation_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

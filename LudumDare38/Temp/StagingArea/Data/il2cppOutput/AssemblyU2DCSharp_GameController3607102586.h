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
// Tilt
struct Tilt_t450897119;
// ScoreManager
struct ScoreManager_t3573108141;
// audioPlayer
struct audioPlayer_t1868049139;
// CameraController
struct CameraController_t3555666667;
// MoveABit
struct MoveABit_t1248939901;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Light
struct Light_t494725636;
// GameController
struct GameController_t3607102586;
// Ball[]
struct BallU5BU5D_t3926014128;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameController::ballNumber
	int32_t ___ballNumber_2;
	// UnityEngine.Transform GameController::table
	Transform_t3275118058 * ___table_3;
	// Tilt GameController::tilt
	Tilt_t450897119 * ___tilt_4;
	// ScoreManager GameController::scoremanager
	ScoreManager_t3573108141 * ___scoremanager_5;
	// audioPlayer GameController::audio
	audioPlayer_t1868049139 * ___audio_6;
	// CameraController GameController::camera
	CameraController_t3555666667 * ___camera_7;
	// MoveABit GameController::moveabit
	MoveABit_t1248939901 * ___moveabit_8;
	// UnityEngine.GameObject GameController::ballPrefab
	GameObject_t1756533147 * ___ballPrefab_9;
	// UnityEngine.Transform GameController::startSpawn
	Transform_t3275118058 * ___startSpawn_10;
	// UnityEngine.Light GameController::dir
	Light_t494725636 * ___dir_11;
	// UnityEngine.Light GameController::spot
	Light_t494725636 * ___spot_12;
	// Ball[] GameController::ball
	BallU5BU5D_t3926014128* ___ball_14;
	// System.Int32 GameController::spawnIndex
	int32_t ___spawnIndex_15;
	// UnityEngine.Transform GameController::spawnTransform
	Transform_t3275118058 * ___spawnTransform_16;
	// System.Boolean GameController::win
	bool ___win_17;
	// System.Boolean GameController::lightTrans
	bool ___lightTrans_18;

public:
	inline static int32_t get_offset_of_ballNumber_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ballNumber_2)); }
	inline int32_t get_ballNumber_2() const { return ___ballNumber_2; }
	inline int32_t* get_address_of_ballNumber_2() { return &___ballNumber_2; }
	inline void set_ballNumber_2(int32_t value)
	{
		___ballNumber_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___table_3)); }
	inline Transform_t3275118058 * get_table_3() const { return ___table_3; }
	inline Transform_t3275118058 ** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(Transform_t3275118058 * value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier(&___table_3, value);
	}

	inline static int32_t get_offset_of_tilt_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___tilt_4)); }
	inline Tilt_t450897119 * get_tilt_4() const { return ___tilt_4; }
	inline Tilt_t450897119 ** get_address_of_tilt_4() { return &___tilt_4; }
	inline void set_tilt_4(Tilt_t450897119 * value)
	{
		___tilt_4 = value;
		Il2CppCodeGenWriteBarrier(&___tilt_4, value);
	}

	inline static int32_t get_offset_of_scoremanager_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoremanager_5)); }
	inline ScoreManager_t3573108141 * get_scoremanager_5() const { return ___scoremanager_5; }
	inline ScoreManager_t3573108141 ** get_address_of_scoremanager_5() { return &___scoremanager_5; }
	inline void set_scoremanager_5(ScoreManager_t3573108141 * value)
	{
		___scoremanager_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoremanager_5, value);
	}

	inline static int32_t get_offset_of_audio_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___audio_6)); }
	inline audioPlayer_t1868049139 * get_audio_6() const { return ___audio_6; }
	inline audioPlayer_t1868049139 ** get_address_of_audio_6() { return &___audio_6; }
	inline void set_audio_6(audioPlayer_t1868049139 * value)
	{
		___audio_6 = value;
		Il2CppCodeGenWriteBarrier(&___audio_6, value);
	}

	inline static int32_t get_offset_of_camera_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___camera_7)); }
	inline CameraController_t3555666667 * get_camera_7() const { return ___camera_7; }
	inline CameraController_t3555666667 ** get_address_of_camera_7() { return &___camera_7; }
	inline void set_camera_7(CameraController_t3555666667 * value)
	{
		___camera_7 = value;
		Il2CppCodeGenWriteBarrier(&___camera_7, value);
	}

	inline static int32_t get_offset_of_moveabit_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___moveabit_8)); }
	inline MoveABit_t1248939901 * get_moveabit_8() const { return ___moveabit_8; }
	inline MoveABit_t1248939901 ** get_address_of_moveabit_8() { return &___moveabit_8; }
	inline void set_moveabit_8(MoveABit_t1248939901 * value)
	{
		___moveabit_8 = value;
		Il2CppCodeGenWriteBarrier(&___moveabit_8, value);
	}

	inline static int32_t get_offset_of_ballPrefab_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ballPrefab_9)); }
	inline GameObject_t1756533147 * get_ballPrefab_9() const { return ___ballPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_ballPrefab_9() { return &___ballPrefab_9; }
	inline void set_ballPrefab_9(GameObject_t1756533147 * value)
	{
		___ballPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___ballPrefab_9, value);
	}

	inline static int32_t get_offset_of_startSpawn_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___startSpawn_10)); }
	inline Transform_t3275118058 * get_startSpawn_10() const { return ___startSpawn_10; }
	inline Transform_t3275118058 ** get_address_of_startSpawn_10() { return &___startSpawn_10; }
	inline void set_startSpawn_10(Transform_t3275118058 * value)
	{
		___startSpawn_10 = value;
		Il2CppCodeGenWriteBarrier(&___startSpawn_10, value);
	}

	inline static int32_t get_offset_of_dir_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___dir_11)); }
	inline Light_t494725636 * get_dir_11() const { return ___dir_11; }
	inline Light_t494725636 ** get_address_of_dir_11() { return &___dir_11; }
	inline void set_dir_11(Light_t494725636 * value)
	{
		___dir_11 = value;
		Il2CppCodeGenWriteBarrier(&___dir_11, value);
	}

	inline static int32_t get_offset_of_spot_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spot_12)); }
	inline Light_t494725636 * get_spot_12() const { return ___spot_12; }
	inline Light_t494725636 ** get_address_of_spot_12() { return &___spot_12; }
	inline void set_spot_12(Light_t494725636 * value)
	{
		___spot_12 = value;
		Il2CppCodeGenWriteBarrier(&___spot_12, value);
	}

	inline static int32_t get_offset_of_ball_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ball_14)); }
	inline BallU5BU5D_t3926014128* get_ball_14() const { return ___ball_14; }
	inline BallU5BU5D_t3926014128** get_address_of_ball_14() { return &___ball_14; }
	inline void set_ball_14(BallU5BU5D_t3926014128* value)
	{
		___ball_14 = value;
		Il2CppCodeGenWriteBarrier(&___ball_14, value);
	}

	inline static int32_t get_offset_of_spawnIndex_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnIndex_15)); }
	inline int32_t get_spawnIndex_15() const { return ___spawnIndex_15; }
	inline int32_t* get_address_of_spawnIndex_15() { return &___spawnIndex_15; }
	inline void set_spawnIndex_15(int32_t value)
	{
		___spawnIndex_15 = value;
	}

	inline static int32_t get_offset_of_spawnTransform_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnTransform_16)); }
	inline Transform_t3275118058 * get_spawnTransform_16() const { return ___spawnTransform_16; }
	inline Transform_t3275118058 ** get_address_of_spawnTransform_16() { return &___spawnTransform_16; }
	inline void set_spawnTransform_16(Transform_t3275118058 * value)
	{
		___spawnTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&___spawnTransform_16, value);
	}

	inline static int32_t get_offset_of_win_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___win_17)); }
	inline bool get_win_17() const { return ___win_17; }
	inline bool* get_address_of_win_17() { return &___win_17; }
	inline void set_win_17(bool value)
	{
		___win_17 = value;
	}

	inline static int32_t get_offset_of_lightTrans_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___lightTrans_18)); }
	inline bool get_lightTrans_18() const { return ___lightTrans_18; }
	inline bool* get_address_of_lightTrans_18() { return &___lightTrans_18; }
	inline void set_lightTrans_18(bool value)
	{
		___lightTrans_18 = value;
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// GameController GameController::instance
	GameController_t3607102586 * ___instance_13;

public:
	inline static int32_t get_offset_of_instance_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___instance_13)); }
	inline GameController_t3607102586 * get_instance_13() const { return ___instance_13; }
	inline GameController_t3607102586 ** get_address_of_instance_13() { return &___instance_13; }
	inline void set_instance_13(GameController_t3607102586 * value)
	{
		___instance_13 = value;
		Il2CppCodeGenWriteBarrier(&___instance_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

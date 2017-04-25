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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MazeMovementTeo
struct  MazeMovementTeo_t1077934998  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MazeMovementTeo::sensitivity
	float ___sensitivity_2;
	// UnityEngine.Vector2 MazeMovementTeo::rotationLimits
	Vector2_t2243707579  ___rotationLimits_3;
	// System.Boolean MazeMovementTeo::invert
	bool ___invert_4;
	// UnityEngine.Vector2 MazeMovementTeo::rotation
	Vector2_t2243707579  ___rotation_5;
	// UnityEngine.Vector3 MazeMovementTeo::cameraRotation
	Vector3_t2243707580  ___cameraRotation_6;
	// UnityEngine.Rigidbody MazeMovementTeo::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_7;
	// System.Int32 MazeMovementTeo::inversion
	int32_t ___inversion_8;

public:
	inline static int32_t get_offset_of_sensitivity_2() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___sensitivity_2)); }
	inline float get_sensitivity_2() const { return ___sensitivity_2; }
	inline float* get_address_of_sensitivity_2() { return &___sensitivity_2; }
	inline void set_sensitivity_2(float value)
	{
		___sensitivity_2 = value;
	}

	inline static int32_t get_offset_of_rotationLimits_3() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___rotationLimits_3)); }
	inline Vector2_t2243707579  get_rotationLimits_3() const { return ___rotationLimits_3; }
	inline Vector2_t2243707579 * get_address_of_rotationLimits_3() { return &___rotationLimits_3; }
	inline void set_rotationLimits_3(Vector2_t2243707579  value)
	{
		___rotationLimits_3 = value;
	}

	inline static int32_t get_offset_of_invert_4() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___invert_4)); }
	inline bool get_invert_4() const { return ___invert_4; }
	inline bool* get_address_of_invert_4() { return &___invert_4; }
	inline void set_invert_4(bool value)
	{
		___invert_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___rotation_5)); }
	inline Vector2_t2243707579  get_rotation_5() const { return ___rotation_5; }
	inline Vector2_t2243707579 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Vector2_t2243707579  value)
	{
		___rotation_5 = value;
	}

	inline static int32_t get_offset_of_cameraRotation_6() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___cameraRotation_6)); }
	inline Vector3_t2243707580  get_cameraRotation_6() const { return ___cameraRotation_6; }
	inline Vector3_t2243707580 * get_address_of_cameraRotation_6() { return &___cameraRotation_6; }
	inline void set_cameraRotation_6(Vector3_t2243707580  value)
	{
		___cameraRotation_6 = value;
	}

	inline static int32_t get_offset_of_rigidbody_7() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___rigidbody_7)); }
	inline Rigidbody_t4233889191 * get_rigidbody_7() const { return ___rigidbody_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_7() { return &___rigidbody_7; }
	inline void set_rigidbody_7(Rigidbody_t4233889191 * value)
	{
		___rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_7, value);
	}

	inline static int32_t get_offset_of_inversion_8() { return static_cast<int32_t>(offsetof(MazeMovementTeo_t1077934998, ___inversion_8)); }
	inline int32_t get_inversion_8() const { return ___inversion_8; }
	inline int32_t* get_address_of_inversion_8() { return &___inversion_8; }
	inline void set_inversion_8(int32_t value)
	{
		___inversion_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

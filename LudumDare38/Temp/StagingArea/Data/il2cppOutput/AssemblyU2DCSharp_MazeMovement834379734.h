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

// MazeMovement
struct  MazeMovement_t834379734  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MazeMovement::sensitivity
	float ___sensitivity_2;
	// UnityEngine.Vector3 MazeMovement::rotationLimits
	Vector3_t2243707580  ___rotationLimits_3;
	// System.Boolean MazeMovement::cameraBasedRotation
	bool ___cameraBasedRotation_4;
	// System.Boolean MazeMovement::mouseBasedRotation
	bool ___mouseBasedRotation_5;
	// UnityEngine.Vector3 MazeMovement::rotation
	Vector3_t2243707580  ___rotation_6;
	// UnityEngine.Vector3 MazeMovement::cameraRotation
	Vector3_t2243707580  ___cameraRotation_7;

public:
	inline static int32_t get_offset_of_sensitivity_2() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___sensitivity_2)); }
	inline float get_sensitivity_2() const { return ___sensitivity_2; }
	inline float* get_address_of_sensitivity_2() { return &___sensitivity_2; }
	inline void set_sensitivity_2(float value)
	{
		___sensitivity_2 = value;
	}

	inline static int32_t get_offset_of_rotationLimits_3() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___rotationLimits_3)); }
	inline Vector3_t2243707580  get_rotationLimits_3() const { return ___rotationLimits_3; }
	inline Vector3_t2243707580 * get_address_of_rotationLimits_3() { return &___rotationLimits_3; }
	inline void set_rotationLimits_3(Vector3_t2243707580  value)
	{
		___rotationLimits_3 = value;
	}

	inline static int32_t get_offset_of_cameraBasedRotation_4() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___cameraBasedRotation_4)); }
	inline bool get_cameraBasedRotation_4() const { return ___cameraBasedRotation_4; }
	inline bool* get_address_of_cameraBasedRotation_4() { return &___cameraBasedRotation_4; }
	inline void set_cameraBasedRotation_4(bool value)
	{
		___cameraBasedRotation_4 = value;
	}

	inline static int32_t get_offset_of_mouseBasedRotation_5() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___mouseBasedRotation_5)); }
	inline bool get_mouseBasedRotation_5() const { return ___mouseBasedRotation_5; }
	inline bool* get_address_of_mouseBasedRotation_5() { return &___mouseBasedRotation_5; }
	inline void set_mouseBasedRotation_5(bool value)
	{
		___mouseBasedRotation_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___rotation_6)); }
	inline Vector3_t2243707580  get_rotation_6() const { return ___rotation_6; }
	inline Vector3_t2243707580 * get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(Vector3_t2243707580  value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_cameraRotation_7() { return static_cast<int32_t>(offsetof(MazeMovement_t834379734, ___cameraRotation_7)); }
	inline Vector3_t2243707580  get_cameraRotation_7() const { return ___cameraRotation_7; }
	inline Vector3_t2243707580 * get_address_of_cameraRotation_7() { return &___cameraRotation_7; }
	inline void set_cameraRotation_7(Vector3_t2243707580  value)
	{
		___cameraRotation_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

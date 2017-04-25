#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioPlayer
struct  audioPlayer_t1868049139  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource audioPlayer::source
	AudioSource_t1135106623 * ___source_2;
	// UnityEngine.AudioClip[] audioPlayer::clips
	AudioClipU5BU5D_t2203355011* ___clips_3;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(audioPlayer_t1868049139, ___source_2)); }
	inline AudioSource_t1135106623 * get_source_2() const { return ___source_2; }
	inline AudioSource_t1135106623 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(AudioSource_t1135106623 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_clips_3() { return static_cast<int32_t>(offsetof(audioPlayer_t1868049139, ___clips_3)); }
	inline AudioClipU5BU5D_t2203355011* get_clips_3() const { return ___clips_3; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_clips_3() { return &___clips_3; }
	inline void set_clips_3(AudioClipU5BU5D_t2203355011* value)
	{
		___clips_3 = value;
		Il2CppCodeGenWriteBarrier(&___clips_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

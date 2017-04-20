// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Learn/Waves" {
	Properties {
		_SkyColour ("Sky Colour", Color) = (1, 1, 1, 1)
		_SeaColour("Sea Colour", Color) = (1, 1, 1, 1)

		_WaveSpeedX("Wave Speed", Range(-100, 100)) = 2
		_WaveSpeedZ("Wave Speed", Range(-100, 100)) = 2
		_SeaLevelRange("Sea Level Range", Range(-100, 100)) = 2
		_SeaLevelSpeed("Sea Level Speed", Range(-100, 100)) = 2

		_SeaLevel("Sea Level", Range(-1000, 1000)) = 0
		_Amplitude("Amplitude", Range(-100, 100)) = 2
		_Frequency("Frequency", Range(-100, 100)) = 2
	}

	SubShader {
		Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        ZWrite Off
        Blend SrcAlpha OneMinusSrcAlpha
		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"

			fixed4 _SkyColour;
			fixed4 _SeaColour;

			uniform half _WaveSpeedX;
			uniform half _WaveSpeedZ;
			uniform half _SeaLevelRange;
			uniform half _SeaLevelSpeed;

			uniform half _SeaLevel;
			uniform half _Amplitude;
			uniform half _Frequency;

			struct 	vertInput {
				float4 pos : POSITION;
			};

			struct vertOutput {
				float4 pos : SV_POSITION;
				float3 wPos : TEXCOORD1;
			};

			vertOutput vert(vertInput input) {
				vertOutput o;
				o.wPos = mul(unity_ObjectToWorld, input.pos).xyz;
				o.pos = UnityObjectToClipPos(input.pos);
				return o;
			}

			half4 frag(vertOutput o) : COLOR {
				half seaLevel = (_SeaLevel + _SeaLevelRange * sin(_Time[0] * _SeaLevelSpeed));
				half waves = (cos(o.wPos.x * _Frequency + _WaveSpeedX * _Time[0]) + cos(o.wPos.z * _Frequency + _WaveSpeedZ * _Time[0]) ) * _Amplitude + o.wPos.y;
				//if (waves < seaLevel)
				//	return _SeaColour;
				
				half seaMask = step(waves, seaLevel);
				half skyMask = step(seaLevel, waves);
				//half foamMask = step(1, seaMask);
				half foamMask = 0;

				//half isOne = (min(1, foamMask) - 1);
				return (skyMask * _SkyColour + seaMask * _SeaColour + foamMask);
			}
			ENDCG
		}
	}
}
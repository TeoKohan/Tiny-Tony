// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Learn/Ghost" {
	Properties {
	//Smoke setup
	_Colour ("Colour (RGBA)", Color) = (1,1,1,1)

	//Mouse hole
	_HoleCenter("Hole Center", Vector) = (0,0,0,0)
	_HoleRadius("Hole Radius", Range(0,5)) = 0.05

	}
	SubShader {
		Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        Blend SrcAlpha OneMinusSrcAlpha

		Fog { Mode Off }

		Pass {

		CGPROGRAM
		#pragma vertex vert
		#pragma fragment frag

		#include "UnityCG.cginc"

		uniform half3 _Colour;

		uniform half3 _HoleCenter;
		uniform float _HoleRadius;

		struct vertInput {
		float4 pos : POSITION;
		};

		struct vertOutput {
		float4 pos : SV_POSITION;
		float3 wPos : TEXCOORD1;
		};

		vertOutput vert (appdata_full i) {
			vertOutput o;
			o.pos = UnityObjectToClipPos(i.vertex);
			o.wPos = mul(unity_ObjectToWorld, i.vertex).xyz;
			return o;
		}

		//float4 frag(v2f_img i) : COLOR
		half4 frag(vertOutput o) : COLOR {
		half alpha;
		half3 b = half3(_HoleRadius * half3(1,1,1));
		alpha = saturate(saturate(distance(_HoleCenter, o.wPos) - _HoleRadius) - _SinTime[2] * o.wPos.y * _SinTime[3] * 0.25);
		return half4 (_Colour.r, _Colour.g, _Colour.b, alpha);
		}
		ENDCG

		}
	}
}
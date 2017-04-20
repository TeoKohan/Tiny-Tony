// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Learn/X-Ray" {
	Properties {
	//Smoke setup
	_Colour ("Main Texture (RGBA)", Color) = (1,1,1,1)

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

		uniform half4 _Colour;

		uniform half4 _HoleCenter;
		uniform float _HoleRadius;

		struct vertOutput {
		float4 pos : SV_POSITION;
		float2 uv : TEXCOORD;
		float3 wPos : TEXCOORD1;
		half4 col : COLOR;
		};

		vertOutput vert (appdata_full i) {
			vertOutput o;
			o.pos = UnityObjectToClipPos(i.vertex);
			o.col.xyz = i.normal * 0.5 + 0.5;
			o.wPos = mul(unity_ObjectToWorld, i.vertex).xyz;
			return o;
		}

		//float4 frag(v2f_img i) : COLOR
		half4 frag(vertOutput o) : COLOR {
				if (distance(o.wPos, _HoleCenter) <= _HoleRadius)
					return half4 (0, 0, 0, 0);

				return o.col;
			}
			ENDCG

		}
	}
}
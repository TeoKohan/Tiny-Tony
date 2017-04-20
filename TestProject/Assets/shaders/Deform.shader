// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Learn/Deform" {
	Properties {
	_Colour ("Colour", Color) = (1, 1, 1, 1)
	}

	SubShader {
		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			fixed4 _Colour;

			struct 	vertInput {
				float4 pos : POSITION;
			};

			struct vertOutput {
				float4 pos : SV_POSITION;
			};

			vertOutput vert(vertInput input) {
				vertOutput o;
				o.pos = UnityObjectToClipPos(input.pos);
				return o;
			}

			half4 frag(vertOutput output) : COLOR {
				return _Colour;
			}
			ENDCG
		}
	}
}
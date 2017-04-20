// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Learn/Stencil" {
	Properties {
	_StencilMask ("Mask Number", int) = 0
	_Colour ("Colour", Color) = (1, 1, 1, 1)
	}

	SubShader {
		Tags {
			"RenderType" = "Opaque"
			"Queue" = "Geometry-100"
		}
		ColorMask 0
		ZWrite off
		Stencil {
			Ref[_StencilMask]
			Comp always
			Pass replace
		}

		Pass {
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			int _StencilMask;
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
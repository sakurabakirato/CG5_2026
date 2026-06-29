#include "Test.hlsli"

struct PixelShaderOutput
{
    float32_t4 color : SV_TARGET0;
};

PixelShaderOutput main(VertexShaderOutput input)
{
    PixelShaderOutput output;
    
    float2 uv = input.texcoord;

    // uv(x,y)を色(r,g)として表示する
    output.color = float4(uv.x, uv.y, 0.0f, 1.0f);

	return output;
}
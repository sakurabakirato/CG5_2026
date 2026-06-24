#pragma once
#include <d3d12.h>

class RootSignature 
{
public:

	//生成
	void Craate();

	//ゲッター
	ID3D12RootSignature* Get();

	//コンストラクタ
	RootSignature();

	//デストラクタ
	~RootSignature();

private:

	ID3D12RootSignature* rootSignature_ = nullptr;

};

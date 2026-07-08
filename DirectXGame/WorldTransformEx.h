#pragma once
#include "KamataEngine.h"

class WorldTransformEx : public KamataEngine::WorldTransform 
{
public:
	// Affine変換行列の生成と定数バッファへの転送を行う
	void UpdateMatrix();

    //Affine変換行列
	KamataEngine::Matrix4x4 MakeAffineMatrix();
};

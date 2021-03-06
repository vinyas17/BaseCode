#pragma once
#include "GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();
	void draw();
	void load(const LoaderParams* pParams);
	void update();
	void update(int width);

	static GameObject* Create() {

		return new Enemy();

	}
};
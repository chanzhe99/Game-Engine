#pragma once

#include <Application.h>
#include <GameObject.h>
#include <Sprite.h>

#include "windows.h"

class Game
{
private:
	Sprite* Sprite1;
	GameObject* Object1;

public:
	Game();
	~Game() {}

	void Update(float DeltaTime);
	void Draw();
};

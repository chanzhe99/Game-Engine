#include "Game.h"

Game::Game()
{
	Sprite1 = new Sprite();
	Object1 = new GameObject(Sprite1);
	Object1->SetPosition(Vector2(640, 360));
}

void Game::Update(float DeltaTime)
{
	Object1->Update(DeltaTime);
}

void Game::Draw()
{
	Object1->Draw();
}

#include "Game.h"
#include "raylib.h"
#include "string"
#include "ObjectBase.h"

Game::Game()
{

}

void Game::Init()
{
	InitWindow(m_Window.Width, m_Window.Height, m_Window.Title);
	SetTargetFPS(m_Window.TargetFPS);
}

void Game::Run()
{
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BEIGE);

		DrawText(std::to_string(GetFPS()).c_str(), 30, 20, 24, RED);

		EndDrawing();
	}

	CloseWindow();
}
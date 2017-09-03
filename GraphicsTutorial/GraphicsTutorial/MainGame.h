#pragma once
#include <SDL\SDL.h>
#include <GL\glew.h>

#include "GLSLProgram.h"
#include "GLTexture.h"
#include "Sprite.h"

#include <vector>

enum class GameState{PLAY,EXIT};

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

private:
	void initSystems();
	void initShaders();
	void gameLoop();
	void proccessInput();
	void drawGame();

	SDL_Window* _window;
	int _screenWidth;
	int _screenHeight;
	GameState _gameState;

	std::vector <Sprite*> _sprites;

	GLSLProgram _colorProgram;
	GLTexture _playerTexture;

	float _time;
};
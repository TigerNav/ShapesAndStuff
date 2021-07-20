#pragma once
#include "GameObjects/Player.h"

class GameState
{
public:
	Player player;
	void initGameState();
	void updateGameState();
	void renderGameState(sf::RenderWindow* window);
	void KeyboardInput();
};


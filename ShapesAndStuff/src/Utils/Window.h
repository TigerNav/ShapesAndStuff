#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "StateHandler.h"
#include "Font.h"
#include <iostream>

class Window
{
public:
	
	sf::RenderWindow* window;
	Font font;
	StateHandler stateHandler;
	int menuSelection = stateHandler.selection;
	int addup = 1;
	Window();
	void run();

};


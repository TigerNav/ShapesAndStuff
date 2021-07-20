#pragma once
#include "Menu.h"
#include "SplashScreen.h"
#include "../Utils/Font.h"
#include <SFML/Graphics.hpp>
class MenuState
{
public:
	
	SplashScreen splashScreen;
	Menu menu;
	int Menuselection = menu.selection;
	Font font;
	bool shid;
	void KeyboardInput();
	void initMenuState();
	void updateMenuState();
	void renderMenuState(sf::RenderWindow* window);
};


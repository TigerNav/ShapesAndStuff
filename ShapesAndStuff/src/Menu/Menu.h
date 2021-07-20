#pragma once
#include <SFML/Graphics.hpp>
#include "../Utils/Font.h"
#include <iostream>

class Menu
{
private:
	
	sf::Text Title, Play, Options, Exit;
	
	int addshit = 1;
	bool addup;
	bool adddown;
public:
	bool game;
	int selection;
	void InitMenu(Font &font);
	void KeyboardInput();
	void UpdateMenu();
	void RenderMenu(sf::RenderWindow* window);

};


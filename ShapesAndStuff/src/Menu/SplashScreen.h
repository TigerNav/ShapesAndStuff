#pragma once

#include <SFML/Graphics.hpp>
#include "../Utils/Font.h"
#include <SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>

class SplashScreen
{
public:
	int i = 255;
	
	sf::SoundBuffer buffer;
	sf::Sound sound;
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Text text;
	sf::Text text2;
	sf::Text Continue;
	sf::Clock clock;

	void OpenSplashScreen(Font& font);
	void RenderSpashScreen(sf::RenderWindow* window);
	void CloseSpashScreen();
};

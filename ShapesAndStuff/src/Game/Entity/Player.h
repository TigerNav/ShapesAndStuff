#pragma once
#include <SFML/Graphics.hpp>
class Player
{
public:
	sf::RenderWindow* window;
	sf::CircleShape triangle;
	sf::RectangleShape rectangle;

	sf::Vector2i mousePos;
	sf::Vector2f playerPos;
	const float PI = 3.14159265;
	float rotation;
	float dy, dx;

	void InitPlayer();
	void UpdatePlayer();
	void KeyboardInput();
	void RenderPlayer(sf::RenderWindow* window);

};


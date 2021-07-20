#include "Player.h"

void Player::InitPlayer() {

	triangle.setRadius(50.f);
	triangle.setPointCount(3);
	triangle.setPosition(500, 500);

}

void Player::UpdatePlayer() {

	mousePos = sf::Mouse::getPosition();
	playerPos = triangle.getPosition();

	dx = playerPos.x - mousePos.x;
	dy = playerPos.y - mousePos.y;

	rotation = (atan2(dy, dx)) * 180 / PI;
	rotation + 180;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		triangle.move(0, -0.4);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		triangle.move(-0.4, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		triangle.move(0.4, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		triangle.move(0, 0.4);

	triangle.setRotation(rotation);

}

void Player::KeyboardInput() {

}

void Player::RenderPlayer(sf::RenderWindow* window) {
	this->window = window;
	window->draw(triangle);
	
}



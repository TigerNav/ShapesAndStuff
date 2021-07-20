#include "GameState.h"
#include <iostream>


void GameState::initGameState() {
	player.InitPlayer();
}

void GameState::updateGameState() {
	player.UpdatePlayer();
	std::cout << "In Game" << std::endl;
}

void GameState::KeyboardInput() {

}

void GameState::renderGameState(sf::RenderWindow* window) {
	player.RenderPlayer(window);
}

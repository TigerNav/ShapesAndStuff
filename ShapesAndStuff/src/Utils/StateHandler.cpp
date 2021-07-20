#include "StateHandler.h"
#include <SFML/Graphics.hpp>
#include <iostream>

bool StateHandler::SwitchToGame() {
	return isGame;
}
bool StateHandler::SwitchToMenu() {
	return isMenu;
}
bool StateHandler::SwitchToPause() {
	return isPause;
}

StateHandler::StateHandler() {
	menustate.initMenuState();
	gamestate.initGameState();
	pausestate.InitPause();
}

void StateHandler::StateInit() {
	
}

void StateHandler::KeyboardInput() {
	menustate.KeyboardInput();
}

void StateHandler::StateSwitch(sf::RenderWindow* window) {
	if (SwitchToGame()) {
		isMenu = false;
		isPause = false;

		gamestate.updateGameState();
		gamestate.renderGameState(window);

		

	}
	if (SwitchToMenu()) {
		isGame = false;
		isPause = false;

		menustate.updateMenuState();
		menustate.renderMenuState(window);


		if (menustate.menu.game) {
			std::cout << "shid" << std::endl;
			isGame = true;
		}

	}
	if (SwitchToPause()) {
		isMenu = false;
		isGame = false;

		pausestate.PauseUpdate();
		pausestate.PauseRender();
	}
}
#include "MenuState.h"

#include <iostream>

void MenuState::initMenuState() {
	font.InitFont();
	splashScreen.OpenSplashScreen(font);
	menu.InitMenu(font);
	
}

void MenuState::KeyboardInput() {
	menu.KeyboardInput();
}

void MenuState::updateMenuState() {
	menu.UpdateMenu();
	if (menu.game)
		shid = true;
}

void MenuState::renderMenuState(sf::RenderWindow* window) {
	splashScreen.RenderSpashScreen(window);
	if(splashScreen.clock.getElapsedTime().asSeconds() >= 3)
		menu.RenderMenu(window);
}

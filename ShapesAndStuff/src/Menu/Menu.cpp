#include "Menu.h"

void Menu::InitMenu(Font &font) {

	Title.setFont(font.font);
	Title.setString("Shape Run");
	Title.setCharacterSize(60);
	Title.setFillColor(sf::Color::White);
	Title.setPosition(690, 100);

	Play.setFont(font.font);
	Play.setString("Play");
	Play.setCharacterSize(50);
	Play.setFillColor(sf::Color::White);
	Play.setPosition(770, 250);
	
	Options.setFont(font.font);
	Options.setString("Options");
	Options.setCharacterSize(50);
	Options.setFillColor(sf::Color::White);
	Options.setPosition(740, 350);

	Exit.setFont(font.font);
	Exit.setString("Exit");
	Exit.setCharacterSize(50);
	Exit.setFillColor(sf::Color::White);
	Exit.setPosition(770, 450);

	selection = 1;

	
}

void Menu::KeyboardInput(){
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		selection += addshit;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		selection -= addshit;
}

void Menu::UpdateMenu() {

	switch (selection) {
	case 0:
		selection = 3;
		break;
	case 1:
		Play.setFillColor(sf::Color::Green);
		Options.setFillColor(sf::Color::White);
		Exit.setFillColor(sf::Color::White);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			game = true;
		
		break;
	case 2:
		Play.setFillColor(sf::Color::White);
		Options.setFillColor(sf::Color::Green);
		Exit.setFillColor(sf::Color::White);
		break;
	case 3:
		Play.setFillColor(sf::Color::White);
		Options.setFillColor(sf::Color::White);
		Exit.setFillColor(sf::Color::Green);
		break;
	case 4:
		selection = 1;
		break;
	}

	std::cout << selection << std::endl;

	
}

void Menu::RenderMenu(sf::RenderWindow* window) {
	window->draw(Title);
	window->draw(Play);
	window->draw(Options);
	window->draw(Exit);

}

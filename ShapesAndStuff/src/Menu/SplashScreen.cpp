#include "SplashScreen.h"

void SplashScreen::OpenSplashScreen(Font &font) {
	

	text.setFont(font.font);
	text.setString("A Game Made By :");
	text.setCharacterSize(40);
	text.setFillColor(sf::Color::White);
	text.setPosition(650, 50);

	text2.setFont(font.font);
	text2.setString("LiL_chromosome");
	text2.setCharacterSize(50);
	text2.setFillColor(sf::Color::White);
	text2.setPosition(650, 150);

	if (!texture.loadFromFile("D:/Programming shit i did/C C++/Games and grabage/GameJams/ShapesAndStuff/ShapesAndStuff/src/Assets/SplashImage.png")) std::cout << "shid" << std::endl ;
	sprite.setTexture(texture);
	sprite.setPosition(660, 300);

	if (!buffer.loadFromFile("D:/Programming shit i did/C C++/Games and grabage/GameJams/ShapesAndStuff/ShapesAndStuff/src/Assets/Pickup_Coin4.wav"))
		std::cout << "sound shid" << std::endl;
	sound.setBuffer(buffer);
	
	sound.play();

	CloseSpashScreen();
}

void SplashScreen::RenderSpashScreen(sf::RenderWindow* window) {
	
	window->draw(text);
	window->draw(text2);
	window->draw(sprite);

	if (clock.getElapsedTime().asSeconds() > 2) {
		--i;

		text.setFillColor(sf::Color(255, 255, 255, i));
		text2.setFillColor(sf::Color(255, 255, 255, i));
		sprite.setColor(sf::Color(255, 255, 255, i));

		if (i <= 0) {
			window->clear();
			
		}
	}

}

void SplashScreen::CloseSpashScreen() {
	
}

#include "Font.h"

void Font::InitFont() {
	if (!font.loadFromFile("D:/Programming shit i did/C C++/Games and grabage/GameJams/ShapesAndStuff/ShapesAndStuff/src/Assets/fixedsys-ligatures.ttf"))
		std::cout << "font could not load cuz error" << std::endl;
}

sf::Font Font::getFont() {return font;}

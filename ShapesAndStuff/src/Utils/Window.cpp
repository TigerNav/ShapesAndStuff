#include "Window.h"

Window::Window() {
	window = new sf::RenderWindow(sf::VideoMode(1600, 800), "ShapesAndStuff");
	window->setKeyRepeatEnabled(false);
	stateHandler.StateInit();
}
void Window::run() {
	
	while (window->isOpen()) {

		
		sf::Event event;
		while (window->pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				exit(0);

			stateHandler.KeyboardInput();
		}
		window->clear();
		stateHandler.StateSwitch(window);
		window->display();
	}

}

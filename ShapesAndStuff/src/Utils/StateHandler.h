#pragma once

#include "../Game/GameState.h"
#include "../Menu/MenuState.h"
#include "../Pause/PauseState.h"

class StateHandler
{
private:
	GameState gamestate;
	MenuState menustate;
	PauseState pausestate;
public:
	int selection = menustate.Menuselection;
	bool isMenu = true , isPause = false, isGame = false;
	StateHandler();
	bool SwitchToMenu();
	bool SwitchToPause();
	bool SwitchToGame();
	void KeyboardInput();
	void StateSwitch(sf::RenderWindow* window);
	void StateInit();
};


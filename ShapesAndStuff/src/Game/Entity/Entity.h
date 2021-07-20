#pragma once
#include <SFML/Graphics.hpp>
class GameObject
{
public:
	int x, y, width, height;
	virtual void InitEntity(int width, int height);


};


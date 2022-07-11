#include "Snake.h"

void Snake::updatePosition(char lastKeyPressed)
{
	if (lastKeyPressed == 'W') {
		this->x = this->x;
		this->y -= 1;
	}

	if (lastKeyPressed == 'S') {
		this->x = this->x;
		this->y += 1;
	}

	if (lastKeyPressed == 'A') {
		this->x -= 1;
		this->y = this->y;
	}

	if (lastKeyPressed == 'D') {
		this->x += 1;
		this->y = this->y;
	}
}

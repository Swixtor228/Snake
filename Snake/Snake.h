#pragma once

#include <map>

class Snake
{
private:
	std::map<unsigned, unsigned> bodyCoords;

	unsigned x;
	unsigned y;
	unsigned lenght;
public:
	Snake(unsigned minLenght = 1) : lenght(minLenght) {
		this->x = 0;
		this->y = 0;
	}

	unsigned getX() const { return this->x; }
	unsigned getY() const { return this->y; }

	void setX(unsigned x) { this->x = x; }
	void setY(unsigned y) { this->y = y; }

	void setPosition(unsigned x, unsigned y) { this->x = x; this->y = y; }
	void updatePosition(char lastKeyPressed);
};


#pragma once

#include <iostream>

class Apple
{
private:
	static unsigned x;
	static unsigned y;

	static bool _isCollided;
public:
	static bool isCollided() { return _isCollided; }
	static void setCollide(bool isCollided) { _isCollided = isCollided; }

	static void setRandomPosition(unsigned startValue, unsigned endValue);
	static void setRandomPositionX(unsigned startValue, unsigned endValue);
	static void setRandomPositionY(unsigned startValue, unsigned endValue);

	static unsigned& getX() { return x; }
	static unsigned& getY() { return y; }

	static void setX(unsigned _x) { x = _x; }
	static void setY(unsigned _y) { y = _y; }
};


#include "Apple.h"

unsigned Apple::x = 2;
unsigned Apple::y = 2;

bool Apple::_isCollided = false;

void Apple::setRandomPosition(unsigned startValue, unsigned endValue)
{
	unsigned value = rand() % endValue + startValue;

	setX(value);
	setY(value);
}

void Apple::setRandomPositionX(unsigned startValue, unsigned endValue)
{
	unsigned value = rand() % endValue + startValue;
	setX(value);
}

void Apple::setRandomPositionY(unsigned startValue, unsigned endValue)
{
	unsigned value = rand() % endValue + startValue;
	setY(value);
}

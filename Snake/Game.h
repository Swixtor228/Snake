#pragma once

#include <iostream>
#include <Windows.h>
#include <algorithm>

#include "Apple.h"
#include "Field.h"
#include "Snake.h"

class Game
{
private:
	bool _isGameLost;
	char lastPressedButton;
	unsigned score;

	Field field;
	Snake snake;
public:
	Game(Field& field, Snake& snake) : field(field), snake(snake) {
		this->_isGameLost = false;
		this->lastPressedButton = NULL;
		this->score = 0;
	}

	unsigned checkOutOfField(unsigned minValue, unsigned maxValue, unsigned currentValue);

	void setGameLost(bool _isGameLost);
	bool isGameLost() const;

	void update();
	void updateKeyboard();

	void setLastKeyPressed(char key) { this->lastPressedButton = key; }
	char getLastKeyPressed() const { return this->lastPressedButton; }

	unsigned getScore() const { return this->score; }
	void addScore(unsigned _score) { this->score += _score; }
};


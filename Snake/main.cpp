#include <iostream>
#include <ctime>

#include "Game.h"
#include "Field.h"
#include "Snake.h"

int main()
{
	srand(time(NULL));

	Field field(20, 20);
	Snake snake;
	snake.setPosition(5, 10);

	Game game(field, snake);

	while (!game.isGameLost())
	{
		game.updateKeyboard();
		game.update();
	}

	return 0;
}
#include "Game.h"

void Game::setGameLost(bool _isGameLost)
{
	this->_isGameLost = _isGameLost;
}

bool Game::isGameLost() const
{
	return this->_isGameLost;
}

void Game::update()
{
	if (Apple::isCollided()) {
		Apple::setRandomPositionX(1, this->field.getWidth());
		Apple::setRandomPositionY(1, this->field.getHeight());
		Apple::setCollide(false);
	}

	this->snake.setX(this->checkOutOfField(0, this->field.getWidth(), this->snake.getX()));
	this->snake.setY(this->checkOutOfField(0, this->field.getHeight(), this->snake.getY()));

	for (unsigned i = 0; i < field.getHeight(); i++)
	{
		for (unsigned j = 0; j < field.getWidth(); j++)
		{
			if ((i == 0 || i == field.getHeight() - 1) ||
				(j == 0 || j == field.getWidth() - 1)) {
				std::cout << '$';
			}
			else {
				if (i == Apple::getY() && j == Apple::getX()) {
					std::cout << "O";
				} else if (i == this->snake.getY() && j == this->snake.getX()) {
					std::cout << "+";
				} else {
					std::cout << ' ';
				}

				if ((this->snake.getX() == Apple::getX()) && (this->snake.getY() == Apple::getY())) {
					Apple::setCollide(true);
					this->addScore(10);
					break;
				}
			}
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Score: " << this->getScore() << std::endl;

	system("cls");
}

unsigned Game::checkOutOfField(unsigned minValue, unsigned maxValue, unsigned currentValue)
{
	if (currentValue <= minValue) return maxValue;
	if (currentValue > maxValue) return minValue;
	return currentValue;
}

void Game::updateKeyboard()
{
	if (GetKeyState('W') < 0) {
		this->setLastKeyPressed('W');
	}

	if (GetKeyState('S') < 0) {
		this->setLastKeyPressed('S');
	}

	if (GetKeyState('A') < 0) {
		this->setLastKeyPressed('A');
	}

	if (GetKeyState('D') < 0) {
		this->setLastKeyPressed('D');
	}

	this->snake.updatePosition(this->getLastKeyPressed());
	std::cout << "Last key: " << this->getLastKeyPressed() << std::endl;
}
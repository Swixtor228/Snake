#pragma once

#include <iostream>

class Field
{
private:
	unsigned width;
	unsigned height;
public:
	Field(unsigned width, unsigned height) : width(width), height(height) {}

	unsigned getWidth() const { return this->width; }
	unsigned getHeight() const { return this->height; }
};


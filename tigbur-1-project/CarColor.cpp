#include "CarColor.h"

CarColor::CarColor(const Color& color)
{
	this->_color = color;
}

CarColor::CarColor()
{
	this->_color = WHITE;
}

Color CarColor::getColor() const
{
	return this->_color;
}


void CarColor::setColor(const Color& color)
{
	this->_color = color;
}

bool CarColor::operator==(const CarColor& other) const
{
	return this->_color == other.getColor();
}

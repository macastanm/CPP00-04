#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point &Point::operator=(Point src)
{
	if (this == &src)
		return *this;
	(Fixed) this->y = src.getY();
	(Fixed) this->x = src.getX();
	return *this;
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}
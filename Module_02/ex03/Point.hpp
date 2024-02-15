#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <cmath>

class	Point
{
private:
	Fixed const	x;
	Fixed const	y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	Point	&operator=(Point src);
	~Point();

	Fixed	getX() const;
	Fixed	getY() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif

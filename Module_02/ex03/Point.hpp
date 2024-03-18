/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:00:40 by macastan          #+#    #+#             */
/*   Updated: 2024/03/18 13:00:42 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

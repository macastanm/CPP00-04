/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:00:21 by macastan          #+#    #+#             */
/*   Updated: 2024/03/18 13:00:24 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	area_calculation(Point a, Point b, Point c)
{
	float	ax = a.getX().toFloat();
	float	ay = a.getY().toFloat();
	float	bx = b.getX().toFloat();
	float	by = b.getY().toFloat();
	float	cx = c.getX().toFloat();
	float	cy = c.getY().toFloat();
	float	result = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2;;
	result = fabs(result);
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float const area1 = area_calculation(a, b, point);
	float const	area2 = area_calculation(a, point, c);
	float const	area3 = area_calculation(point, b, c);
	float const	area_total = area_calculation(a, b, c);

	if (!area1 || !area2 || !area3)
	{
		std::cout << "The point is outside" << std::endl;
		return (false);
	}
	if ((area1 + area2 + area3) == area_total)
	{
		std::cout << "The point is inside" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "The point is outside" << std::endl;
		return (false);
	}
}

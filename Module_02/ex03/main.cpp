/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:23:15 by macastan          #+#    #+#             */
/*   Updated: 2024/01/29 11:23:16 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	const Point	a(1, 1);
	const Point	b(1, 4);
	const Point	c(5, 1);
	const Point	point1(3, 2);
	const Point	point2(1, 2);
	const Point	point3(5, 1);
	const Point	point4(6, 3);

	bsp(a, b, c, point1);
	bsp(a, b, c, point2);
	bsp(a, b, c, point3);
	bsp(a, b, c, point4);
	return(0);
}
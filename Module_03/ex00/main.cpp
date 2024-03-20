/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:38:31 by macastan          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:34 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Robot("Robot");
	ClapTrap	Robert("Robert");

	Robot.attack("Robert");
	Robert.takeDamage(0);
	Robert.attack("Robot");
	Robot.takeDamage(15);
	Robot.beRepaired(15);
}

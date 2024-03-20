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
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Robot("Robot");
	ScavTrap	Robert("Robert");

	Robot.attack("Robert");
	Robert.takeDamage(0);
	Robert.attack("Robot");
	Robot.takeDamage(20);
	Robot.beRepaired(15);
	Robert.guardGate();
}

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
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Robot("Robot");
	ScavTrap	Robert("Robert");
	FragTrap	Richard("Richard");

	Robot.attack("Robert");
	Robert.takeDamage(0);
	Robert.attack("Robot");
	Robert.attack("Richard");
	Robot.takeDamage(20);
	Richard.takeDamage(50);
	Robot.beRepaired(15);
	Richard.beRepaired(10);
	Richard.highFivesGuys();
	Robert.guardGate();
}

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
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap	Robot("Robot");
	ScavTrap	Robert("Robert");
	FragTrap	Richard("Richard");
	DiamondTrap	Roger("Roger");

	Robot.attack("Robert");
	Robert.takeDamage(0);
	Robert.attack("Robot");
	Robert.attack("Richard");
	Robot.takeDamage(20);
	Richard.takeDamage(20);
	Robot.beRepaired(15);
	Richard.beRepaired(10);
	Robert.guardGate();
	Richard.highFivesGuys();
	Roger.attack("Robert");
	Robert.takeDamage(30);
	Roger.whoAmI();
}

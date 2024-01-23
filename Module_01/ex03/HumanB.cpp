/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:03:57 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:03:59 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanB::HumanB(std::string n)
{
	name = n;
}
HumanB::~HumanB() {}

void	HumanB::setWeapon(std::string& name)
{
	weapon = name;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:03:40 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:03:42 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(std::string n, std::string w)
{
	&weapon = w;
	name = n;
}
HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon << std::endl;
}

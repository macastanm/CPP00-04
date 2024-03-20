/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:38:44 by macastan          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:46 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : health(10), energy(10), damage(10), name("undefined")
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : health(10), energy(10), damage(10), name(name)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
	if (this != &src)
	{
		this->name = src.name;
		this->health = src.health;
		this->damage = src.damage;
		this->energy = src.energy;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::beRepaired(unsigned int amount)
{

}

void	ClapTrap::takeDamage(unsigned int amount)
{

}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << name << " created." << std::endl;
	}
}
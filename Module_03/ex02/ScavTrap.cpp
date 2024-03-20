/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:36:21 by macastan          #+#    #+#             */
/*   Updated: 2024/03/20 13:36:23 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("undefined")
{
	std::cout << "ScavTrap " << "undefined" << " created." << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " created." << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src){
	if (this != &src)
	{
		this->name = src.name;
		this->health = src.health;
		this->energy = src.energy;
		this->damage = src.damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy <= 0)
	{
		std::cout << this->name << ": low energy." << std::endl;
		return ;
	}
	if (this->health <= 0)
	{
		std::cout << this->name << ": dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
	this->energy--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
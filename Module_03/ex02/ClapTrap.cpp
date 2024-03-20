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

ClapTrap::ClapTrap() : name("undefined"), health(10), energy(10), damage(0)
{
	std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), damage(0)
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
		this->energy = src.energy;
		this->damage = src.damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << this->name << " healed " << amount << " points of health." << std::endl;
	this->energy--;
	this->health += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health <= 0)
	{
		std::cout << this->name << ": already dead." << std::endl;
		return ;
	}
	if (amount >= this->health)
	{
		this->health = 0;
		std::cout << this->name << ": killed!" << std::endl;
		return ;
	}
	this->health -= amount;
	std::cout << this->name << " took " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
	this->energy--;
}
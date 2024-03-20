/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:08:09 by macastan          #+#    #+#             */
/*   Updated: 2024/03/20 14:08:12 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("undefined")
{
	std::cout << "FragTrap " << "undefined" << " created." << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " created." << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &src){
	if (this != &src)
	{
		this->name = src.name;
		this->health = src.health;
		this->energy = src.energy;
		this->damage = src.damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destroyed." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	{
		std::cout << "FragTrap " << this->name << " send a positive high five." << std::endl;
	}
}

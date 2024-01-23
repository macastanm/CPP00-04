/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:52 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:01:54 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " died!" << std::endl;
}

void	Zombie::zombieName(std::string n)
{
	this->name = n;
}

void	Zombie::announce(int num)
{
	std::cout << "[" << num << "]" << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

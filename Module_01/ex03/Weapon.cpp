/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:04:35 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:04:37 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon() {}

const std::string	Weapon::getType()
{
	return(type);
}

void	Weapon::setType(std::string name)
{
	type = name;
}

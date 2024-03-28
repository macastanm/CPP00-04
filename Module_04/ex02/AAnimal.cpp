/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:49:57 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:49:59 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("undefined")
{
	std::cout << "Animal: " << type << " created." << std::endl;
}

AAnimal::AAnimal(std::string name) : type(name)
{
	std::cout << "Animal: " << type << " created." << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

AAnimal&	AAnimal::operator=(const AAnimal &src){
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal: " << type << " destroyed." << std::endl;
}

std::string	AAnimal::getType() const
{
	return (type);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:42:46 by macastan          #+#    #+#             */
/*   Updated: 2024/03/26 15:42:47 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undefined")
{
	std::cout << "WrongAnimal: " << type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal: " << type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &src){
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: " << type << " destroyed." << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: " << type << " make no sound." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

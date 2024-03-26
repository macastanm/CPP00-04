/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:49:57 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:49:59 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("undefined")
{
	std::cout << "Animal: " << type << " created." << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal: " << type << " created." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal&	Animal::operator=(const Animal &src){
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal: " << type << " destroyed." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal: " << type << " make no sound." << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
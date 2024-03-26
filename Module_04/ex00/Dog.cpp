/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:22 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:29 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "Dog: " << type << " created." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog&	Dog::operator=(const Dog &src){
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog: " << type << " destroyed." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "             _=,~" << std::endl;
	std::cout << "          o_/6 /#\\     " << std::endl;
	std::cout << "- Auau!   \\__ |##/      " << std::endl;
	std::cout << "            ='|--\\         " << std::endl;
	std::cout << "              /   #'-." << std::endl;
	std::cout << "              \\#|_   _'-. /" << std::endl;
	std::cout << "              |/ \\_( # |' " << std::endl;
	std::cout << "             C/ ,--___/   " << std::endl << std::endl << std::endl;
}
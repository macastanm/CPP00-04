/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:42:24 by macastan          #+#    #+#             */
/*   Updated: 2024/03/26 15:42:26 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("cat")
{
	std::cout << "WrongCat: " << type << " created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat &src){
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: " << type << " destroyed." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << std::endl;
	std::cout << "　／l、" << std::endl;
	std::cout << "（ﾟ､ ｡ ７ - I am the wrong cat, and yes I can talk." << std::endl;
	std::cout << "　l、 ~ヽ" << std::endl;
	std::cout << "　じしf_, )ノ" << std::endl << std::endl << std::endl;
}

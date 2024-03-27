/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:36:28 by macastan          #+#    #+#             */
/*   Updated: 2024/03/27 14:36:30 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: " << "created." << std::endl;
	for(int i = 0; i < 100; i++)
	{
		ideas[i] = "a";
	}
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain&	Brain::operator=(const Brain &src){
	if (this != &src)
	{
		for(int i = 0; i < 100; i++)
		{
			ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: " << "destroyed." << std::endl;
}

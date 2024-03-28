/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:45:02 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:45:04 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal	*arrayOfAnimals[6];

	for (int i = 0; i < 3; i++)
	{
		std::cout << std::endl << "Animal: [" << i << "]" << std::endl;
		arrayOfAnimals[i] = new Cat();
	}
	for (int j = 3; j < 6; j++)
	{
		std::cout << std::endl << "Animal: [" << j << "]" << std::endl;
		arrayOfAnimals[j] = new Dog();
	}
	std::cout << "Animals created." << std::endl << std::endl;

	for (int x = 0; x < 3; x++)
	{
		std::cout << "Animal [" << x << "] make this sound:" << std::endl;
		arrayOfAnimals[x]->makeSound();
		std::cout << std::endl;
		std::cout << "Animal address: " << arrayOfAnimals[x] << std::endl;
		Cat*	catPtr = (Cat *)arrayOfAnimals[x];
		std::cout << "Brain address: " << catPtr->getBrain() << std::endl << std::endl;
	}
	for (int y = 3; y < 6; y++)
	{
		std::cout << "Animal [" << y << "] make this sound:" << std::endl;
		arrayOfAnimals[y]->makeSound();
		std::cout << std::endl;
		std::cout << "Animal address: " << arrayOfAnimals[y] << std::endl;
		Dog*	dogPtr = (Dog *)arrayOfAnimals[y];
		std::cout << "Brain address: " << dogPtr->getBrain() << std::endl << std::endl;
	}

	for (int z = 0; z < 6; z++)
	{
		std::cout << "Animal [" << z << "] is dying." << std::endl;
		delete arrayOfAnimals[z];
		std::cout << std::endl;
	}
	return 0;
}
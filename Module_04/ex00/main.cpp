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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Subject tests" << std::endl << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl << std::endl;
	std::cout << "Wrong tests" << std::endl << std::endl;

	const WrongAnimal *met = new WrongAnimal();
	//const Animal *a = new Dog();
	const WrongAnimal *b = new WrongCat();
	std::cout << b->getType() << " " << std::endl;
	//std::cout << a->getType() << " " << std::endl;
	//a->makeSound(); //will output the cat sound!
	b->makeSound();
	met->makeSound();

	delete met;
	//delete a;
	delete b;
}
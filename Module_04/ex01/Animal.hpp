/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:04 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:06 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(std::string name);
	Animal(const Animal& copy);
	Animal &operator = (const Animal& src);
	virtual ~Animal();

	virtual void	makeSound(void) const;
	std::string	getType(void) const;
};

#endif
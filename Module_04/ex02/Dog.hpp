/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:33 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:35 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
private:
	Brain*	brain;
public:
	Dog();
	Dog(const Dog& copy);
	Dog &operator = (const Dog& src);
	~Dog();

	void	makeSound(void) const;
	Brain*	getBrain(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:04 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:06 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
protected:
	std::string	type;

public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(const AAnimal& copy);
	AAnimal &operator = (const AAnimal& src);
	virtual ~AAnimal();

	virtual void	makeSound(void) const = 0;
	std::string	getType(void) const;
};

#endif
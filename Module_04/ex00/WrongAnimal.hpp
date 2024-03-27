/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:42:40 by macastan          #+#    #+#             */
/*   Updated: 2024/03/26 15:42:42 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal &operator = (const WrongAnimal& src);
	virtual ~WrongAnimal();

	virtual void	makeSound(void) const;
	std::string	getType(void) const;
};

#endif

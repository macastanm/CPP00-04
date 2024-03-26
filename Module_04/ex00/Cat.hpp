/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:47 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:49 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : virtual public Animal
{
public:
	Cat();
	Cat(const Cat& copy);
	Cat &operator = (const Cat& src);
	~Cat();

	void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:42:31 by macastan          #+#    #+#             */
/*   Updated: 2024/03/26 15:42:33 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	WrongCat &operator = (const WrongCat& src);
	~WrongCat();

	void	makeSound(void) const;
};

#endif

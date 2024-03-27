/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:36:33 by macastan          #+#    #+#             */
/*   Updated: 2024/03/27 14:36:35 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class	Brain
{
public:
	Brain();
	Brain(const Brain& copy);
	Brain &operator = (const Brain& src);
	~Brain();

	std::string	ideas[100];
};

#endif

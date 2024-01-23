/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:03:48 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:03:50 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
private:
	Weapon& weapon;
	std::string	name;

public:
	HumanA(std::string n, Weapon& w);
	~HumanA();
	void	attack();
};

#endif

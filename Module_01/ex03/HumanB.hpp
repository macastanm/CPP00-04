/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:04:13 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:04:16 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	Weapon*	weapon;
	std::string	name;

public:
	HumanB(std::string n);
	~HumanB();
	void	setWeapon(Weapon& w);
	void	attack();
};

#endif

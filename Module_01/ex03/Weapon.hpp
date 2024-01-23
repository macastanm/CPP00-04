/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:04:45 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:04:51 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string name);
	~Weapon();
	void	setType(std::string name);
	const std::string	getType();
};

#endif

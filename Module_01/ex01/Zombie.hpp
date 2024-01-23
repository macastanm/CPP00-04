/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:59 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:02:01 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Zombie
{
private:
	std::string	name;

public:
	Zombie();
	~Zombie();
	void	zombieName(std::string n);
	void	announce(int num);
};

Zombie*	zombieHorde( int N, std::string name );

#endif

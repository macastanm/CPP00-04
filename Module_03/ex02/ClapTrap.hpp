/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:38:51 by macastan          #+#    #+#             */
/*   Updated: 2024/03/19 13:38:53 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
protected:
    std::string	name;
    unsigned int	health;
    unsigned int	energy;
    unsigned int	damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator = (const ClapTrap& src);
	~ClapTrap();

    void	attack(const std::string& target);
    void	takeDamage(unsigned int amount);
    void	beRepaired(unsigned int amount);
};

#endif
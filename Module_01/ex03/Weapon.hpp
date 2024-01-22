#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "HumanA.hpp"
# include "HumanB.hpp"

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
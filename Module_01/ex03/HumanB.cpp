#include "Weapon.hpp"

HumanB::HumanB(std::string n)
{
	weapon = 0;
	name = n;
}
HumanB::~HumanB() {}

void	HumanB::setWeapon(std::string& name)
{
	weapon = name;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon << std::endl;
}
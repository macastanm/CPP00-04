#include "Weapon.hpp"

HumanA::HumanA(std::string n, std::string w)
{
	&weapon = w;
	name = n;
}
HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon << std::endl;
}
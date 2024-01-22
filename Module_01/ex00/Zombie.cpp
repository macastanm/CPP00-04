#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
	name = n;
}

Zombie::~Zombie()
{
	std::cout << name << " died!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName()
{
	return (name);
}
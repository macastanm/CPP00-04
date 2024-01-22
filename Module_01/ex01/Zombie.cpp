#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " died!" << std::endl;
}

void	Zombie::zombieName(std::string n)
{
	this->name = n;
}

void	Zombie::announce(int num)
{
	std::cout << "[" << num << "]" << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
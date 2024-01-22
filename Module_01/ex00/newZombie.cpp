#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *people = new Zombie(name);
	return (people);
}

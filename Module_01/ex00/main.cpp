#include "Zombie.hpp"

int	main(int argc, char** argv)
{
	(void)argv;
	std::string	zombie;
	std::string	chump;

	if (argc == 1)
	{
		std::cout << "Give your zombie a name: " << std::endl;
		while(zombie.empty())
		{
			if (!getline(std::cin, zombie))
			{
				std::cout << "Error, try again with a valid zombie!" << std::endl;
				return (1);
			}
		}
		std::cout << "Give your chump a name: " << std::endl;
		while(chump.empty())
		{
			if (!getline(std::cin, chump))
			{
				std::cout << "Error, try again with a valid chump!" << std::endl;
				return (1);
			}
		}
		Zombie *newz;
		newz = newZombie(zombie);
		std::cout << "My name is " << newz->getName() << " and I can be used outside of the function." << std::endl;
		randomChump(chump);
		delete newz;
	}
	else
	{
		std::cout << "Wrong arguments, try again :)" << std::endl;
	}
	return (0);
}
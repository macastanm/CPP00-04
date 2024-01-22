#include "Zombie.hpp"

int	checkDigit(std::string command)
{
	for (size_t i = 0; i < command.size(); i++)
	{
		if (!isdigit(command[i]))
		{
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char** argv)
{
	(void)argv;
	std::string	name;
	std::string	num;
	int	number = 0;

	if (argc == 1)
	{
		std::cout << "How many zombies do you want?" << std::endl;
		while(num.empty())
		{
			if (!getline(std::cin, num))
			{
				std::cout << "Error, try again with a valid number!" << std::endl;
				return (1);
			}
			if (checkDigit(num) == 1 || atoi(num.c_str()) < 0)
			{
				std::cout << "Error, try again with a valid number!" << std::endl;
				return (1);
			}
			number = atoi(num.c_str());
		}
		std::cout << "Give your zombies a name: " << std::endl;
		while(name.empty())
		{
			if (!getline(std::cin, name))
			{
				std::cout << "Error, try again with a valid name!" << std::endl;
				return (1);
			}
		}
		Zombie *newz;
		newz = zombieHorde(number, name);
		for (int i = 0; i < number; i++)
		{
			newz[i].announce(i);
		}
		delete [] newz;
	}
	else
	{
		std::cout << "Wrong arguments, try again :)" << std::endl;
	}
	return (0);
}
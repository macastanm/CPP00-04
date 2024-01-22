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

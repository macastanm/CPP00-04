#ifndef HUMANB_HPP
# define HUMANB_HPP

class	HumanB
{
private:
	std::string*	weapon;
	std::string	name;

public:
	HumanB(std::string n);
	~HumanB();
	void	setWeapon(std::string name);
	void	attack();
};

#endif
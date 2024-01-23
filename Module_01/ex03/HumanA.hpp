#ifndef HUMANA_HPP
# define HUMANA_HPP

class	HumanA
{
private:
	std::string	&weapon;
	std::string	name;

public:
	HumanA(std::string n, std::string& w);
	~HumanA();
	void	attack();
};

#endif
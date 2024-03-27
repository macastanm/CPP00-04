/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:50:42 by macastan          #+#    #+#             */
/*   Updated: 2024/03/25 11:50:44 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout << "Cat: " << type << " created." << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	brain = new Brain(*copy.brain);
}

Cat&	Cat::operator=(const Cat &src){
	if (this != &src)
	{
		this->type = src.type;
		brain = new Brain(*src.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: " << type << " destroyed." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << std::endl;
	std::cout << "　／l、" << std::endl;
	std::cout << "（ﾟ､ ｡ ７ - Meow?" << std::endl;
	std::cout << "　l、 ~ヽ" << std::endl;
	std::cout << "　じしf_, )ノ" << std::endl << std::endl << std::endl;
}

/*  "    /\___/\ "
    "   /       \ "
	"  l  u   u  l"
	"--l----*----l--"
	"   \   w   /     - Meow!"
	"    ======"
	"    /       \ "
	"   l        l\ \ "
    "   l        l/ / "
	"   l  l l   l /"
	"   \ ml lm /_/"

      ,_     _
      |\\_,-/|
      / _  _ |    ,--.
     (  @  @ )   / ,-'
      \  _T_/-._( (
      /         `. \
     |         _  \ |
      \ \ ,  /      |
       || |-_\__   /
      ((_/`(____,-'


 */
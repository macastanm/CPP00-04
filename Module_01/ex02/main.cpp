/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:02:33 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 11:02:35 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char** argv)
{
	(void)argv;

	if (argc == 1)
	{
		std::string	str = "HI THIS IS BRAIN";
		std::string	*stringPTR = &str;
		std::string	&stringREF = str;

		std::cout << "The memory address of the string variable is: " << &str << std::endl;
		std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
		std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;
		std::cout << "The value of the string variable is: " << str << std::endl;
		std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
		std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;
	}
	else
	{
		std::cout << "Wrong arguments, try again :)" << std::endl;
	}
	return (0);
}

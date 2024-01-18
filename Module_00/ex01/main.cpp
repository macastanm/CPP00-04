/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:45:52 by macastan          #+#    #+#             */
/*   Updated: 2024/01/17 10:45:55 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	Phonebook	phonebook;
	std::string	command;
	int			size = 0;
	int			position = 0;

	if (argc == 1)
	{
		while (1)
		{
			std::cout << "Chose your command: " << std::endl;
			if (!getline(std::cin, command))
			{
				std::cout << "Error, try again!" << std::endl;
				exit(1);
			}
			if (position == 8)
			{
				position = 0;
			}
			if (command == "ADD")
			{
				system("clear");
				std::cout << "Adding a new contact:" << std::endl << std::endl;
				phonebook.addContact(position);
				if (size < 8)
					size++;
				position++;
			}
			else if (command == "SEARCH")
			{
				system("clear");
				if (size == 0)
				{
					std::cout << "There is no contact yet. Try ADD first!" << std::endl << std::endl;
				}
				else
				{
					phonebook.displayContact(size);
					phonebook.searchDisplay(size);
				}
			}
			else if (command == "EXIT")
			{
				system("clear");
				std::cout << "Bye!" << std::endl;
				break ;
			}
			else
			{
				system("clear");
				std::cout << "Wrong command. Try again!" << std::endl << std::endl;
			}
		}
	}
	return (0);
}

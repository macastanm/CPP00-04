/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:07:17 by macastan          #+#    #+#             */
/*   Updated: 2024/01/15 15:07:18 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::addContact(int position)
{
	info[position].putContact();
}

void	Phonebook::handleSpaces(std::string info)
{
	if (info.size() > 10)
	{
		info.resize(9);
		info.append(".");
		std::cout << info << "|";
	}
	else
	{
		int	i = 0;
		int j = info.size();
		std::cout << info;
		while (i < (10 - j))
		{
			std::cout << " ";
			i++;
		}
		std::cout << "|";
	}
}

void	Phonebook::displayContact(int size)
{
	int	i = 0;

	std::cout << "Index     |First Name|Last Name |Nickname  |" << std::endl;
	while (i < size)
	{
		std::cout << (i + 1) << "         " << "|";
		handleSpaces(info[i].getFirstName());
		handleSpaces(info[i].getLastName());
		handleSpaces(info[i].getNickName());
		std::cout << std::endl;
		i++;
	}
}

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

void	Phonebook::searchDisplay(int size)
{
	std::string	command;
	int			i = 0;

	while (1)
	{
		//std::cout << "Write BACK to go to the menu or" << std::endl;
		std::cout << "Chose an index to expand the contact information: " << std::endl;
		getline(std::cin, command);
		if (checkDigit(command) == 1)
		{
			system("clear");
			std::cout << "Wrong index, please check your options." << std::endl << std::endl;
			displayContact(size);
			std::cout << std::endl;
			continue;
		}
		i = atoi(command.c_str());
		if (i <= 0 || i > size)
		{
			system("clear");
			std::cout << "Wrong index, please check your options." << std::endl << std::endl;
			displayContact(size);
			std::cout << std::endl;
			continue;
		}
		else
		{
			i--;
			system("clear");
			std::cout << std::endl;
			std::cout << "First Name:     " << info[i].getFirstName() << std::endl;
			std::cout << "Last Name:      " << info[i].getLastName() << std::endl;
			std::cout << "Nickname:       " << info[i].getNickName() << std::endl;
			std::cout << "Phone Number:   " << info[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << info[i].getDarkestSecret() << std::endl;
			std::cout << std::endl;
			break ;
		}
	}
}
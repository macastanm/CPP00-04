/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:08:01 by macastan          #+#    #+#             */
/*   Updated: 2024/01/15 15:08:03 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::getFirstName()
{
	return (firstName);
}

std::string	Contact::getLastName()
{
	return (lastName);
}

std::string	Contact::getNickName()
{
	return (nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (darkestSecret);
}

void	Contact::putContact()
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	num;
	std::string	dark;

	std::cout << "First name: " << std::endl;
	while(first.empty())
	{
		if (!getline(std::cin, first))
		{
			std::cout << "Error, try again with a valid contact!" << std::endl;
			exit(1);
		}
	}
	firstName = first;
	std::cout << "Last name: " << std::endl;
	while(last.empty())
	{
		if (!getline(std::cin, last))
		{
			std::cout << "Error, try again with a valid contact!" << std::endl;
			exit(1);
		}
	}
	lastName = last;
	std::cout << "Nickname: " << std::endl;
	while(nick.empty())
	{
		if (!getline(std::cin, nick))
		{
			std::cout << "Error, try again with a valid contact!" << std::endl;
			exit(1);
		}
	}
	nickName = nick;
	std::cout << "Phone number: " << std::endl;
	while(num.empty())
	{
		if (!getline(std::cin, num))
		{
			std::cout << "Error, try again with a valid contact!" << std::endl;
			exit(1);
		}
	}
	phoneNumber = num;
	std::cout << "darkest secret: " << std::endl;
	while(dark.empty())
	{
		if (!getline(std::cin, dark))
		{
			std::cout << "Error, try again with a valid contact!" << std::endl;
			exit(1);
		}
	}
	darkestSecret = dark;
	std::cout << "Contact saved!" << std::endl << std::endl;
}

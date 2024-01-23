/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:57:48 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 16:57:50 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error, try again with ./harlFilter <HARL>!" << std::endl;
		return (1);
	}
	else
	{
		Harl	harlFilter;
		std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int	i;
		for(i = 0; i < 4; i++)
		{
			if(levels[i] == argv[1])
				break;
		}
		switch (i)
		{
			case 0:
			{
				harlFilter.complain("DEBUG");
				harlFilter.complain("INFO");
				harlFilter.complain("WARNING");
				harlFilter.complain("ERROR");
				break;
			}
			case 1:
			{
				harlFilter.complain("INFO");
				harlFilter.complain("WARNING");
				harlFilter.complain("ERROR");
				break;
			}
			case 2:
			{
				harlFilter.complain("WARNING");
				harlFilter.complain("ERROR");
				break;
			}
			case 3:
			{
				harlFilter.complain("ERROR");
				break;
			}
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	return (0);
}
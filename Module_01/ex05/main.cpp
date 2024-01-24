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

int	main(void)
{
	Harl	harl;
	std::string	level;

	std::cout << "Choose one Harl { DEBUG, INFO, WARNING, ERROR } " << std::endl << std::endl;
	while(level.empty())
	{
		if (!getline(std::cin, level))
		{
			std::cout << "Error, try again!" << std::endl;
			return (1);
		}
	}
	harl.complain(level);
	return (0);
}
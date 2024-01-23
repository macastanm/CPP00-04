/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:30:09 by macastan          #+#    #+#             */
/*   Updated: 2024/01/23 12:30:14 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <fstream>
# include <string>
# include <cstdlib>

std::string	changeLine(std::string l, std::string s1, std::string s2)
{
	size_t	i = 0;
	while (1)
	{
		i = l.find(s1);
		if (i == std::string::npos)
			break;
		l.erase(i, s1.length());
		l.insert(i, s2);
		i += s2.length();
	}
	return (l);
}

int	main(int argc, char**  argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong arguments! Try: ./sedIsForLosers <filename> s1 s2" << std::endl;
	}
	else
	{
		std::string	fileName = argv[1];
		std::string	fileNameR = argv[1];
		fileNameR.append(".replace");
		std::ifstream	fileOG;
		std::ofstream	fileREP;

		fileOG.open(fileName.c_str());
		if (!fileOG.is_open())
		{
			std::cout << "Something is wrong with the original file." << std::endl;
			return (1);
		}
		fileREP.open(fileNameR.c_str());
		if (!fileREP.is_open())
		{
			std::cout << "Something is wrong with the replace file." << std::endl;
			return (1);
		}
		std::string	line;
		while (getline(fileOG, line))
		{
			line = changeLine(line, argv[2], argv[3]);
			fileREP << line << std::endl;
		}
		fileOG.close();
		fileREP.close();
	}
	return (0);
}

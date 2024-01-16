/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:38:18 by macastan          #+#    #+#             */
/*   Updated: 2024/01/15 11:38:24 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main(int argc, char**argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int	i = 1;
		int	j;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				char	c = toupper(argv[i][j]);
				cout << c;
				j++;
			}
			if (i != (argc - 1))
				cout << " ";
			i++;
		}
	}
	cout << endl;
	return 0;
}

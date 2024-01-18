/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:07:11 by macastan          #+#    #+#             */
/*   Updated: 2024/01/15 15:07:13 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"
# include <cstdlib>
# include <iomanip>

class	Phonebook
{
private:
	Contact	info[8];

public:
	void	addContact(int position);
	void	displayContact(int size);
	void	handleSpaces(std::string info);
	void	searchDisplay(int size);
};

#endif
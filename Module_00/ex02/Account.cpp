/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:46:28 by macastan          #+#    #+#             */
/*   Updated: 2024/01/17 10:46:30 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

static void	Account::_displayTimestamp()
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	std::cout << "[";
	std::cout << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_hour);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_min);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_sec);
	std::cout << "]";
}

//void	Account::makeDeposit( int deposit )

//bool	Account::makeWithdrawal( int withdrawal )

//int		Account::checkAmount( void ) const

//void	Account::displayStatus( void ) const

//static void	Account::displayAccountsInfos()

static int	Account::getNbAccounts()
{
	return (_nbAccounts);
}
static int	Account::getTotalAmount()
{
	return (_totalAmount);
}
static int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}
static int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:22:56 by macastan          #+#    #+#             */
/*   Updated: 2024/01/29 11:23:01 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract_bits = 8;

Fixed::Fixed() : _fp_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fp_value = num * (1 << _fract_bits);
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fp_value = num * (1 << _fract_bits);
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	if (this != &src)
	{
		this->_fp_value = src.getRawBits();
	}
	//std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fp_value = raw;
	//std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::toInt() const
{
	return (_fp_value / (1 << _fract_bits));
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(_fp_value) / (1 << _fract_bits));
}

std::ostream&	operator<<(std::ostream& output, const Fixed& copy) {
	output << copy.toFloat();
	return (output);
}

bool	Fixed::operator>(const Fixed &num) const
{
	if (this->toFloat() > num.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &num) const
{
	if (this->toFloat() < num.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &num) const
{
	if (this->toFloat() >= num.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &num) const
{
	if (this->toFloat() <= num.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &num) const
{
	if (this->toFloat() == num.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &num) const
{
	if (this->toFloat() != num.toFloat())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &num) const
{
	return (this->toFloat() + num.toFloat());
}

Fixed	Fixed::operator-(const Fixed &num) const
{
	return (this->toFloat() - num.toFloat());
}

Fixed	Fixed::operator*(const Fixed &num) const
{
	return (this->toFloat() * num.toFloat());
}

Fixed	Fixed::operator/(const Fixed &num) const
{
	return (this->toFloat() / num.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	_fp_value++;
	return(temp);
}

Fixed&	Fixed::operator++()
{
	++_fp_value;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	_fp_value--;
	return(temp);
}

Fixed&	Fixed::operator--()
{
	--_fp_value;
	return(*this);
}

Fixed&	Fixed::min(Fixed &num_one, Fixed &num_two)
{
	if (num_one.toFloat() < num_two.toFloat())
		return (num_one);
	return (num_two);
}

const Fixed&	Fixed::min(const Fixed &num_one, const Fixed &num_two)
{
	if (num_one.toFloat() < num_two.toFloat())
		return (num_one);
	return (num_two);
}

Fixed&	Fixed::max(Fixed &num_one, Fixed &num_two)
{
	if (num_one.toFloat() > num_two.toFloat())
		return (num_one);
	return (num_two);
}

const Fixed&	Fixed::max(const Fixed &num_one, const Fixed &num_two)
{
	if (num_one.toFloat() > num_two.toFloat())
		return (num_one);
	return (num_two);
}
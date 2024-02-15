/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macastan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:23:06 by macastan          #+#    #+#             */
/*   Updated: 2024/01/29 11:23:09 by macastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

class	Fixed
{
private:
	int	_fp_value;
	static const int	_fract_bits;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& copy);
	Fixed &operator = (const Fixed& src);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	bool	operator>(const Fixed &num) const;
	bool	operator<(const Fixed &num) const;
	bool	operator>=(const Fixed &num) const;
	bool	operator<=(const Fixed &num) const;
	bool	operator==(const Fixed &num) const;
	bool	operator!=(const Fixed &num) const;

	Fixed	operator+(const Fixed &num) const;
	Fixed	operator-(const Fixed &num) const;
	Fixed	operator*(const Fixed &num) const;
	Fixed	operator/(const Fixed &num) const;

	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();

	static Fixed&			min(Fixed& num_one, Fixed& num_two);
	static const Fixed&		min(const Fixed& num_one, const Fixed& num_two);
	static Fixed&			max(Fixed& num_one, Fixed& num_two);
	static const Fixed&		max(const Fixed& num_one, const Fixed& num_two);
};

std::ostream& operator<<(std::ostream& output, const Fixed& copy);

#endif

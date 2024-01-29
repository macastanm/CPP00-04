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
	Fixed(const Fixed& copy);
	Fixed &operator = (const Fixed& src);
	~Fixed();
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

#endif

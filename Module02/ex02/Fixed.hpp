/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:00 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 21:12:46 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
	Fixed(void);
	Fixed(Fixed const &copy);
	~Fixed(void);

	Fixed(int const value);
	Fixed(float const value);

	float toFloat( void ) const;
	int toInt( void ) const;

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed &operator=(Fixed const &rhs);
	bool operator>(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);

	Fixed operator+(Fixed const &rhs);
	Fixed operator-(Fixed const &rhs);
	Fixed operator*(Fixed const &rhs);
	Fixed operator/(Fixed const &rhs);

	// static float min(Fixed &a, Fixed &b);
	// static float min(Fixed const &a, Fixed const &b);

	// static float max(Fixed &a, Fixed &b);
	// static float max(Fixed const &a, Fixed const &b);


	private:
	int	_nb;
	static int const _bits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
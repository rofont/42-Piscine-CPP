/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:00 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/10 13:48:33 by rofontai         ###   ########.fr       */
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
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	Fixed operator++(int);
	Fixed operator++(void);
	Fixed operator--(int);
	Fixed operator--(void);

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);


	private:
	int	_nb;
	static int const _bits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
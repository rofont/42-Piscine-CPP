/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:00 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 14:50:42 by rofontai         ###   ########.fr       */
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
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed &operator=(Fixed const &rhs);
	

	private:
	int	_nb;
	static int const _bits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
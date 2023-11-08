/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:39:00 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 11:30:40 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
	Fixed(void);
	Fixed(Fixed const &copy);
	~Fixed(void);

	Fixed &operator=(Fixed const &rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	private:
	int	_nb;
	static int const _bits;
};

#endif
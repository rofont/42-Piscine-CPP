/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 11:24:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::cout;
using std::endl;

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _nb(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(Fixed const &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	cout << "Assignation operator called" << endl;
	this->_nb = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	cout << "getRawBits called" << endl;
	return _nb;
}

void Fixed::setRawBits( int const raw )
{
	_nb = raw;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:38 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 21:27:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(100);
	Fixed c;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//comparator
	if (c > a)
		c = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

//operation
	std::cout << "-----------------------------" << std::endl;

	a = 10;
	c = 5;
	std::cout << "a " << "+ " << "b = " << a + c << std::endl;
	std::cout << "a " << "* " << "b = " << a * c << std::endl;
	std::cout << "a " << "- " << "b = " << a - c << std::endl;
	std::cout << "a " << "/ " << "b = " << a / c << std::endl;

	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;


	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
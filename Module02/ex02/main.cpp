/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:38 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/09 09:51:40 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(10);
	Fixed b(10.5f);
	Fixed const c(5);
	Fixed const d(4.5f);

//comparator
	if (c > a)
		b = a;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

//operation
	std::cout << "-----------------------------" << std::endl;

	std::cout << "a " << "+ " << "c = " << a + c << std::endl;
	std::cout << "a " << "* " << "c = " << a * c << std::endl;
	std::cout << "a " << "- " << "c = " << a - c << std::endl;
	std::cout << "a " << "/ " << "c = " << a / c << std::endl;

//incrementation

	std::cout << "-----------------------------" << std::endl;

	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

//min-max

	std::cout << "-----------------------------" << std::endl;

	std::cout << Fixed::min( c, d ) << std::endl;

	return 0;
}
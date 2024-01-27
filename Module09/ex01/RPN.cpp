/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:40:08 by romain            #+#    #+#             */
/*   Updated: 2024/01/26 21:55:35 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN( RPN const &copy) {
	*this = copy;
}

RPN::~RPN( void ) {}

RPN &RPN::operator=( RPN const &src ) {
	if ( this != &src )
		this->_input = src._input;
	return *this;
}

RPN::RPN( std::string input ) : _input(input) {}

// METHODE --------------------------------------------------------------------

void	RPN::printInput( void ) {
	std::cout << "input = " << this->_input << "!"<< std::endl;
}

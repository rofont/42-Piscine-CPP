/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:40:08 by romain            #+#    #+#             */
/*   Updated: 2024/01/28 10:05:22 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN( RPN const &copy ) {
	*this = copy;
}

RPN::~RPN( void ) {
	while( _stock.size() > 0 )
		_stock.pop();
}

RPN &RPN::operator=( RPN const &src ) {
	if ( this != &src ) {
		this->_input = src._input;
		this->_stock = src._stock;
	}
	return *this;
}

RPN::RPN( std::string input ) : _input( input ) {
	// this->printInput();
	this->parsInput();
	this->fillStack();
}

// METHODE --------------------------------------------------------------------
/**
 * Print the string passed as parameter
*/
void	RPN::printInput( void ) {
	std::cout << "input = " << this->_input << std::endl;
}

/**
 * Pars the string
*/
void	RPN::parsInput( void ) {
	int i = 0;
	size_t  found = _input.find_first_not_of( "01234456789 +-/*" );

	while ( _input[++i] ) {
		if ( (i % 2 != 0 && _input[i] != ' ') || found != std::string::npos )
			throw std::runtime_error( "Input is invalid. Please enter a RPN equation correct" );
	}
}

/**
 * check if it's an operant
 * @param c a reference to a char operator
*/
void	RPN::doOper( char const &c ) {

	if ( this->_stock.size() < 2 )
		throw std::runtime_error( "Syntax of operation is false" );

	int res = 0;
	int nb1 = _stock.top();
	_stock.pop();
	int nb2 = _stock.top();
	_stock.pop();

	if ( c == '+' )
		res = nb2 + nb1;
	else if ( c == '-' )
		res = nb2 - nb1;
	else if ( c == '*' )
		res = nb2 * nb1;
	else if ( c == '/' )
		res = nb2 / nb1;
	else
		throw std::runtime_error( "Syntax of operation is false" );
	_stock.push(res);
}

/**
 * fills the stack and executes the operation.
*/
void	RPN::fillStack( void ) {
	std::string temp = this->_input;
	int i = -1;

	temp.erase( std::remove(temp.begin(), temp.end(), ' '), temp.end() );
	try {
		while ( temp[++i] ) {
			if ( temp.size() > 0 && isdigit(temp[i]) )
				_stock.push( temp[i] - 48 );
			else {
				this->doOper( temp[i] );
				// std::cout << "top of stack = " << this->_stock.top() << std::endl;
			}
		}
		std::cout << _stock.top() << std::endl;
		// std::cout << "RPN = " << _stock.top() << std::endl;
	}
	catch ( std::exception &e ) {
		throw ;
	}
}

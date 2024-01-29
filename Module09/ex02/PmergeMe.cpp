/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:51:54 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/29 14:47:18 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &copy ) {
	*this = copy;
}
PmergeMe::~PmergeMe( void ) {}

PmergeMe &PmergeMe::operator=( PmergeMe const &src ) {
	if ( this != &src )
		this->_list = src._list;
	return *this;
}

// METHODES -------------------------------------------------------------------

void	PmergeMe::printVector( void ) const {
	for( size_t i = 0; i < this->_list.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT << this->_list[i] << std::endl;
}

void	PmergeMe::parsInput( int ac, char **av ) {
	long nb1, nb2;
	std::string temp;

	if ( ac < 3 )
		throw std::runtime_error( RED "Error: not enough paramaters" WHT );
	for ( int i = 1; i < ac; i++ ) {
		temp = av[i];
		size_t found = temp.find_first_not_of( "0123456789" );
		if ( found != std::string::npos )
			throw std::runtime_error( RED "Error: a symbol or letter has been found" WHT );
		for ( int j = (i + 1); j < ac; j++ ) {
			nb1 = std::stol( av[i] );
			nb2 = std::stol( av[j] );
			if ( nb1 > INT_MAX || nb2 > INT_MAX )
				throw std::runtime_error( RED "Error: an integer out of range has been found" WHT );
			else if ( nb1 == nb2 )
				throw std::runtime_error( RED "Error: a duplicate number has been found" WHT );
		}
	}
}

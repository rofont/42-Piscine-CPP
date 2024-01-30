/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:51:54 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/30 15:40:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &copy ) {
	*this = copy;
}
PmergeMe::~PmergeMe( void ) {}

PmergeMe &PmergeMe::operator=( PmergeMe const &src ) {
	if ( this != &src ) {
		this->_vector = src._vector;
		this->_vectorPair = src._vectorPair;
	}
	return *this;
}

// METHODES -------------------------------------------------------------------
/**
 * Print a simple vector
*/
void	PmergeMe::printVector( void ) const {
	for( size_t i = 0; i < this->_vector.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT << this->_vector[i] << std::endl;
}

/**
 * Print a vector with pair
*/
void	PmergeMe::printVectorPair( void ) const {
	for( size_t i = 0; i < this->_vectorPair.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT <<
		"first = "<< this->_vectorPair[i].first << ", second = " << this->_vectorPair[i].second << std::endl;
}

/**
 * Pars Input. If not enough parameters, not a digit, out of range or a duplicate number
 * throw an exception
 * @param ac number of arguments
 * @param av list of arguments
*/
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

/**
 * Fill the vector of int pairs and sort the pairs.
 * @param ac number of arguments
 * @param av list of arguments
*/
void	PmergeMe::fillVectorPair( int ac, char **av ) {
	int nb1, nb2;
	for ( int i = 1; i < ac; i += 2 ) {
		nb1 = std::stoi( av[i] );
		if ( i == ac - 1 ) {
			this->_vectorPair.push_back( std::make_pair(nb1, EMPTY) );
			return ;
		}
		nb2 = std::stoi( av[i + 1] );
		if ( nb1 > nb2 )
			std::swap( nb1, nb2 );
		this->_vectorPair.push_back( std::make_pair(nb1, nb2) );
	}
}

/**
 * Function static that compare the second element of pairs. return true if pair1 is shorter than pair2
 * @param pair1 const value reference of one pair
 * @param pair2 const value reference of second pair
 * @param return true if pair1 is shorter than pair2
 * @param
*/
static bool	compareSecondElement( IntPair const &pair1, IntPair const &pair2 ) {
	if ( pair1.second == EMPTY || pair2.second == EMPTY )
		return false;
	if ( pair1.second < pair2.second )
		return true;
	return false;
}

/**
 * Sort the vector with his second element of pairs
*/
void	PmergeMe::SortSecondElement( void ) {
	std::sort( this->_vectorPair.begin(), this->_vectorPair.end(), compareSecondElement );
}

/**
 * Manage Input. Parses, Sorts and Orders the input
 * @param ac number of arguments
 * @param av list of arguments
*/
void	PmergeMe::manageInput( int ac, char **av ) {
	this->parsInput( ac, av );
	this->fillVectorPair( ac, av );
	if  ( DEBUG ) {
		std::cout <<YEL "PRINT AFTER FILL VECTOR ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	}
	this->SortSecondElement();
	if  ( DEBUG ) {
		std::cout << std::endl <<YEL "PRINT AFTER SORT SECOND ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	}
}
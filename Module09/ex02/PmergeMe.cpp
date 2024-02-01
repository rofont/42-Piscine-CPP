/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:51:54 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/31 16:48:58 by romain           ###   ########.fr       */
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
		this->_vectorPend = src._vectorPend;
		this->_vectorMain = src._vectorMain;
		this->_vectorPair = src._vectorPair;
	}
	return *this;
}

// PRINTS ---------------------------------------------------------------------
/**
 * Print input before use the Ford_Johnson Algorithm.
*/
void	PmergeMe::printInputBefore( int ac, char **av ) {
	std::cout << "Before: ";
	int i = 1;
	for (; i < ac - 1; i++ ) {
		std::cout << av[i] << ' ';
	}
	std::cout << av[i] << std::endl;
}
/**
 * Print a simple vector
*/
void	PmergeMe::printVector( std::vector<int> vector) const {
	for( size_t i = 0; i < vector.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT << vector[i] << std::endl;
		std::cout << std::endl;
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
 * Print input after use the Ford_Johnson Algorithm.
*/
void	PmergeMe::printInputAfter( void ) {
	std::cout << "After:  ";
	for(size_t i = 0; i < _vectorMain.size(); i++ ) {
		std::cout << _vectorMain[i] << ' ';
	}
	std::cout << std::endl;
}


// PARS INPUT -----------------------------------------------------------------

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

// FORD_JOHNSON ALGO ----------------------------------------------------------

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
static bool compareSecondElement( IntPair const &pair1, IntPair const &pair2 ) {
	if ( pair1.second == EMPTY || pair2.second == EMPTY )
		return false;
	if ( pair1.second < pair2.second )
		return true;
	return false;
}

/**
 * Sort the vector with his second element of pairs
*/
void	PmergeMe::sortPairElement( void ) {
	std::sort( this->_vectorPair.begin(), this->_vectorPair.end(), compareSecondElement );
}

/**
 * Create vectorMain and vectorPend with the second and the fisrt element of the vectorPair
*/
void	PmergeMe::createMainAndPendVector( void ) {
	for ( size_t i = 0; i < _vectorPair.size(); i++) {
		if ( this->_vectorPair[i].second != EMPTY )
			this->_vectorMain.push_back( this->_vectorPair[i].second );
		this->_vectorPend.push_back( this->_vectorPair[i].first );
	}
}


// JACLOBSTHAL --------------------------------------------------------------------------
int	PmergeMe::jacobsthalList( int const &nbSearch ) {
	if ( nbSearch == 0 )
        return 0;
    else if ( nbSearch == 1 )
        return 1;
    else
        return jacobsthalList(nbSearch - 1) + 2 * jacobsthalList(nbSearch - 2);
}

std::vector<int>	PmergeMe::genreteJacobSVector( void ){
	std::vector<int> jacobList;

	int i = 2;
	jacobList.push_back( 1 );
	while ( jacobsthalList(++i) < static_cast<int>(this->_vectorPend.size()) ) {
		jacobList.push_back(this->jacobsthalList(i));
	}
	std::cout << YEL "--- Vector Jacob ---" << std::endl;
	this->printVector(jacobList);
	return jacobList;
}


// ---------------------------------------------------------------------------------------------------
/**
 * Finds where to insert a number in the vectorMain
 * @param nbInsert the number to be inserted
 * @param return the position
*/
int	PmergeMe::binarySearch( int nbInsert ) {
	int start(0), end(this->_vectorMain.size());

	while ( start < end ) {
		int mid = start + (end - start) / 2;
		if ( this->_vectorMain[mid] < nbInsert )
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

/**
 * Insert the number of the vectorPend in the vectorMain
*/
void	PmergeMe::insertInMain( void ) {
	std::vector<int> jacobList = this->genreteJacobSVector();

	int cur;
	int prev;

	for ( size_t i = 0; i < this->_vectorPend.size(); ++i ) {
		int insert = this->binarySearch( this->_vectorPend[i] );
		this->_vectorMain.insert( this->_vectorMain.begin() + insert, this->_vectorPend[i] );
	}
}


/**
 * Manage Input. Parses, Sorts and Orders the input
 * @param ac number of arguments
 * @param av list of arguments
*/
void	PmergeMe::manageInputDebug( int ac, char **av ) {
	std::clock_t start, end;
	start = std::clock();
	this->parsInput( ac, av );
	this->printInputBefore( ac, av );
	this->fillVectorPair( ac, av );
	if  ( DEBUG ) {
		std::cout <<YEL "PRINT AFTER FILL VECTOR ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	}
	this->sortPairElement();
	if  ( DEBUG ) {
		std::cout << std::endl <<YEL "PRINT AFTER SORT SECOND ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	}
	this->createMainAndPendVector();
	if  ( DEBUG ) {
		std::cout << std::endl <<YEL "PRINT AFTER CREATE MAIN AND PENDING VECTOR ----------" WHT<< std::endl << std::endl;
		std::cout <<YEL "\n----------main vector---------------" WHT<< std::endl;
		this->printVector(this->_vectorMain);
		std::cout <<YEL "\n----------firstElement vector---------------" WHT<< std::endl;
		this->printVector(this->_vectorPend);
	}
	std::vector<int> pouet = this->genreteJacobSVector();
	// // if  ( DEBUG ) {
	// // 	std::cout << std::endl <<YEL "PRINT AFTER EXTRACT FIRST ----------" WHT<< std::endl << std::endl;
	this->printVector(pouet);
	// // }
	this->insertInMain();
	if  ( DEBUG ) {
		std::cout << std::endl <<YEL "PRINT AFTER ALGO ----------" WHT<< std::endl << std::endl;
		this->printVector(this->_vectorMain);
	}
	this->printInputAfter();
	end = std::clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::[..] : " << duration << "sec" << std ::endl;
}



void	PmergeMe::fordJohnsonAlgorithm( int ac, char **av ) {
	std::clock_t start, end;
	start = std::clock();
	this->parsInput( ac, av );
	this->printInputBefore( ac, av );
	this->fillVectorPair( ac, av );
	this->sortPairElement();
	this->createMainAndPendVector();
	this->insertInMain();
	this->printInputAfter();
	end = std::clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::[..] : " << duration << "msec" << std ::endl;
}


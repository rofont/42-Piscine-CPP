/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:51:54 by rofontai          #+#    #+#             */
/*   Updated: 2024/02/13 21:20:23 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Cont, typename ContPair>
PmergeMe<Cont, ContPair>::PmergeMe( void ) {}

template <typename Cont, typename ContPair>
PmergeMe<Cont, ContPair>::PmergeMe( PmergeMe<Cont, ContPair> const &copy ) {
	*this = copy;
}

template <typename Cont, typename ContPair>
PmergeMe<Cont, ContPair>::~PmergeMe( void ) {}

template <typename Cont, typename ContPair>
PmergeMe<Cont, ContPair> &PmergeMe<Cont, ContPair>::operator=( PmergeMe<Cont, ContPair> const &src ) {
	if ( this != &src ) {
		this->_pend = src._pend;
		this->_main = src._main;
		this->_pair = src._pair;
	}
	return *this;
}

// ALGO FORD-JOHNSON-----------------------------------------------------------

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::fordJohnsonAlgorithm( int ac, char **av, std::string type ) {

	struct timespec start, end;
	clock_gettime( CLOCK_REALTIME, &start );

	this->parsInput( ac, av );
	if ( type == "vector" )
		this->printInputBefore( ac, av );
	this->fillVectorPair( ac, av );
	this->sortPairElement();
	this->createMainAndPendVector();
	this->insertInMain();
	if ( type == "vector" )
		this->printInputAfter();

	clock_gettime( CLOCK_REALTIME, &end );
	double duration = ( end.tv_sec - start.tv_sec ) * 1000.0 + ( end.tv_nsec - start.tv_nsec ) / 1000000.0;
	std::cout << std::fixed << std::setprecision(3);
	if ( type == "deque" )
		std::cout << "Time to process a range of " CYA<< ac - 1 <<WHT " elements with std::" MAG<< type <<WHT "  : " GRE<< duration <<WHT "ms" << std ::endl;
	else
		std::cout << "Time to process a range of " CYA<< ac - 1 <<WHT " elements with std::" MAG<< type <<WHT " : " GRE<< duration <<WHT "ms" << std ::endl;
}

// PRINTS ---------------------------------------------------------------------

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::printInputBefore( int ac, char **av ) {
	std::cout <<WHT "Before: ";
	if ( ac > 12 )
		ac = 11;
	for ( int i = 1; i < ac; i++ ) {
		std::cout << ' ' << av[i];
	}
	if ( ac >= 11 )
		std::cout << " [...]";
	std::cout << std::endl;
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::printVector( Cont vector ) const {
	for( size_t i = 0; i < vector.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT << vector[i] << std::endl;
		std::cout << std::endl;
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::printVectorPair( void ) const {
	for( size_t i = 0; i < this->_pair.size(); i++ )
		std::cout <<CYA "list [" << i << "] = " <<WHT <<
		"first = "<< this->_pair[i].first << ", second = " << this->_pair[i].second << std::endl;
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::printInputAfter( void ) {
	std::cout << "After:  ";
	size_t size = this->_main.size();
	if ( size > 10 )
		size = 10;
	for ( size_t i = 0; i < size; i++ ) {
		std::cout << ' ' << this->_main[i];
	}
	if ( size >= 10 )
		std::cout << " [...]";
	std::cout << std::endl;
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::sortedOrNot( std::string type ) {
	for ( size_t i = 1; i < this->_main.size(); i++ ) {
		if ( this->_main[i-1] > this->_main[i] ) {
			std::cout << RED "This "<< type << " is not sorted" WHT << std::endl;
			return ;
		}
	}
	std::cout << CYA "This " << type << " is sorted" WHT << std::endl;
}

// PARS INPUT -----------------------------------------------------------------

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::parsInput( int ac, char **av ) {
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

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::fillVectorPair( int ac, char **av ) {
	int nb1, nb2;
	for ( int i = 1; i < ac; i += 2 ) {
		nb1 = std::stoi( av[i] );
		if ( i == ac - 1 ) {
			this->_pair.push_back( std::make_pair(nb1, EMPTY) );
			return ;
		}
		nb2 = std::stoi( av[i + 1] );
		if ( nb1 > nb2 )
			std::swap( nb1, nb2 );
		this->_pair.push_back( std::make_pair(nb1, nb2) );
	}
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::merge(ContPair& pair, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	ContPair L(n1), R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = pair[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = pair[mid + 1 + j];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i].second != -1 && R[j].second != -1) {
			if (L[i].second <= R[j].second) {
				pair[k] = L[i];
				i++;
			} else {
				pair[k] = R[j];
				j++;
			}
		} else if (L[i].second != -1) {
			pair[k] = L[i];
			i++;
		} else if (R[j].second != -1) {
			pair[k] = R[j];
			j++;
		}
		k++;
        }
	while (i < n1) {
		pair[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		pair[k] = R[j];
		j++;
		k++;
	}
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::mergeSort(ContPair& pair, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		this->mergeSort(pair, left, mid);
		this->mergeSort(pair, mid + 1, right);

		this->merge(pair, left, mid, right);
	}
}

template <typename Cont, typename ContPair>
void PmergeMe<Cont, ContPair>::sortPairElement( void ) {
	this->mergeSort(_pair, 0, _pair.size() - 1);
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::createMainAndPendVector( void ) {
	for ( size_t i = 0; i < _pair.size(); i++) {
		if ( this->_pair[i].second != EMPTY )
			this->_main.push_back( this->_pair[i].second );
		this->_pend.push_back( this->_pair[i].first );
	}
	this->_main.insert( this->_main.begin(), this->_pend[0] );
}

// JACLOBSTHAL ---------------------------- ----------------------------------------------

template <typename Cont, typename ContPair>
int	PmergeMe<Cont, ContPair>::jacobsthalList( int const &nbSearch ) {
	if ( nbSearch == 0 )
        return 0;
    else if ( nbSearch == 1 )
        return 1;
    else
        return jacobsthalList( nbSearch - 1 ) + 2 * jacobsthalList( nbSearch - 2 );
}

template <typename Cont, typename ContPair>
Cont	PmergeMe<Cont, ContPair>::genreteJacobSVector( void ){
	Cont jacobList;

	int i = 2;
	jacobList.push_back( 1 );
	while ( jacobsthalList(++i) < static_cast<int>(this->_pend.size()) ) {
		jacobList.push_back( this->jacobsthalList(i) );
	}
	// std::cout << YEL "--- Vector Jacob ---" << std::endl;
	// this->printVector(jacobList);
	return jacobList;
}

// ---------------------------------------------------------------------------------------------------

template <typename Cont, typename ContPair>
int	PmergeMe<Cont, ContPair>::binarySearch( int nbInsert ) {
	int start( 0 ), end( this->_main.size() );

	while ( start < end ) {
		int mid = start + ( end - start ) / 2;
		if ( this->_main[mid] < nbInsert )
			start = mid + 1;
		else
			end = mid;
	}
	return start;
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::insertInMain( void ) {
	typename Cont::iterator cur;
	typename Cont::iterator prev;

	Cont jst = this->genreteJacobSVector();
	int insert, temp, cont( 1 );
	cur = jst.begin() + 1;
	prev = jst.begin();

	while ( cur != jst.end() ) {
		temp = *cur + 1;
			// std::cout << MAG "before cur = " << *cur << ", prev = " << *prev << WHT << std::endl;
		while ( *cur != *prev - 1 ) {
			insert = this->binarySearch( this->_pend[*cur] );
			// std::cout << CYA "insert = " << insert << ", nbSearch = " << this->_pend[*cur] << WHT << std::endl;
			this->_main.insert( this->_main.begin() + insert, this->_pend[*cur] );
			*cur -= 1;
			cont++;
			// std::cout << RED "cont = " << cont << ", cur = " << *cur << ", prev = " << *prev << WHT << std::endl;
		}
		*prev = temp;
		++cur;
	}
	while ( cont < static_cast<int>(this->_pend.size()) ) {
		insert = this->binarySearch( this->_pend[cont] );
		this->_main.insert( this->_main.begin() + insert, this->_pend[cont] );
		cont++;
	}
}

template <typename Cont, typename ContPair>
void	PmergeMe<Cont, ContPair>::manageInputDebug( int ac, char **av, std::string type ) {
	struct timespec start, end;
	clock_gettime( CLOCK_REALTIME, &start );

	if ( type == "vector" )
		this->printInputBefore( ac, av );
	this->parsInput( ac, av );
	this->fillVectorPair( ac, av );
		std::cout <<YEL "PRINT AFTER FILL VECTOR ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	this->sortPairElement();
		std::cout << std::endl <<YEL "PRINT AFTER SORT SECOND ----------" WHT<< std::endl << std::endl;
		this->printVectorPair();
	this->createMainAndPendVector();
		std::cout << std::endl <<YEL "PRINT AFTER CREATE MAIN AND PENDING VECTOR ----------" WHT<< std::endl << std::endl;
		std::cout <<YEL "\n----------main vector---------------" WHT<< std::endl;
		this->printVector( this->_main );
		std::cout <<YEL "\n----------pend vector---------------" WHT<< std::endl;
		this->printVector( this->_pend );
	this->insertInMain();
		std::cout << std::endl <<YEL "PRINT AFTER ALGO ----------" WHT<< std::endl << std::endl;
		this->printVector( this->_main );
	if ( type == "vector" )
		this->printInputAfter();

	clock_gettime( CLOCK_REALTIME, &end );
	double duration = ( end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_nsec - start.tv_nsec ) / 1000000.0;
	std::cout << std::fixed << std::setprecision(3);
	if ( type == "deque" )
		std::cout << "Time to process a range of " CYA<< ac - 1 <<WHT " elements with std::" MAG<< type <<WHT "  : " GRE<< duration <<WHT "ms" << std ::endl;
	else
		std::cout << "Time to process a range of " CYA<< ac - 1 <<WHT " elements with std::" MAG<< type <<WHT " : " GRE<< duration <<WHT "ms" << std ::endl;
	this->sortedOrNot( type );
}

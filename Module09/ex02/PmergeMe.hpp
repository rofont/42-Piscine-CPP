/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:49:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/02/13 21:17:09 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

// COLORS----------------------------------------------------------------------
# define BCK "\x1B[30m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define BLE "\x1B[34m"
# define MAG "\x1B[35m"
# define CYA "\x1B[36m"
# define WHT "\x1B[37m"
//------------------------------------------------------------------------------

# include <algorithm>
# include <iostream>
# include <string>
# include <cctype>
# include <vector>
# include <deque>
# include <iomanip>

# ifndef DEBUG
#  define DEBUG 0
# endif

# define EMPTY -1

typedef std::pair<int, int> IntPair;

template <typename Cont, typename ContPair>
class PmergeMe {
	public:
		PmergeMe( void );
		~PmergeMe( void );

		void	manageInputDebug( int ac, char **av, std::string type );
		void	fordJohnsonAlgorithm( int ac, char **av, std::string type );

	private:
		Cont _pend;
		Cont _main;
		ContPair _pair;

		PmergeMe( PmergeMe const &copy );
		PmergeMe &operator=( PmergeMe const &src );

		void	printInputBefore( int ac, char **av );
		void	printVector( Cont vector ) const;
		void	printVectorPair( void ) const;
		void	printInputAfter( void );
		void	sortedOrNot( std::string type );



		void	parsInput( int ac, char **av );
		void	fillVectorPair( int ac, char **av );
		void 	mergeSort(ContPair& pair, int left, int right);
		void	merge(ContPair& pair, int left, int mid, int right);
		void	sortPairElement( void );
		void	createMainAndPendVector( void );
		int		jacobsthalList( int const &nbSearch );
		Cont	genreteJacobSVector( void );
		int		binarySearch( int nbInsert );
		void	insertInMain( void );
};

# include "PmergeMe.tpp"
#endif
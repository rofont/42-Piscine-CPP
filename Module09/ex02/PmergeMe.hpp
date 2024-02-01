/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:49:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/31 16:07:12 by romain           ###   ########.fr       */
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

# include <iostream>
# include <algorithm>
# include <cctype>
# include <vector>
# include <deque>

# ifndef DEBUG
#  define DEBUG 1
# endif

# define EMPTY -1

typedef std::pair<int, int> IntPair;
typedef std::vector<int>::iterator ItVec;

class PmergeMe {
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const &copy );
		~PmergeMe( void );

		PmergeMe &operator=( PmergeMe const &src );

		void	printInputBefore( int ac, char **av );
		void	printVector( std::vector<int> vector ) const;
		void	printVectorPair( void ) const;
		void	printInputAfter( void );


		void	parsInput( int ac, char **av );
		void	fillVectorPair( int ac, char **av );

		void	sortPairElement( void );
		void	createMainAndPendVector( void );
		int		binarySearch( int nbInsert );
		void	insertInMain( void );

		int		jacobsthalList( int const &nbSearch );
		std::vector<int>	genreteJacobSVector( void );


		void	extractFirstElement( void );

		void	manageInputDebug( int ac, char **av );
		void	fordJohnsonAlgorithm( int ac, char **av );

	private:
		std::vector<int> _vectorPend;
		std::vector<int> _vectorMain;
		std::vector<IntPair> _vectorPair;
};

#endif
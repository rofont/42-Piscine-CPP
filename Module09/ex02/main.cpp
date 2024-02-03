/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:52:10 by rofontai          #+#    #+#             */
/*   Updated: 2024/02/03 16:00:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	try {
		PmergeMe<std::vector<int> , std::vector<IntPair> > FJA_vector;
		PmergeMe<std::deque<int> , std::deque<IntPair> > FJA_deque;

		if ( DEBUG )
			FJA_vector.manageInputDebug( ac, av, "vector" );
		else {
			FJA_vector.fordJohnsonAlgorithm( ac, av, "vector" );
			FJA_deque.fordJohnsonAlgorithm( ac, av, "deque" );
		}
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
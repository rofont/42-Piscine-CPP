/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:52:10 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/31 15:42:03 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	try {
		PmergeMe FJA;
		if ( DEBUG )
			FJA.manageInputDebug( ac, av );
		else
			FJA.fordJohnsonAlgorithm( ac, av );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
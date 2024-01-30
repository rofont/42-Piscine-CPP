/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:52:10 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/30 14:57:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	try {
		PmergeMe Against;
		Against.manageInput( ac, av );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:52:10 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/29 14:47:34 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	try {
		PmergeMe Against;
		Against.parsInput( ac, av );
		Against.printVector();
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
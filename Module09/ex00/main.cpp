/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:30 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 21:59:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	( void )ac;

	BitcoinExchange Paul;
	try {


		if ( Paul.checkDate( av[1] ) )
			printf("REUSSI !\n");
		else
			printf("NOT TO DAY BRO !\n");

		// Paul.insertElementInDataBase( 234, 1.2 );
		// Paul.printDatabase();
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
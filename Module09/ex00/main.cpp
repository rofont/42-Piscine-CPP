/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:30 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/26 21:59:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int ac, char **av )
{
	if ( ac != 2 ) {
		std::cerr <<RED "You don't have enough parameters" WHT<< std::endl;
		return 1;
	}
	try {
		BitcoinExchange coin;
		coin.manageInput(av[1]);
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
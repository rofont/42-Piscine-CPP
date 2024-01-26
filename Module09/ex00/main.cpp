/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:30 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/26 08:24:17 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	( void )ac;
	( void )av;

	BitcoinExchange Paul;
	try {
		Paul.parsCSV( CSV );
		Paul.printDatabase();
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
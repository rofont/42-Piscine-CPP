/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:30 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 11:49:10 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(void)
{
	BitcoinExchange Paul;
	try {
		Paul.insertElementInDataBase(234, 1.2);
		Paul.printDatabase();
	}
	catch (std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
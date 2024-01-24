/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:34 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 11:47:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	// std::cout << Default Constructor << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &copy ) {
	this->dataBase = copy.dataBase;
	// std::cout << Copy Constructor << std::endl;
}

BitcoinExchange::~BitcoinExchange( void ) {
	// std::cout << Default Destructor << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &src ) {
	// std::cout << Assignation Operator << std::endl;
	if (this != &src)
		this->dataBase = src.dataBase;
	return *this;
}

// METHODE --------------------------------------------------------------------

/**
 * fonction that prints dataBase
*/
void	BitcoinExchange::printDatabase( void ) {
	try {
		std::map<int, float>::iterator it;
		for (it = this->dataBase.begin(); it != this->dataBase.end(); ++it)
        	std::cout << it->first << " : " << it->second << std::endl;
		printf("Salut!!\n");
	}
	catch (std::exception &e) {
		throw ;
	}
}

/**
 * fonction that inserts in database a element
 * @param date key
 * @param change value
*/
void	BitcoinExchange::insertElementInDataBase ( int date, float change ) {
	this->dataBase[date] = change;
}
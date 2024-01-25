/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:34 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 22:13:25 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
	// std::cout << Default Constructor << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &copy ) {
	*this = copy;
	// std::cout << Copy Constructor << std::endl;
}

BitcoinExchange::~BitcoinExchange( void ) {
	// std::cout << Default Destructor << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &src ) {
	// std::cout << Assignation Operator << std::endl;
	if (this != &src)
		*this = src;
	return *this;
}

// METHODE --------------------------------------------------------------------

/**
 * fonction that prints dataBase
*/
void	BitcoinExchange::printDatabase( void ) {
	try {
		std::map<int, float>::iterator it;
		for ( it = this->dataBase.begin(); it != this->dataBase.end(); ++it )
        	std::cout << it->first << " : " << it->second << std::endl;

	}
	catch ( std::exception &e ) {
		throw ;
	}
}

/**
 * fonction that inserts in database a element
 * @param date key
 * @param change value
*/
void	BitcoinExchange::insertElementInDataBase ( int date, float change ) {
	this->dataBase[ date ] = change;
}

/**
 * fonction that pars CSV file
*/
bool	BitcoinExchange::parsCSV( std::string nameCSV ) {
	std::ifstream csv( nameCSV );
	if (!csv.is_open())
		std::cerr <<RED "This file has not been open" WHT<< std::endl;
	/* TODO A completer
		1.lire ligne par ligne
		2.split la ligne avec la virgule et si plus que 2 arguments return erreur
			regex sur le format specifique que l'on veut dans le fichier
		3.check date //FAIT
		4.convertir la date en int
		5. metre le tout dans la map
	*/
	return true;
}

/**
 * function that checks if the date is bisextile.
 * @param year year at test
 * @param return true if the year is bisextile
*/
bool	BitcoinExchange::isBisextile( int year ) {
	if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		return true;
	return false;
}


/**
 * function that checks date is right.
 * @param date current date
 * @param line line where is the date
 * @param return true if the date is valable
*/
bool	BitcoinExchange::checkDate( std::string date ) {
	char under;
	int year, month, day;
	std::istringstream iss( date );

	iss >> year >> under >> month >> under >> day;
	printf("year = %d\nmonth = %d\nday = %d\n", year, month, day);
	if ( (year < 2009 || year > 2024) || (month < 1 || month > 12) ||
		(day < 1 || day > 31) )
		return false;
	if ( (month == 4 || month == 6 || month == 9 || month ==11) && day > 30 )
		return false;
	if ( (month == 2 && !this->isBisextile( year ) && day > 28) ||
		(month == 2 && this->isBisextile( year ) && day > 29))
		return false;
	if ( (year == 2009 && month == 1 && day == 1) )
		return false;
	return true;
}
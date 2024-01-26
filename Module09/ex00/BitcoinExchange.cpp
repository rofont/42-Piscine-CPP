/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:34 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/26 08:31:06 by rofontai         ###   ########.fr       */
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

// CHECK CSV-------------------------------------------------------------------

/**
 * function pars CSV file
 * @param nameCSV the name of CSV file
*/
void	BitcoinExchange::parsCSV( std::string nameCSV ) {
	std::ifstream csv( nameCSV );
	if ( !csv.is_open() ) {
		throw std::runtime_error("The CSV file has not been open");
	}
	try {
		std::string line;
		this->checkHeaderCSV( csv );
		int i = 1;
		while (std::getline( csv, line )) {
			this->checkLineCSV( line, i );
			this->fillMap( line );
			i++;
		}
		csv.close();
	}
	catch ( std::exception &e ) {
		csv.close();
		throw ;
	}
}

/**
 * check if CSV header is correct
 * @param csv is the ifstream for CSV file
*/
void	BitcoinExchange::checkHeaderCSV( std::ifstream &csv ) {
	std::string head;
	std::getline( csv, head );
	if ( head != "date,exchange_rate" )
		throw std::runtime_error( "Format the CSV file is not correct (Header)" );
}

/**
 * function check that the line has the correct format
 * @param line the line must be checked
*/
void	BitcoinExchange::checkLineCSV( std::string line, int i ) {
	std::regex pattern( "^(\\d{4}-\\d{2}-\\d{2}),(\\d*(\\.\\d+)?\\d*)$" );
	if ( line.empty() ) {
		throw std::runtime_error( "The CSV file is empty" );
	}
	else if ( !std::regex_match( line, pattern ) ) {
		std::string error = "Format the CSV file is not correct - L";
		std::stringstream er;
		er << error << i;
		throw std::runtime_error( er.str() );
	}
}

//CHECK DATE ------------------------------------------------------------------

/**
 * function checks if the date is bisextile.
 * @param year year at test
 * @param return true if the year is bisextile
*/
bool	BitcoinExchange::isBisextile( int year ) {
	if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
		return true;
	return false;
}

/**
 * function checks date is right.
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

// FILL MAP -------------------------------------------------------------------

/**
 * fonction that inserts in database a element
 * @param date key
 * @param change value
*/
void	BitcoinExchange::insertElementInDataBase ( int date, float change ) {
	this->dataBase[ date ] = change;
}

/**
 * Change Date to int
 * @param date the the date we want to change
*/
int	BitcoinExchange::changeDateToInt( std::string &date ) {
	int key;
	try {
		date.erase( std::remove(date.begin(), date.end(), '-'), date.end() );
		key = stoi( date );
		return key;
	}
	catch ( std::exception &e ) {
		throw ;
	}
}

/**
 * fill one line in the contener map
 * @param line the line we want to fill in the map
*/
void	BitcoinExchange::fillMap( std::string &line ) {
	std::string key, value;
	std::istringstream iss( line );

	std::getline(iss, key, ',');
	std::getline(iss, value, ',');
	int valueKey = this->changeDateToInt( key );
	this->insertElementInDataBase( valueKey, stof(value) );
}

// CHECK INPUT FILE -----------------------------------------------------------

void	BitcoinExchange::parsInput( std::string nameInput) {
	std::ifstream Input(nameInput);
	if ( !Input.is_open() ) {
		throw std::runtime_error("The CSV file has not been open");
	try {
		
	}
	catch ( std::exception &e ) {
		throw ;
	}
}
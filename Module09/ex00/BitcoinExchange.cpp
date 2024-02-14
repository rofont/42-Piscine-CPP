/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:34 by rofontai          #+#    #+#             */
/*   Updated: 2024/02/07 19:03:28 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &copy ) {
	*this = copy;
}

BitcoinExchange::~BitcoinExchange( void ) {}

BitcoinExchange &BitcoinExchange::operator=( BitcoinExchange const &src ) {
	if ( this != &src )
		this->_dataBase = src._dataBase;
	return *this;
}

// METHODE --------------------------------------------------------------------

void	BitcoinExchange::printDatabase( void ) {
	try {
		std::map<int, float>::iterator it;
		for ( it = this->_dataBase.begin(); it != this->_dataBase.end(); ++it )
        	std::cout << it->first << " : " << it->second << std::endl;
	}
	catch ( std::exception &e ) {
		throw ;
	}
}

// MANAGE CSV-------------------------------------------------------------------

void	BitcoinExchange::manageCSV( std::string nameCSV ) {
	std::ifstream csv( nameCSV );

	if ( !csv.is_open() ) {
		throw std::runtime_error( "The CSV file has not been open" );
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

void	BitcoinExchange::checkHeaderCSV( std::ifstream &csv ) {
	std::string head;

	std::getline( csv, head );
	if ( head != "date,exchange_rate" )
		throw std::runtime_error( "Format the CSV file is not correct (Header)" );
}

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


bool	BitcoinExchange::isBisextile( int year ) {
	if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) )
		return true;
	return false;
}

bool	BitcoinExchange::checkDate( std::string date ) {
	char under;
	int year, month, day;
	std::istringstream iss( date );

	iss >> year >> under >> month >> under >> day;
	if ( (year < 2009 || year > 2024) || (month < 1 || month > 12) ||
		(day < 1 || day > 31) )
		return false;
	if ( (month == 4 || month == 6 || month == 9 || month ==11) && day > 30 )
		return false;
	if ( (month == 2 && !this->isBisextile( year ) && day > 28) ||
		(month == 2 && this->isBisextile( year ) && day > 29) )
		return false;
	if ( (year == 2009 && month == 1 && day == 1) )
		return false;
	return true;
}

// FILL MAP -------------------------------------------------------------------

void	BitcoinExchange::insertElementInDataBase ( int date, float change ) {
	this->_dataBase[ date ] = change;
}

int	BitcoinExchange::changeDateToInt( std::string date ) {
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

void	BitcoinExchange::fillMap( std::string &line ) {
	std::string key, value;
	std::istringstream iss( line );

	std::getline( iss, key, ',' );
	std::getline( iss, value );
	int valueKey = this->changeDateToInt( key );
	this->insertElementInDataBase( valueKey, stof(value) );
}

// CHECK INPUT FILE -----------------------------------------------------------

void	BitcoinExchange::manageInput( std::string input ) {
	std::regex pattern( "^(\\d{4}-\\d{2}-\\d{2}) \\| (\\-*\\+*\\d*(\\.\\d+)?\\d*)$" );
	std::string line;
	std::ifstream iss( input );

	if( !iss.is_open() )
		throw std::runtime_error( "Error: could not open file." );
	try {
		this->manageCSV( CSV );
		this->checkHeaderInput( iss );
		while ( std::getline(iss, line) ) {
			if ( std::regex_match(line, pattern) ) {
				checkLineInput( line );
			}
			else
				std::cout << "Error: bad input => " << line << std::endl;
		}
		iss.close();
	}
	catch ( std::exception &e ) {
		throw ;
	}
}

void	BitcoinExchange::checkLineInput( std::string line ) {
	std::string temp = line;
	temp.erase( std::remove(temp.begin(), temp.end(), ' '), temp.end() );

	std::string date, value;
	std::istringstream iss( temp );

	std::getline( iss, date, '|' );
	std::getline( iss, value );

	int nb = this->changeDateToInt( date );
	float val = stof(value);

	if ( nb < DATEMIN || nb > DATEMAX )
		std::cout << "Error: this date is out of range." << std::endl;
	else if ( val < 0 )
		std::cout << "Error: not a positive number." << std::endl;
	else if ( val > 1000 )
		std::cout << "Error: too large a number." << std::endl;
	else
		std::cout << date << " => " << value << " = " << this->convert(nb, val) << std::endl;
}

float	BitcoinExchange::convert( int date, float value ) {
	float res = 0.0f;
	std::map<int, float>::iterator it;


	it = this->_dataBase.lower_bound( date );
	if ( it != this->_dataBase.begin() && it != this->_dataBase.end() && it->first != date ) {
		--it;
		// std::cout << CYA << std::endl << "---convert---" <<std::endl;
		// std::cout << "key = " << it->first << std::endl << "value = " << it->second << WHT << std::endl;
		res = it->second * value;
	}
	else if (it != this->_dataBase.end()) {
		// std::cout << CYA << std::endl << "---convert---" <<std::endl;
		// std::cout << "key = " << it->first << std::endl << "value = " << it->second << WHT << std::endl;
		res = it->second * value;
	}
	else {
		it = this->_dataBase.end();
		--it;
		// std::cout << CYA << std::endl << "---convert---" <<std::endl;
		// std::cout << "key = " << it->first << std::endl << "value = " << it->second << WHT << std::endl;
		res =  it->second * value;
	}
	return res;
}

void	BitcoinExchange::checkHeaderInput( std::ifstream &input ) {
	std::string head;
	std::getline( input, head );
	if ( head != "date | value" )
		throw std::runtime_error( "Format the Input file is not correct (Header)" );
}


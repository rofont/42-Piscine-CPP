/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:36 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/26 08:27:44 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

// COLORS----------------------------------------------------------------------
# define BCK "\x1B[30m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define BLE "\x1B[34m"
# define MAG "\x1B[35m"
# define CYA "\x1B[36m"
# define WHT "\x1B[37m"
//------------------------------------------------------------------------------

#define CSV "test.csv"

# include <algorithm>
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <regex>
# include <map>


class BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &copy );
		~BitcoinExchange( void );

		BitcoinExchange &operator=( BitcoinExchange const &src );

		void	printDatabase( void );
		void	insertElementInDataBase( int date, float change );

		bool	isBisextile( int year );
		bool	checkDate( std::string date );

		void	parsCSV( std::string nameCSV );
		void	checkLineCSV( std::string line, int i );
		void	checkHeaderCSV( std::ifstream &csv );

		void	fillMap( std::string &line );
		int		changeDateToInt( std::string &date );

		void	parsInput( std::string nameInput );

	private:
		std::map<int, float> dataBase;
};





#endif
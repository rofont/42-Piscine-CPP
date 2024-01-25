/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:36 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 21:52:47 by romain           ###   ########.fr       */
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

# include <iostream>
# include <algorithm>
# include <fstream>
# include <sstream>
# include <map>
# include <string>

class BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &copy );
		~BitcoinExchange( void );

		BitcoinExchange &operator=( BitcoinExchange const &src );
		void	printDatabase( void );
		void	insertElementInDataBase( int date, float change );
		bool	parsCSV( std::string nameCSV );
		bool	checkDate( std::string date );
		bool	isBisextile( int year );
	private:
		std::map<int, float> dataBase;
};





#endif
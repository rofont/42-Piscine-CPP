/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:52:36 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/24 13:41:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <map>

class BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &copy );
		~BitcoinExchange( void );

		BitcoinExchange &operator=( BitcoinExchange const &src );
		void	printDatabase( void );
		void	insertElementInDataBase( int date, float change );
		// void

	private:
		std::map<int, float> dataBase;
};





#endif
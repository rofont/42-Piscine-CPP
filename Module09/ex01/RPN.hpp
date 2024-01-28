/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:31:44 by romain            #+#    #+#             */
/*   Updated: 2024/01/28 10:04:07 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

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
# include <stack>

class RPN {
	public:
		RPN( std::string input );
		~RPN( void );


	private:
		std::string _input;
		std::stack<int> _stock;

		RPN( void );
		RPN( RPN const &copy );

		RPN &operator=( RPN const &src );
		void	printInput ( void );

		void	parsInput( void );
		void	fillStack( void );
		void	doOper( char const &c );

};


#endif
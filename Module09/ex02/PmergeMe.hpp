/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:49:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/29 13:19:22 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

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
# include <cctype>
# include <vector>
# include <deque>

class PmergeMe {
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const &copy );
		~PmergeMe( void );

		PmergeMe &operator=( PmergeMe const &src );

		void	printVector( void ) const;

		void	parsInput( int ac, char **av );

	private:
		std::vector<int> _list;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:04:12 by romain            #+#    #+#             */
/*   Updated: 2024/01/19 22:15:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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

# include <algorithm>
# include <iostream>
# include <stack>
#include <deque>

class stack;
class dequue;

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack (void);
		MutantStack (MutantStack const &copy);
		~MutantStack (void);

		MutantStack &operator=(MutantStack const &src);

		typedef typename std::deque<T>::iterator iterator;

		iterator begin(void);
		iterator end(void);
};



# include "MutantStack.tpp"

#endif
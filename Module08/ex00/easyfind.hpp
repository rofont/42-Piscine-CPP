/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:11:54 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/15 13:58:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

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
# include <vector>

template <typename T>
typename T::iterator easyfind(T &tab, int find) {
	typename T::iterator it;
	it = std::find(tab.begin(), tab.end(), find);
	if (it != tab.end())
		return it;
	else
		throw std::runtime_error("what you're looking for doesn't exist 🦄");
}

#endif
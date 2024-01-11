/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:28:57 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/11 10:49:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

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

template <typename T>
void	Iter(T *tab, size_t len, void(*fct)(T &value)) {
	for (size_t i = 0; i < len; i++) {
		fct(tab[i]);
	}
}

template <typename T>
void	add(T &a) {
	a++;
}

template <typename T>
void	toLower(T &a) {
	a = a + " est tres beau";
}

#endif
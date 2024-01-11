/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:41:57 by romain            #+#    #+#             */
/*   Updated: 2024/01/10 20:56:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

// COLORS----------------------------------------------------------------------
# define BCK "\x1B[30m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define BLE "\x1B[34m"
# define MAG "\x1B[35m"
# define CYA "\x1B[36m"
# define WHT "\x1B[37m"
//-----------------------------------------------------------------------------


# include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b) {
	return (a >= b ? b : a);
}

template <typename T>
T	max(T &a, T &b) {
	return (a <= b ? b : a);
}


#endif
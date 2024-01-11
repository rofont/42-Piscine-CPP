/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:09:45 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/11 15:43:27 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template < typename T>
class Array {
	public:
		Array(void);
		//créer un tableau vide;
		Array(unsigned int n);
		// créer un tableau de n case;
		Array(Array const &copy);
		//constructeur par recopie;
		~Array(void);

		Array	&operator=(Array const &src);
		T	&operator[](int &id) const;

		unsigned int	size(void) const;
		//retourne le nombre d'element dans le tableau

	private:
		unsigned int _n;
		T *_elements;
};

# include "Array.tpp"
#endif

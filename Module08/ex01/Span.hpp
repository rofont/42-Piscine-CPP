/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:29:33 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/15 15:08:05 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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
# include <vector>

class Span {

	public:
		Span(unsigned int nb);
		Span(Span &copy);
		~Span(void);

		Span	&operator=(Span const &src);
		void	addNumber(int nbAdd);
		

	private:
		Span(void);
		unsigned int		_n;
		std::vector<int>	_tab;

};

#endif
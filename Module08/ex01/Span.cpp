/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:35:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/15 15:06:47 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb) : _n(nb), _tab(_n) {
	// std::cout <<YEL "Default Constructor" WHT<< std::endl;
}

Span::Span(Span &copy) : _n(copy._n), _tab(copy._tab) {
	// std::cout <<YEL "Copy Constructor" WHT<< std::endl;
}

Span::~Span(void) {
	// std::cout <<YEL "Default Destructor" WHT<< std::endl;
}

Span &Span::operator=(Span const &src) {
	if (this != &src) {
		*this = src;
	}
	return *this;
}

void	Span::addNumber(int nbAdd) {
	if (_tab.max_size() == _tab.size())
		throw std::out_of_range("This Tableau is at full capacity. Sorry Bro");
	else {
		_tab.push_back(nbAdd);
	}
}

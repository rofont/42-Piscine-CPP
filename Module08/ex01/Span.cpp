/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:35:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/18 22:27:26 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb) : _n(nb), _tab(0) {
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
	if (this->_tab.size() == this->_n)
		throw std::out_of_range("This Tableau is at full capacity. Sorry Bro");
	else {
		_tab.push_back(nbAdd);
	}
}

int	Span::getNuumberVec(int id) const {
	return _tab[id];
}
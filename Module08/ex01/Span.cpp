/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:35:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/19 15:38:34 by rofontai         ###   ########.fr       */
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

int	Span::getNumberVec(int id) const {
	return _tab[id];
}

void	Span::fillSpanRandom(size_t nb) {
	srand(unsigned (std::time(0)));
	if (nb > this->_n)
		throw std::out_of_range("Your fill It's not possible for me");
	else {
		for (size_t i = 0; i < nb; i++)
			this->addNumber(rand()%100);
	}
}

int	Span::longestSpan(void) const {
	if (this->_tab.size() < 2)
		throw std::invalid_argument("Span does not have enough number for this comparison");
	else {
		int max = *std::max_element(this->_tab.begin(), this->_tab.end());
		std::cout << "max = " << max << std::endl;
		int min = *std::min_element(this->_tab.begin(), this->_tab.end());
		std::cout << "min = " << min << std::endl;
		return max - min;
	}
}

int	Span::shortestSpan(void) {
	if (this->_tab.size() < 2)
		throw std::invalid_argument("Span does not have enough number for this comparison");
	else {
		std::sort(this->_tab.begin(), this->_tab.end());
		int result = std::numeric_limits<int>::max();
		for (size_t i = 1; i < this->_tab.size(); i++) {
			int diff = this->_tab[i] - this->_tab[i - 1];
			if(diff < result)
				result = diff;
		}
		return result;
	}
}


void	Span::filladdNumber(ITERATOR start, ITERATOR end) {
	for (ITERATOR it = start; it < end; ++it)
		this->addNumber(*it);
}
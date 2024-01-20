/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:35:14 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/19 20:52:21 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int nb) : _n(nb), _tab(0) {
	// std::cout <<YEL "Default Constructor" WHT<< std::endl;
}

Span::Span(Span const &copy) : _n(copy._n), _tab(copy._tab) {
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
		throw std::out_of_range("I can't do what you're asking me to do");
	else {
		for (size_t i = 0; i < nb; i++)
			this->addNumber(rand()%1000);
	}
}

int	Span::longestSpan(void) const {
	if (this->_tab.size() < 2)
		throw std::invalid_argument("Span doesn't have enough numbers to find the longest gap");
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
		throw std::invalid_argument("Span does not have enough numbers to find the shortest gap");
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

void	Span::filladdNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	for (std::vector<int>::iterator it = start; it < end; ++it) {
		try {
			this->addNumber(*it);
		}
		catch (std::exception &e) {
			throw ;
		}
	}
}

void	Span::printSpan(void) const {
	for (size_t i = 0; i < this->_n; i++)
					std::cout << i << " = " << this->getNumberVec(i) << std::endl;
}
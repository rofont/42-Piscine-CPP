/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:06:07 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/12 11:31:34 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _n(0), _elements(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n),_elements(new T[n]) {}

template <typename T>
Array<T>::Array(Array const &copy) : _n(copy._n), _elements(new T[copy._n]) {
	for (size_t i = 0; i < _n; i++) {
		_elements[i] = copy._elements[i];
	}
}

template <typename T>
Array<T>::~Array(void) {
	delete [] _elements;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &src) {
	if (this != &src)
		delete [] _elements;

	_n = src._n;
	_elements = new T[src._n];
	for (size_t i = 0; i < _n; i++) {
		_elements[i] = src._elements[i];
	}
}

template <typename T>
T	&Array<T>::operator[](int id) const {
	if (id > static_cast<int>(_n) || id < 0)
		throw std::out_of_range("Index out of range");
	return _elements[id];
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return _n;
}
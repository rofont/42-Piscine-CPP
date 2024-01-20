/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:29:25 by romain            #+#    #+#             */
/*   Updated: 2024/01/19 21:52:47 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack (void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy) {
	*this = copy;
}

template <typename T>
MutantStack<T>::~MutantStack (void) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src) {
	*this = src;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin (void) {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end (void) {
	return this->c.end();
}



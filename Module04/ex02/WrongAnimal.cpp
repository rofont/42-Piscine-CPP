/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:55:41 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 21:12:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(void) : _typeWrong("No_Name_Wrong")
{
	cout << "WRONG_ANIMAL " <<  _typeWrong << " Default constructor" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	_typeWrong = copy._typeWrong;
	cout << "WRONG_ANIMAL " <<  _typeWrong << " Copy constructor" << endl;
}
WrongAnimal::~WrongAnimal(void)
{
	cout << "WRONG_ANIMAL " <<  _typeWrong << " Default destructor" << endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		_typeWrong = src._typeWrong;
	cout << "WRONG_ANIMAL " <<  _typeWrong << " Assignation operator" << endl;
	return *this;
}

const string &WrongAnimal::getType(void) const
{
	return _typeWrong;
}

void WrongAnimal::makeSound(void) const
{
	cout << "WRONG_ANIMAL " << _typeWrong << " make this sound : ..." << endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:43:02 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 20:58:53 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;


Animal::Animal(void) :_type("no define")
{
	cout << "ANIMAL " <<  _type << " Default constructor" << endl;
}
Animal::Animal(Animal &copy)
{
	_type = copy._type;
	cout << "ANIMAL " <<  _type << " Copy constructor" << endl;
}
Animal::~Animal(void)
{
	cout << "ANIMAL " <<  _type << " Default destructor" << endl;
}

Animal &Animal::operator=(Animal const &src)
{
	if(this != &src)
		this->_type = src._type;
	cout << "ANIMAL " <<  _type << " Assignation operator" << endl;
	return *this;
}

const string &Animal::getType(void) const
{
	return _type;
}

void Animal::makeSound(void) const
{
	cout << "ANIMAL " << _type << " make this sound : ..." << endl;
}
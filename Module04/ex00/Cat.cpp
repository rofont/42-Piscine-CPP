/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:54 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 20:52:48 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	cout << "CAT " <<  _type << " Default constructor" << endl;
}

Cat::Cat(Cat &copy)
{
	_type = copy._type;
	cout << "CAT " <<  _type << " Copy constructor" << endl;
}

Cat::~Cat(void)
{
	cout << "CAT " <<  _type << " Default destructor" << endl;
}

Cat &Cat::operator=(Cat const &src)
{
	if(this != &src)
		Animal::operator=(src);
	cout << "CAT " <<  _type << " Assignation operator" << endl;
	return *this;
}

const string &Cat::getType(void) const
{
	return _type;
}

void Cat::makeSound(void) const
{
	cout << "CAT " << _type << " make this sound : Miaou Miaou !" << endl;
}
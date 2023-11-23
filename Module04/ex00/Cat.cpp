/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:54 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/23 11:50:52 by rofontai         ###   ########.fr       */
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
	_type = src._type;
	return *this;
	cout << "CAT " <<  _type << " Assignation operator" << endl;
}

const string &Cat::getType(void) const
{
	return _type;
}

void Cat::makeSound(void) const
{
	cout << "CAT " << _type << " make this sound : Miaou Miaou !" << endl;
}
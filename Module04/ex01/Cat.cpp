/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:54 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/21 10:48:11 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	_CatBrain = new Brain();
	cout << "CAT " <<  _type << " Default constructor" << endl;
}

Cat::Cat(Cat &copy)
{
	_type = copy._type;
	_CatBrain = copy._CatBrain;
	cout << "CAT " <<  _type << " Copy constructor" << endl;
}

Cat::~Cat(void)
{
	delete _CatBrain;
	cout << "CAT " <<  _type << " Default destructor" << endl;
}

Cat &Cat::operator=(Cat const &src)
{
	_type = src._type;
	_CatBrain = src._CatBrain;
	return *this;
	cout << "CAT " <<  _type << " Assignation operator" << endl;
}

string Cat::getType(void) const
{
	return _type;
}

void Cat::makeSound(void) const
{
	cout << "CAT " << _type << " make this sound : Miaou Miaou !" << endl;
}
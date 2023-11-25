/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:55:41 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 17:22:36 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat(void) : WrongAnimal()
{
	_typeWrong = "Wrong_Cat";
	cout << "WRONG_CAT " <<  _typeWrong << " Default constructor" << endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	_typeWrong = copy._typeWrong;
	cout << "WRONG_CAT " <<  _typeWrong << " Copy constructor" << endl;
}
WrongCat::~WrongCat(void)
{
	cout << "WRONG_CAT " <<  _typeWrong << " Default destructor" << endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
		WrongAnimal::operator=(src);
	cout << "WRONG_CAT " <<  _typeWrong << " Assignation operator" << endl;
	return *this;
}

void WrongCat::makeSound(void) const
{
	cout << "WRONG_CAT " << _typeWrong << " make this sound : MIAOU MIAOU MIAOU !" << endl;
}
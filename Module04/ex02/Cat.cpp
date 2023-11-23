/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:54 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/23 13:04:20 by rofontai         ###   ########.fr       */
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
	_CatBrain = new Brain();
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
	_CatBrain = new Brain();
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

void Cat::setIdea(string const &idea, int const &i)
{
	_CatBrain->setIdea(idea, i);
}

const string &Cat::getIdea(int const &i) const
{
	return _CatBrain->getIdea(i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:54 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/21 10:47:58 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	_DogBrain = new Brain();
	cout << "DOG " <<  _type << " Default constructor" << endl;
}

Dog::Dog(Dog &copy)
{
	_type = copy._type;
	_DogBrain = copy._DogBrain;
	cout << "DOG " <<  _type << " Copy constructor" << endl;
}

Dog::~Dog(void)
{
	delete _DogBrain;
	cout << "DOG " <<  _type << " Default destructor" << endl;
}

Dog &Dog::operator=(Dog const &src)
{
	_type = src._type;
	_DogBrain = src._DogBrain;
	return *this;
	cout << "DOG " <<  _type << " Assignation operator" << endl;
}

string Dog::getType(void) const
{
	return _type;
}

void Dog::makeSound(void) const
{
	cout << "DOG " << _type << " make this sound : Ouaf Ouaf !" << endl;
}
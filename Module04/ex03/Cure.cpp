/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:46 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 22:17:46 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

using std::cout;
using std::endl;

Cure::Cure(void) : AMateria("cure")
{
	cout << "CURE " << _type << " Default Constructor" << endl;
}
Cure::Cure(Cure &copy)
{
	_type = copy._type;
	cout << "CURE " << _type << " Copy Constructor" << endl;
}
Cure::~Cure(void)
{
	cout << "CURE " << _type << " Default Destructor" << endl;
}

Cure &Cure::operator=(Cure const &src)
{
	_type = src._type;
	cout << "CURE " << _type << " Assignation Operator" << endl;
	return *this;
}

const std::string &Cure::getType(void) const
{
	return _type;
}

AMateria* Cure::clone(void) const
{
	AMateria *CureClone = new Cure();
	*CureClone = *this;
	cout << "CURE " << getType() << " has been cloned" << endl;
	return CureClone;
	// return new Cure;
}

void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
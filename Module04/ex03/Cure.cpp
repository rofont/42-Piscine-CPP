/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:46 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 09:15:10 by rofontai         ###   ########.fr       */
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
	if (this != &src)
		AMateria::operator=(src);
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
}

void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
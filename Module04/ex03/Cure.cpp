/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:04:18 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 21:16:20 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

using std::cout;
using std::endl;

Cure::Cure(void) : AMateria("cure")
{
	cout << "CURE " << _type << " Default Constructor" << endl;
}

Cure::Cure(Cure const &copy)
{
	cout << "CURE " << _type << " Copy Constructor" << endl;
	*this = copy;
}

Cure::~Cure(void)
{
	cout << "CURE " << _type << " Destructor" << endl;
}

Cure &Cure::operator=(Cure const &src)
{
	cout << "CURE " << _type << " Assignation Operator" << endl;
	if(this != &src)
		AMateria::operator=(src);
	return *this;
}

AMateria *Cure::clone(void) const
{
	cout << "CURE " << "has been cloned" << endl;
	return new Cure();
}
void Cure::use(ICharacter& target)
{
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:38:57 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 21:10:47 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

using std::cout;
using std::endl;

AMateria::AMateria(void) : _type("No_define")
{
	cout << "AMATERIA " << _type << " Default Constructor" << endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	cout << "AMATERIA " << _type << " Constructor" << endl;
}

AMateria::AMateria(AMateria const &copy)
{
	cout << "AMATERIA " << _type << " Copy Constructor" << endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	cout << "AMATERIA " << _type << " Destructor" << endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	cout << "AMATERIA " << _type << " Assignation Operator" << endl;
	if (this != &src)
		_type = src._type;
	return *this;
}

std::string const &AMateria::getType() const //Returns the materia type
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
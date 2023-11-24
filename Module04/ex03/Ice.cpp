/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:05:48 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 09:12:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout << "ICE " << _type << " Default Constructor" << endl;
}
Ice::Ice(Ice &copy)
{
	_type = copy._type;
	cout << "ICE " << _type << " Copy Constructor" << endl;
}
Ice::~Ice(void)
{
	cout << "ICE " << _type << " Default Destructor" << endl;
}

Ice &Ice::operator=(Ice const &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return *this;
	cout << "ICE " << _type << " Assignation Operator" << endl;
}

const std::string &Ice::getType(void) const
{
	return _type;
}

AMateria* Ice::clone(void) const
{
	AMateria *iceClone = new Ice();
	*iceClone = *this;
	cout << "ICE " << getType() << " has been cloned" << endl;
	return iceClone;

}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:52:26 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 21:16:30 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout << "ICE " << _type << " Default Constructor" << endl;
}

Ice::Ice(Ice const &copy)
{
	cout << "ICE " << _type << " Copy Constructor" << endl;
	*this = copy;
}

Ice::~Ice(void)
{
	cout << "ICE " << _type << " Destructor" << endl;
}

Ice &Ice::operator=(Ice const &src)
{
	cout << "ICE " << _type << " Assignation Operator" << endl;
	if(this != &src)
		AMateria::operator=(src);
	return *this;
}

AMateria *Ice::clone(void) const
{
	cout << "ICE " << "has been cloned" << endl;
	return new Ice();
}
void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
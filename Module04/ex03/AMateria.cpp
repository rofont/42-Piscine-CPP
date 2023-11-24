/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:56:54 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 09:04:57 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

using std::cout;
using std::endl;


AMateria::AMateria(void) : _type("No_Name")
{
	cout << "AMATERIA " << _type << " Default Constructor" << endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	cout << "AMATERIA " << _type << " Constructor" << endl;
}

AMateria::AMateria(AMateria &copy)
{
	_type = copy._type;
	cout << "AMATERIA " <<  _type << " Copy constructor" << endl;
}

AMateria::~AMateria(void)
{
	cout << "AMATERIA " << _type << " Default Destructor" << endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
		_type = src._type;
	cout << "AMATERIA " << _type << " Assignation Operator" << endl;
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

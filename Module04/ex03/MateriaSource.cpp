/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:47:55 by romain            #+#    #+#             */
/*   Updated: 2023/11/27 10:41:13 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

using std::cout;
using std::endl;

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	cout << "MATERIA_SOURCE Default Constructor" << endl;
	for (int i = 0; i < 4; i++)
		_tank[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const &copy)
{
	cout << "MATERIA_SOURCE Copy Constructor" << endl;
	*this = copy;
}
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _tank[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
			delete _tank[i];
		for (int i = 0; i < 4; i++)
		for (int i = 0; i < 4; i++)
		{
			if (src._tank[i])
				_tank[i] = src._tank[i]->clone();
			else
				_tank[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
	{
		cout << "LEARN_MATERIA doesn't exist" << endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_tank[i])
		{
			cout << "LEARN_MATERIA has been learned" << endl;
			_tank[i] = materia;
			return ;
		}
	}
	cout << "LEARN_MATERIA couldn't be learned" << endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_tank[i]->getType().compare(type) == 0)
			return _tank[i]->clone();
	}
	return 0;
}
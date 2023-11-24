/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:56:00 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 12:38:08 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

using std::cout;
using std::endl;

MateriaSource::MateriaSource(void) : IMateriaSource(), _idxTank(0)
{
	for (uint i = 0; i < 4; i++)
		_tank[i] = nullptr;
	cout << "MATERIASOURCE " << " Default Constructor" << endl;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	_idxTank = copy._idxTank;
	for (uint i = 0; i < 4; i++)
	{
		if(copy._tank[i])
			_tank[i] = copy._tank[i]->clone();
		else
			_tank[i] = nullptr;
	}
	cout << "MATERIASOURCE " << " Copy Constructor" << endl;
}

MateriaSource::~MateriaSource(void)
{
	for (uint i = 0; i < 4; i++)
		delete _tank[i];
	cout << "MATERIASOURCE " << " Default Destructor" << endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	_idxTank = src._idxTank;
	for (uint i = 0; i < 4; i++)
		delete _tank[i];
	for (uint i = 0; i < 4; i++)
	{
		if(src._tank[i])
			_tank[i] = src._tank[i]->clone();
		else
			_tank[i] = nullptr;
	}
	cout << "MATERIASOURCE " << " Assignation Operator" << endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (_idxTank < 4)
	{
		for (uint i = 0; i < 4; i++)
		{
			if (_tank[i] == nullptr)
			{
				_tank[i] = materia;
				cout << "MATERIASOURCE " << materia->getType() << "'s power has been learned" << endl;
				break;
			}
		}
	}
	else
		cout << "MATERIASOURCE " << " It's not possible to learn " << materia->getType() << endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *create = nullptr;
	if (_idxTank < 4)
	{
		for (uint i = 0; i < 4; i++)
		{
			if (_tank[i] != nullptr && _tank[i]->getType() == type)
			{
				create = _tank[i]->clone();
				cout << "MATERIASOURCE " << type << " has been created" << endl;
			}
		}
	}
	else
		cout << "MATERIASOURCE " << " It's not possible to create " << type << endl;
	return create;
}

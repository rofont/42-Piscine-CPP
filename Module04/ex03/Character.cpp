/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:16:41 by romain            #+#    #+#             */
/*   Updated: 2023/11/26 22:25:05 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

using std::cout;
using std::endl;

Character::Character(void) : ICharacter(), _name("No_Name")
{
	cout << "CHARACTER " << _name << " Default Constructor" << endl;
	for (int i = 0; i < 4; i++)
		_stock [i] = NULL;
}

Character::Character(string name) : _name(name)
{
	cout << "CHARACTER " << _name << " Constructor" << endl;
	for (int i = 0; i < 4; i++)
		_stock [i] = NULL;
}

Character::Character(Character const &copy)
{
	cout << "CHARACTER " << _name << " Copy Constructor" << endl;
	_name = copy._name;
	for (int i = 0; i < 4; i++)
		_stock [i] = copy._stock[i];
}

Character::~Character(void)
{
	cout << "CHARACTER " << _name << " Destructor" << endl;
	for (int i = 0; i < 4; i++)
		delete _stock[i];
}

Character &Character::operator=(Character const &src)
{
	cout << "CHARACTER " << _name << " Assignation Operator" << endl;

	if(this != &src)
	{
		for (int i = 0; i < 4; i++)
			delete _stock[i];
		_name = src._name;
		for (int i = 0; i < 4; i++)
			_stock[i] = src._stock[i]->clone();
	}
	return *this;
}

std::string const &Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		cout << "CHARACTER EQUIP " << m->getType() << " doesn't exist" << endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_stock[i])
		{
			_stock[i] = m->clone();
			delete m;
			cout << "CHARACTER EQUIP " << m->getType() << " has been equipped" << endl;
			return ;
		}
	}
	cout << "CHARACTER EQUIP " << m->getType() << " couldn't be equipped" << endl;

}

void Character::unequip(int idx)
{
	for (int i = 0; i < 4; i++)
	{
		if (i == idx && _stock[i])
		{
			cout << "CHARACTER UNEQUIP " << "Equipement" << idx << " has been unequipped" << endl;
			_stock[i] = NULL;
			return ;
		}
	}
	cout << "CHARACTER UNEQUIP " << "Equipement" << idx << " couldn't be unequipped" << endl;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && _stock[idx])
		_stock[idx]->use(target);
	cout << "CHARACTER USE " << _name << " can't use this item" << endl;
}

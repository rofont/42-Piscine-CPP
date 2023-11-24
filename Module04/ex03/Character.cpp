/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:14:25 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 22:45:49 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

using std::cout;
using std::endl;

Character::Character(string const &name) : ICharacter()
{
	_name = name;
	_idx = 0;
	for (uint i = 0; i < 4; i++)
		_stock[i] = nullptr;
	cout << "CHARACTER " << _name << " Default Constructor" << endl;
}

Character::Character(Character &copy)
{
	_name = copy._name;
	_idx = copy._idx;
	for (uint i = 0; i < 4; i++)
	{
		if(copy._stock[i])
			_stock[i] = copy._stock[i]->clone();
		else
			_stock[i] = nullptr;
	}
	cout << "CHARACTER " << _name << " Copy Constructor" << endl;
}

Character::~Character(void)
{
	for (uint i = 0; i < 4; i++)
	{
		if(_stock[i])
		{
			delete _stock[i];
			_stock[i] = nullptr;
		}
		else
			_stock[i] = nullptr;
	}
	cout << "CHARACTER " << _name << " Default Destructor" << endl;
}

Character &Character::operator=(Character const &src)
{
	for (uint i = 0; i < 4; i++)
	{
		if(_stock[i])
		{
			delete _stock[i];
			_stock[i] = nullptr;
		}
		else
			_stock[i] = nullptr;
	}
	_name = src._name;
	_idx = src._idx;
	for (uint i = 0; i < 4; i++)
	{
		if(src._stock[i])
			_stock[i] = src._stock[i]->clone();
		else
			_stock[i] = nullptr;
	}
	cout << "CHARACTER " << _name << " Assignation Operator" << endl;
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (_idx < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_stock[i] == nullptr)
			{
				_stock[i] = m;
				_idx++;
			}
		}
		cout << "CHARACTER " << _name << " has recovered " << m->getType() << endl;
	}
	else
		cout << "CHARACTER OH NO" << _name << " couldn't recover " << m->getType() << endl;
}
void Character::unequip(int idx)
{
	if ((int)_idx >= idx)
	{
		_stock[idx] = nullptr;
		_idx--;
		cout << "CHARACTER " << _name << " has removed " << _stock[idx]->getType() << endl;
	}
	else
		cout << "CHARACTER OH NO " << _name << " couldn't remove " << _stock[idx]->getType() << endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx <= 3 && idx >= 0)
	{
		if (!_stock[idx])
			cout << "CHARACTER " << _name << " no items to use in stock " << idx << endl;
		else
			_stock[idx]->use(target);
	}
	else
		cout << "CHARACTER " << _name << " can't use this item" << endl;
}

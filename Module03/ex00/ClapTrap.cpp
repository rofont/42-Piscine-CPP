/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:36 by romain            #+#    #+#             */
/*   Updated: 2023/11/13 16:19:42 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(void) : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "Constructor called" << endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	cout << "Copy constructor called" << endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	cout << "Destructor called" << endl;
}

ClapTrap ClapTrap::operator=(ClapTrap const &src)
{
	cout << "Assignation operator called" << endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return *this;
}

void ClapTrap::attack(string const &target)
{
	if (_hitPoints > 0 &&  _energyPoints > 0)
	{
		cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damadge!" << endl;
		_energyPoints--;
	}
	else
		cout << "ClapTrap " << _name << " can't attack..." << endl;
}

void ClapTrap::takeDomage(unsigned int amount)
{
	cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		cout << "ClapTrap " << _name << " recovers " << amount << " hit points." << endl;
		_hitPoints += amount;
		_energyPoints--;
	}
	else
		cout << "ClapTrap " << _name << " can't recover hit points..." << endl;

}

void ClapTrap::setName(string name)
{
	_name = name;
}

void ClapTrap::setHitPoints(int hits)
{
	_hitPoints = hits;
}

void ClapTrap::setEnergyPoints(int energy)
{
	_energyPoints = energy;
}

void ClapTrap::setAttackDamage(int damage)
{
	_attackDamage = damage;
}

string ClapTrap::getName(void) const
{
	return _name;
}

int ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return _attackDamage;
}
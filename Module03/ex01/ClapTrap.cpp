/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:36 by romain            #+#    #+#             */
/*   Updated: 2023/11/14 15:26:50 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(void) : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "ClapTrap default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	cout << "ClapTrap copy constructor called" << endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
}

ClapTrap::~ClapTrap(void)
{
	cout << "ClapTrap destructor called" << endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	cout << "ClapTrap assignation operator called" << endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints <= 0)
		cout << _name << " is DEAD !" << endl;
	else
		cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << endl;
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

void ClapTrap::getStatus(void) const
{
	cout << "Name: " << _name << endl;
	cout << "Hits points: " << _hitPoints << endl;
	cout << "Energy points: " << _energyPoints << endl;
	cout << "Attack Damage: " << _attackDamage << endl;
}
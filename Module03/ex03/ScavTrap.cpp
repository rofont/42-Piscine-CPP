/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:20:29 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/16 10:12:44 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int ScavTrap::defaultEp = 50;

ScavTrap::ScavTrap(void) : ClapTrap("no name"), _guardGate(false)
{
	_hitPoints = 100;
	_energyPoints = this->getScavEnergyPoints();
	_attackDamage = 20;
	cout << "ScavTrap " << _name << "_ Default constructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	_guardGate = false;
	_hitPoints = 100;
	_energyPoints = this->getScavEnergyPoints();
	_attackDamage = 20;
	cout << "ScavTrap " << _name << " _Constructor called" << endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	this->_guardGate = copy._guardGate;
	cout << "ScavTrap " << _name << "_ copy constructor called" << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << "ScavTrap " << _name << "_ destructor called" << endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	this->_guardGate = src._guardGate;
	cout << "ScavTrap " << _name << "_ assignation operator called" << endl;
	return *this;
}

void ScavTrap::guardGate(void)
{
	if(_hitPoints > 0)
	{
		if(_guardGate == false)
		{
			_guardGate = true;
			cout << _name << " enter in guard gate mode !" << endl;
		}
		else
		{
			_guardGate = false;
			cout << _name << " exit guard gate mode !" << endl;
		}
	}
	else
			cout << _name << " can't guard gate because he's dead !" << endl;

}

int const &ScavTrap::getScavEnergyPoints(void) const
{
	return this->defaultEp;
}
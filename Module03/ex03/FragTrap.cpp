/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:33 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/16 10:08:48 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::cout;
using std::endl;

int FragTrap::defaultHp = 100;
int FragTrap::defaultAd = 30;

FragTrap::FragTrap(void) : ClapTrap("no name")
{
	_hitPoints = this->getFragHitPoints();
	_energyPoints = 100;
	_attackDamage = this->getFragAttackDamage();
	cout << "FragTrap " << _name << "_ Default constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	_hitPoints = this->getFragHitPoints();
	_energyPoints = 100;
	_attackDamage = this->getFragAttackDamage();
	cout << "FragTrap " << _name << "_ Constructor called" << endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	cout << "FragTrap " << _name << "_ Copy constructor called" << endl;
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap " << _name << "_ Destructor called" << endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	cout << "FragTrap " << _name << "_ assignation operator called" << endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	cout << _name << " says: Give me high five guys !" << endl;
}

int const &FragTrap::getFragHitPoints(void) const
{
	return this->defaultHp;
}

int const &FragTrap::getFragAttackDamage(void) const
{
	return this->defaultAd;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/16 11:00:10 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void) : ClapTrap("no name_clap_trap")
{
	ClapTrap::_name = "no_name_clap_name";
	_name = "no name";
	this->_hitPoints = getFragHitPoints();
 	this->_energyPoints = getScavEnergyPoints();
	this->_attackDamage = getFragAttackDamage();
	cout << "DiamondTrap " << _name << "_ default constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name)
{
	ClapTrap::_name.append("_clap_name");
	_name = name;
	this->_hitPoints = getFragHitPoints();
 	this->_energyPoints = getScavEnergyPoints();
	this->_attackDamage = getFragAttackDamage();
	cout << "DiamondTrap " << _name << "_ Constructor called" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy.getFragHitPoints();
 	this->_energyPoints = copy.getScavEnergyPoints();
	this->_attackDamage = copy.getFragAttackDamage();
	cout << "DiamondTrap " << _name << "_ Copy constructor called" << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap " << _name << "_ destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	this->_name = src._name;
	this->_hitPoints = src.getFragHitPoints();
 	this->_energyPoints = src.getScavEnergyPoints();
	this->_attackDamage = src.getFragAttackDamage();
	cout << "DiamondTrap " << _name << "_ Copy constructor called" << endl;
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	cout << _name << " to be or not to be ?" << endl;
}


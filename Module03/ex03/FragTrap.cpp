/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:33 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 22:19:48 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap(void) : ClapTrap("no name")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	cout << "FragTrap " << _name << "_ Default constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
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

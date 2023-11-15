/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:45:33 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 13:13:12 by rofontai         ###   ########.fr       */
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
	cout << "FragTrap default Constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	cout << "FragTrap Constructor called" << endl;
}

FragTrap::FragTrap(FragTrap &copy)
{
	cout << "FragTrap copy constructor called" << endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap destructor called" << endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	cout << "FragTrap assignation operator called" << endl;
	this->setName(src.getName());
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	cout << _name << " says: Give me high five guys !" << endl;
}

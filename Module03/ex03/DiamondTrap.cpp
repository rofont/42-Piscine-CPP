/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 22:34:36 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void) : ClapTrap("no name_clap_name"), ScavTrap(), FragTrap(),
{
  _name = "no name";
	_hitPoints = 100;
 	_energyPoints = 50;
	_attackDamage = 30;
	cout << "DiamondTrap " << _name << "_ default constructor called" << endl;
}

DiamondTrap::DiamondTrap(string name)
{
	ClapTrap::_name.append("_clap_name");
	_name = name;
	_hitPoints = 100;
 	_energyPoints = 50;
	_attackDamage = 30;
	cout << "DiamondTrap Constructor called" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{}

DiamondTrap::~DiamondTrap(void)
{}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{}

void DiamondTrap::whoIam(void)
{}
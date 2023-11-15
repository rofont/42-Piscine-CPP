/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/15 13:14:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(void) : ClapTrap("no name"), ScavTrap(), FragTrap()
{
	cout << "DiamondTrap default constructor called" << endl;
	_hitPoints = 100;
 	_energyPoints = 50;
	_attackDamage = 30;
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

DiamondTrap::DiamondTrap &operator=(DiamondTrap const &src)
{}

void DiamondTrap::whoIam(void)
{}
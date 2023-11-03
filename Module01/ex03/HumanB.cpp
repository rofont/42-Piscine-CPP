/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:08 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 11:40:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(void)
{
	//message de construction
}

HumanB::HumanB(string name) :  _weapon(NULL), _name(name)
{
	//message de construction
}

HumanB::~HumanB(void)
{
	// cout << _weapon->getType() << " has been destroyed" << endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	delete _weapon;
	_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	//gérer si pas d'arme
	cout << _name << " attacks with their " << _weapon->getType() << endl;
}

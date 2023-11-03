/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:08 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 13:19:07 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;


HumanB::HumanB(string name) :  _weapon(NULL), _name(name)
{
	cout << _name << " has been created " << endl;
}

HumanB::~HumanB(void)
{
	cout << _name << " and his weapons have been destroyed" << endl;
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

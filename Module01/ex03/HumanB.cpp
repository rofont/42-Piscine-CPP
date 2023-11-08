/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:08 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/08 09:25:22 by rofontai         ###   ########.fr       */
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
	if (_weapon)
		cout << _name << " attacks with their " << _weapon->getType() << endl;
}

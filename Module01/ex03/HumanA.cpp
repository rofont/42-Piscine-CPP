/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:27 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 13:19:18 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA(string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
	cout << _name << " with their " << _weapon.getType() << " has been created " << endl;
}

HumanA::~HumanA(void)
{
	cout << _name << " and his weapons have been destroyed" << endl;
}

void	HumanA::attack(void) const
{
	cout << _name << " attack with their " << _weapon.getType() << endl;
}
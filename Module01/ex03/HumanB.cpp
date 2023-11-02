/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:08 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 11:40:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(void)
{
}

HumanB::HumanB(Weapon weapon) : _weapon(weapon)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	cout << _name <<  " attacks with their " << _weapon.getType() << endl;
}
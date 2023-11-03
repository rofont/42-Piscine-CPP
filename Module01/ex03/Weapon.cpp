/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:18 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 11:16:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

const string	&Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(string type)
{
	_type = type;
}

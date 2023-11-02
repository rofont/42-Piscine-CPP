/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:26:13 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 10:03:40 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

// Constructor and Destructor
Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	cout << _name << " has been destroyed" << endl;
}

// Fonctions
void	Zombie::setName(string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:26:13 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/01 22:18:36 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

// Constructor and Destructor
Zombie::Zombie(void)
{
}

Zombie::Zombie(string name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	cout << _name << " has been destroyed" << endl;
}

// Fonctions
void	Zombie::announce(void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

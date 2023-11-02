/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:26:13 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 12:42:35 by rofontai         ###   ########.fr       */
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
	if (_name.empty())
		return ;
	cout << _name << " has been destroyed" << endl;
}

// Fonctions
void	Zombie::announce(void)
{
	if(_name.empty())
		return;
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

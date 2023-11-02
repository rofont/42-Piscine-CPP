/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 10:22:10 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		cout << "The numbers of Zombie is not accepted" <<endl;
		exit(EXIT_FAILURE);
	}
	if (name.empty())
	{
		cout << "The Zombie have not name" <<endl;
		exit(EXIT_FAILURE);
	}
	Zombie *myHordeZombie = new Zombie[N];

	for(int i = 0; i < N; i++)
		myHordeZombie[i].setName(name);

	return myHordeZombie;
}

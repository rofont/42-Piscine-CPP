/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/03 14:06:24 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cerr;

Zombie*	zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		cerr << "The numbers of Zombie is not accepted" <<endl;
		exit(EXIT_FAILURE);
	}
	if (name.empty())
	{
		cerr << "The Zombie have not name" <<endl;
		exit(EXIT_FAILURE);
	}
	Zombie *myHordeZombie = new Zombie[N];

	for(int i = 0; i < N; i++)
		myHordeZombie[i].setName(name);

	return myHordeZombie;
}

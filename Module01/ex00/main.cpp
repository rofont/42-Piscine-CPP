/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/01 22:13:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie myZombie("Legion");
	myZombie.announce();
	Zombie *memZombie = newZombie("Armada");
	memZombie->announce();
	randomChump("Torrent");
	delete memZombie;
	return 0;
}
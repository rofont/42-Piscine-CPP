/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 12:44:48 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie myZombie("Torrent");
	Zombie *memZombie = newZombie("Armada");
	myZombie.announce();
	memZombie->announce();
	randomChump("Legion");
	delete memZombie;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:02 by romain            #+#    #+#             */
/*   Updated: 2023/11/15 22:13:05 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;


int main()
{
	ClapTrap first("Igor");
	ClapTrap second(first);
	ScavTrap third("Teach");
	ScavTrap forth("Boggy");
	ScavTrap guard("Guardian");

 	forth = third;
	std::cout << std::endl << std::endl;
	first.attack("Teach");
	for (int i = 0; i < 11 ; i++)
		second.beRepaired(1);
	std::cout << std::endl << std::endl;
	third.takeDamage(5);
	forth.takeDamage(100);
	forth.attack("Guardian");
	forth.beRepaired(1000);
	guard.guardGate();
	guard.attack("Igor");
	guard.beRepaired(10);
	guard.takeDamage(10);
	guard.guardGate();
	guard.attack("Igor");
	std::cout << std::endl << std::endl;
}
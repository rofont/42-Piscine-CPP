/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:02 by romain            #+#    #+#             */
/*   Updated: 2023/11/14 15:12:54 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;


int main()
{
	ClapTrap first("Clappy");
	ClapTrap second(first);
	ScavTrap third("Scavy");
	ScavTrap forth("lol");
	ScavTrap guard("Guardian");

 	forth = third;

	cout << endl;
	first.getStatus();
	second.getStatus();
	third.getStatus();
	forth.getStatus();
	guard.getStatus();

	cout << std::endl << endl;
	first.attack("Clappier");
	for (int i = 0; i < 11 ; i++)
		second.beRepaired(1);

	cout << endl << endl;
	third.takeDamage(5);
	forth.takeDamage(100);
	forth.attack("Clappy");
	forth.beRepaired(1000);
	guard.guardGate();
	guard.attack("Scavy");
	guard.beRepaired(10);
	guard.takeDamage(10);
	guard.guardGate();
	guard.attack("Scavy");

	cout << endl;
	cout << endl << endl;
}
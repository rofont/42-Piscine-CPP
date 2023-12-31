/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:02 by romain            #+#    #+#             */
/*   Updated: 2023/11/15 22:21:00 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(){
	ClapTrap clap("Luffy");
	ScavTrap scav("Zorro");
	FragTrap frag("Sanji");

	cout << endl << endl;
	clap.attack("Zorro");
	clap.takeDamage(5);
	clap.beRepaired(10);
	scav.guardGate();
	scav.attack("Sanji");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
	scav.attack("Luffy");
	frag.highFivesGuys();
	frag.attack("Zorro");
	frag.beRepaired(10);
	frag.takeDamage(10);
	cout << endl << endl;
}
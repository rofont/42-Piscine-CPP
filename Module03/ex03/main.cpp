/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:37:26 by romain            #+#    #+#             */
/*   Updated: 2023/11/15 22:23:23 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavy");
	FragTrap frag("Fraggy");
	DiamondTrap diam("diamy");
	DiamondTrap test(diam);
	DiamondTrap test2("lol");

	std::cout << std::endl << std::endl;
	clap.attack("Clappier");
	clap.takeDamage(5);
	clap.beRepaired(10);
	scav.guardGate();
	scav.attack("Scavier");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
	scav.attack("Scavier");
	frag.highFivesGuys();
	frag.attack("fragier");
	frag.beRepaired(10);
	frag.takeDamage(10);
	diam.guardGate();
	diam.highFivesGuys();
	diam.attack("diamer");
	diam.beRepaired(10);
	diam.takeDamage(10);
	diam.guardGate();
	diam.WhoAmI();
	test.WhoAmI();
	test2.WhoAmI();
	test2 = test;
	test2.WhoAmI();
	std::cout << std::endl << std::endl;
}
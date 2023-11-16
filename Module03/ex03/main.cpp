/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:37:26 by romain            #+#    #+#             */
/*   Updated: 2023/11/16 10:49:18 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	ClapTrap clap("ClapIgor");
	ScavTrap scav("ScavGor");
	FragTrap frag("FragSangoku");
	DiamondTrap diam("DiamondBloody");
	DiamondTrap test(diam);
	DiamondTrap test2("DiamondLoL");

	std::cout << std::endl << std::endl;
	clap.attack("ClapIgor");
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
	diam.whoAmI();
	test.whoAmI();
	test2.whoAmI();
	test2 = test;
	test2.whoAmI();
	std::cout << std::endl << std::endl;
}
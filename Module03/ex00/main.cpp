/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:02 by romain            #+#    #+#             */
/*   Updated: 2023/11/15 22:01:10 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;


int main (void)
{
	ClapTrap first("Igor");
	ClapTrap second(first);
	ClapTrap third("Boggy");
	ClapTrap forth("Teach");

	forth = third;
	first.attack("Boggy");
	for (int i = 0; i < 11 ; i++)
		second.beRepaired(1);
	third.takeDamage(5);
	forth.takeDamage(100);
	forth.attack("Igor");
	forth.beRepaired(1000);

	return 0;
}
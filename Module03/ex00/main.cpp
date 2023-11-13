/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:02 by romain            #+#    #+#             */
/*   Updated: 2023/11/13 16:13:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using std::cout;
using std::endl;


int main (void)
{
	ClapTrap Pierre("Igor");
	ClapTrap Paul;

	Pierre.setAttackDamage(10);
	Paul.setAttackDamage(5);

	Paul.attack("Igor");
	Pierre.takeDomage(5);
	Pierre.attack("No name");
	Paul.takeDomage(10);
	Paul.beRepaired(5);
	Pierre.attack("No name");
	Paul.takeDomage(10);

	return 0;
}
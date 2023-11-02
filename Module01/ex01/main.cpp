/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 10:37:51 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nb = 100;
	string name = "jean";

	Zombie *myHorde = zombieHorde(nb, name);
	for(int i = 0; i < nb; i++)
	{
		cout << "[" << i+1 << "] ";
		myHorde[i].announce();
	}
	delete [] myHorde;
	return 0;
}
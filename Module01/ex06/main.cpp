/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:08 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/06 16:18:02 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cerr;
using std::endl;

int main (int ac, char **av)
{
	Harl history;
	if (ac != 2)
		cerr << "Nomber of arguments is wrong" << endl;
	else
		history.complain(av[1]);
	return 0;
}

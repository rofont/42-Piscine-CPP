/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:50:19 by romain            #+#    #+#             */
/*   Updated: 2023/11/03 15:52:02 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		cerr << "🚨 ./replace <filename> <string1> <string2>" << endl;
		exit(EXIT_FAILURE);
	}

	string name_file = av[1];
	string current = av[2];
	string replace = av[3];

	std::fstream myFlux(name_file);
	if (!myFlux)
	{
		cerr << "🚨 This file is wrong or you don't have acces" << endl;
		exit(EXIT_FAILURE);
	}




	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:50:19 by romain            #+#    #+#             */
/*   Updated: 2023/11/06 11:26:24 by rofontai         ###   ########.fr       */
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

	std::ifstream myFlux(name_file);
	if (!myFlux)
	{
		cerr << "🚨 This file is wrong or you don't have acces" << endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream myNew(name_file.append(".replace"));
	string line;
	while (getline(myFlux, line))
	{
		size_t pos = line.find(current);
		while (pos != string::npos)
		{
			line.erase(pos, current.length());
			line.insert(pos, replace);
			pos = line.find(current, pos + replace.length());
		}
		myNew << line << endl;
	}
	myFlux.close();
	myNew.close();
	return 0;
}
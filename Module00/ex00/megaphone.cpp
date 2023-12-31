/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:11 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/26 11:44:12 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main (int ac, char **av)
{
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for(int i = 1; i < ac; i++)
		{
			string temp(av[i]);
			for (size_t j = 0; j < temp.size(); j++)
				cout << (char)toupper(temp[j]);
		}
		cout << endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/02 10:54:08 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


int main (void)
{
	string brain = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	string &stringREF = brain;

	cout << "L'adresse de la string en mémoire: " << &brain << endl;
	cout << "L'adresse stockée dans stringPTR: " << &stringPTR << endl;
	cout << "L'adresse stockée dans stringREF: " << &stringREF << endl;

	cout << "La valeur de la string: " << brain << endl;
	cout << "La valeur pointée par stringPTR: " << *stringPTR << endl;
	cout << "La valeur pointée par stringREF: " << stringREF << endl;

	return 0;
}

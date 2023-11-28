/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/28 06:30:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main ()
{
	cout <<CYA "----- TEST -----" WHT<< endl << endl;

	cout <<CYA "----- CONSTRUCTOR -----" WHT<< endl << endl;

	Bureaucrat Paul("Paul", 42);
	Bureaucrat Pierre("Pierre", 10);
	Bureaucrat Jean(Paul);
	Bureaucrat Louis("Louis", 0);
	Bureaucrat Michel("Michel", 151);

	cout << Louis << endl;
	cout << Michel << endl;
	cout << Paul << endl;
	Paul = Pierre;
	cout << Paul << endl;
	cout << Jean << endl;
	cout << Pierre << endl;

	cout <<CYA "----- CONSTRUCTOR -----" WHT<< endl << endl;

	return 0;
}

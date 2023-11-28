/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/28 11:41:51 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::cerr;

int main ()
{
	cout <<CYA "----- TEST -----" WHT<< endl << endl;

	cout <<CYA "----- TOO LOW -----" WHT<< endl << endl;
	try
	{
		Bureaucrat Paul("Paul", 145);
		cout << Paul << endl;

		for (int i = 0; i < 6; i++)
		{
			Paul.decrement();
			cout << Paul << " i = " << i << endl;
		}
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- TOO HIGH -----" WHT<< endl << endl;
	try
	{
		Bureaucrat Pierre("Pierre", 5);
		cout << Pierre << endl;

		for (int i = 0; i < 5; i++)
		{
			Pierre.increment();
			cout << Pierre << " i = " << i << endl;
		}
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- GRADE OK -----" WHT<< endl << endl;

	Bureaucrat Jacky("Jacky", 50);
	cout << Jacky << endl;
	Bureaucrat Michelle("Michelle", 100);
	cout << Michelle << endl;

	Michelle = Jacky;
	cout << Michelle << endl;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/29 14:47:15 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;
using std::cerr;

int main ()
{
	cout <<CYA "----- TEST -----" WHT<< endl << endl;

	cout <<CYA "----- TOO LOW -----" WHT<< endl << endl;
	Bureaucrat Paul("Paul", 145);
	try
	{
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
	Bureaucrat Pierre("Pierre", 5);
	try
	{
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

	cout << endl <<CYA "----- TEST FORM TO HIGH -----" WHT<< endl << endl;
	try
	{
		Form test("TEST", 0, 150);
		cout << test << endl;
		test.beSigned(Michelle);
		Michelle.signForm(test);
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- TEST FORM TO HIGH -----" WHT<< endl << endl;
	try
	{
		Form test("TEST", 151, 150);
		cout << test << endl;
		test.beSigned(Jacky);
		Jacky.signForm(test);
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- TEST FORM TO HIGH -----" WHT<< endl << endl;
	try
	{
		Form test("TEST", 0, 150);
		cout << test << endl;
		test.beSigned(Michelle);
		Michelle.signForm(test);
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- TEST GOOD FORM -----" WHT<< endl << endl;
	Form Good("GOOD", 101, 100);
	try
	{
		cout << Good << endl;
		Jacky.signForm(Good);
		cout << Good << endl;
		Form Bad("BAD", 10, 100);
		Bad = Good;
		Michelle.signForm(Bad);
	}
	catch (std::exception & e)
	{
		cerr << e.what() << endl;
	}

	cout << endl <<CYA "----- DESTRUCTOR -----" WHT<< endl << endl;
	// cout << endl <<CYA "----- TEST FORM -----" WHT<< endl << endl;

	// Form big("BIG", 5, 10);
	return 0;
}

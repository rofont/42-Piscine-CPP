/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 08:43:54 by romain            #+#    #+#             */
/*   Updated: 2024/01/10 13:35:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

class Base {
	public:
		virtual ~Base(void) {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};
class Error: public Base {};


Base	*generate(void) {
	std::srand(std::time(0));
	int random = std::rand()%5;
	switch(random) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		case 3:
			return new Error;
		default:
			return NULL;
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A *>(p))
		cout << "This is a A class" << endl;
	else if (dynamic_cast<B *>(p))
		cout << "This is a B class" << endl;
	else if (dynamic_cast<C *>(p))
		cout << "This is a C class" << endl;
	else
		cout << "This class is not recognized" << endl;
}

void	identify(Base &p) {
	try {
		Base &tempA = dynamic_cast<A &>(p);
		(void)tempA;
		cout << "This is a A class" << endl;
	}
	catch (std::exception) {
		try {
			Base &tempB = dynamic_cast<B &>(p);
			(void)tempB;
			cout << "This is a B class" << endl;
		}
		catch (std::exception) {
			try {
				Base &tempC = dynamic_cast<C &>(p);
				(void)tempC;
				cout << "This is a C class" << endl;
			}
			catch (std::exception) {
				cout << "This class is not recognized" << endl;
			}
		}
	}
}

int main(void)
{
	Base *test = generate();
	identify(test);
	if (test != NULL)
		identify(*test);
	delete test;
	return 0;
}
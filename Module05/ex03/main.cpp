/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:32:37 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 22:23:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

using std::exception;
using std::cout;
using std::endl;

void printTitle(const std::string& title) {
	cout << endl << YEL << "--------------------------------------" << endl;
	cout << CYA << title << WHT << std::endl;
	cout << YEL << "--------------------------------------" << WHT << endl << endl;
}

int main(void)
{
	printTitle("INIT BUREAUCRAT");
	Bureaucrat Bessie("Bessie", 1);
	Bureaucrat Fabrice("Fabrice", 150);
	try {
		Bureaucrat Poule("Poule", 151);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Bureaucrat Bougi("Bougi", 0);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	Bureaucrat Aline("Aline", 42);

	printTitle("PRINT INFO");
	cout << Bessie << endl;
	cout << Fabrice << endl;
	cout << Aline << endl;

	printTitle("INCREMENT / DECREMENT");
	cout << "BEFORE " << Fabrice << endl;
	try {
		for (int i = 0; i < 7; i++)
			Fabrice.increment();
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << "AFTER " << Fabrice << endl;
	cout << "BEFORE " << Bessie << endl;

	try {
		for (int i = 0; i < 3; i++)
			Bessie.decrement();
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << "AFTER " << Bessie << endl;
	cout << "BEFORE " << Aline << endl;

	try {
		for (int i = 0; i < 18; i++)
			Aline.increment();
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << "AFTER " << Aline << endl;

	printTitle("PRESIDENTIAL PARDON FORM");
	PresidentialPardonForm ppf("Gille");
	try {
		Bessie.executeForm(ppf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Aline.signForm(ppf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Bessie.executeForm(ppf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("ROBOTOMY REQUEST FORM");
	RobotomyRequestForm rrf("JCV");
	try {
		Bessie.executeForm(rrf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Aline.signForm(rrf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Bessie.executeForm(rrf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("SHRUBBERY CREATION FORM");
	ShrubberyCreationForm scf("Rudolph");
	try {
		Bessie.executeForm(scf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Aline.signForm(scf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Fabrice.executeForm(scf);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("INTERN");
	Intern Pierre;
	AForm *form1 = Pierre.makeForm("presidential pardon", "F1");
	AForm *form2 = Pierre.makeForm("robotomy request", "F2");
	AForm *form3 = Pierre.makeForm("shrubbery creation", "F3");
	AForm *form4;
	(void)form4;
	try {
		form4 = Pierre.makeForm("willi waller 2006", "Bob");
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("INTERN - SIGN FORM");
	try {
		Aline.signForm(*form1);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Fabrice.signForm(*form2);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Aline.signForm(*form3);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("INTERN - SIGN");
	try {
		Fabrice.executeForm(*form1);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Aline.executeForm(*form2);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}
	try {
		Bessie.executeForm(*form3);
	}
	catch (exception &e) {
		cout << e.what() << endl;
	}

	printTitle("DESTRUCTOR");
	delete form1;
	delete form2;
	delete form3;

	return 0;
}
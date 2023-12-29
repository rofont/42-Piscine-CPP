/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:23:56 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 22:25:47 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

Intern::Intern(void) {
	cout << "INTERN Default Constructor" << endl;
}

Intern::Intern(Intern &copy) {
	cout << "INTERN Copy Constructor" << endl;
	*this = copy;
}

Intern::~Intern(void) {
	cout << "INTERN Default Destructor" << endl;
}

AForm *Intern::makePPF(string &target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeRRF(string &target) {
	return new RobotomyRequestForm(target);
}

AForm *Intern::makeSCF(string &target) {
	return new ShrubberyCreationForm(target);
}

Intern &Intern::operator=(Intern const &src) {
	cout << "INTERN Assignation Operator" << endl;
	if (this != &src)
		return *this;
	return *this;
}

AForm	*Intern::makeForm(string form, string target) {

	string formName[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *(Intern::*fctlTab[])(string &target) = {&Intern::makePPF, &Intern::makeRRF, &Intern::makeSCF};

	for (int i = 0; i < 3; i++) {
		if (form == formName[i]) {
			cout << "Intern creates " << form << endl;
			return (this->*fctlTab[i])(target);
		}
	}
	throw FormNotFound();
}

exception Intern::FormNotFound(void) const {
	throw std::invalid_argument("Learns how to write a form name");
}
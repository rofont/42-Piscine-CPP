/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:49:40 by rofontai          #+#    #+#             */
/*   Updated: 2023/12/28 11:28:47 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

Bureaucrat::Bureaucrat(string const name, unsigned int grade) : _name(name), _grade(grade)
{
	cout << "BUREAUCRAT Constructor" << endl;
	if(grade < 1)
	{
		cout << _name << " ";
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		cout << _name << " ";
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	cout << "BUREAUCRAT Copy Constructor" << endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
	cout << "BUREAUCRAT Destructor" << endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	cout << "BUREAUCRAT Assigantion Operator" << endl;
	if(this != &src)
		_grade = src._grade;
	return *this;
}

const string	&Bureaucrat::getName(void) const
{
	return _name;
}

const unsigned int	&Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::increment(void)
{
	if(_grade > 1)
		_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrement(void)
{

	if(_grade < 150)
		_grade++;
	else
		throw GradeTooLowException();
}

exception		Bureaucrat::GradeTooHighException(void)
{
	throw std::invalid_argument("Grade Too High");
}
exception		Bureaucrat::GradeTooLowException(void)
{
	throw std::invalid_argument("Grade Too Low");
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		cout << _name << " signed " << form.getNameForm() << endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't sign "<< form.getNameForm() << " because " << e.what() << endl;
	}
}

void	Bureaucrat::executeForm(AForm &form)
{
	try
	{
		form.beExecute(*this);
		// cout << _name << " executed " << form.getNameForm() << endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't execute "<< form.getNameForm() << " because " << e.what() << endl;
	}
}


ostream &operator<<(ostream &out, Bureaucrat const &bureau)
{
	out << "Name = " << bureau.getName() << ", Grade = " << bureau.getGrade();
	return out;
}
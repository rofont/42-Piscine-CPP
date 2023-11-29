/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:00 by romain            #+#    #+#             */
/*   Updated: 2023/11/29 14:48:04 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

using std::cout;
using std::endl;

Form::Form(string name, unsigned int sign, unsigned int exec) : _name(name), _signed(false), _gradeSign(sign), _gradeExec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	cout << "FORM Constructor" << endl;
}
Form::Form(Form &copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	cout << "FORM Copy Constructor" << endl;
}

Form::~Form(void)
{
	cout << "FORM Destructor" << endl;
}

Form	&Form::operator=(Form const &src) //TODO a travailer
{
	cout << "FORM Assignation Operator" << endl;
	if (this != &src)
		*this = src;
	return *this;
}

const string		&Form::getNameForm(void) const
{
	return _name;
}

const bool			&Form::getSigned(void) const
{
	return _signed;
}

const unsigned int	&Form::getGradeSign(void) const
{
	return _gradeSign;
}

const unsigned int	&Form::getGradeExec(void) const
{
	return _gradeExec;
}

void	Form::beSigned(Bureaucrat &bureau)
{
	if ((bureau.getGrade() <= _gradeSign) && _signed == false)
	{
		cout << "FORM " << _name << " has been signed by " << bureau.getName() << endl;
		_signed = true;
	}
	else if ((bureau.getGrade() <= _gradeSign) && _signed == true)
		throw std::invalid_argument("This form is already signed");
	else
		throw Form::GradeTooHighException();

}

exception	Form::GradeTooHighException(void)
{
	throw std::invalid_argument("Form has a Grade Too High");
}

exception	Form::GradeTooLowException(void)
{
	throw std::invalid_argument("Form has a Grade Too Low");
}

ostream &operator<<(ostream &out, Form const &form)
{
	out << "Name = " << form.getNameForm() <<", Signed = " << form.getSigned() << ", GradeSign = " << form.getGradeSign() << ", GradeExec = " << form.getGradeExec();
	return out;
}
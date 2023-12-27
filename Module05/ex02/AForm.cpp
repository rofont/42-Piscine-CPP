/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:00 by romain            #+#    #+#             */
/*   Updated: 2023/12/27 16:27:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

using std::cout;
using std::endl;

AForm::AForm(string name, unsigned int sign, unsigned int exec) : _name(name), _signed(false), _gradeSign(sign), _gradeExec(exec)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	cout << "AFORM Constructor" << endl;
}
AForm::AForm(AForm &copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
	cout << "AFORM Copy Constructor" << endl;
}

AForm::~AForm(void)
{
	cout << "AFORM Destructor" << endl;
}

AForm	&AForm::operator=(AForm const &src)
{
	cout << "AFORM Assignation Operator" << endl;
	if (this != &src)
		_signed = src._signed;
	return *this;
}

const string		&AForm::getNameForm(void) const
{
	return _name;
}

const bool			&AForm::getSigned(void) const
{
	return _signed;
}

const unsigned int	&AForm::getGradeSign(void) const
{
	return _gradeSign;
}

const unsigned int	&AForm::getGradeExec(void) const
{
	return _gradeExec;
}

void	AForm::beSigned(Bureaucrat &bureau)
{
	if ((bureau.getGrade() <= _gradeSign) && _signed == false)
	{
		// cout << "FORM " << _name << " has been signed by " << bureau.getName() << endl;
		_signed = true;
	}
	else if ((bureau.getGrade() <= _gradeSign) && _signed == true)
		throw std::invalid_argument("This form is already signed");
	else
		throw AForm::GradeTooHighException();

}

exception	AForm::GradeTooHighException(void) const
{
	throw std::invalid_argument("Form has a Grade Too High");
}

exception	AForm::GradeTooLowException(void) const
{
	throw std::invalid_argument("Form has a Grade Too Low");
}

exception AForm::NotSignedException(void) const
{
	throw std::invalid_argument("Form has not been signed");
}

ostream &operator<<(ostream &out, AForm const &form)
{
	out << "Name = " << form.getNameForm() <<", Signed = " << form.getSigned() << ", GradeSign = " << form.getGradeSign() << ", GradeExec = " << form.getGradeExec();
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:34:03 by romain            #+#    #+#             */
/*   Updated: 2023/12/27 16:25:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm(string target) : AForm("PresidentialPardonForm", PPF_SIGN, PPF_EXEC), _target(target)
{
	cout << "PresidentialPardonForm Constructor" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm(copy)
{
	cout << "PresidentialPardonForm Copy Constructor" << endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	cout << "PresidentialPardonForm  Destructor" << endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	cout << "PresidentialPardonForm  Assignation Operator" << endl;
	if (this == &src)
		return *this;
	return *this;
}

void	PresidentialPardonForm::beExecute(Bureaucrat &bureau) const
{
	if (PPF_EXEC < bureau.getGrade())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::NotSignedException();
	else
		cout << _target << " has been pardonned by Zaphod Beeblebrox" << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:16:03 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 11:45:41 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm(string target) : AForm("RobotomyRequestForm", RR_SIGN, RR_EXEC), _target(target)
{
	cout << "RobotomyRequestForm Constructor" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm(copy)
{
	cout << "RobotomyRequestForm Copy Constructor" << endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	cout << "RobotomyRequestForm  Destructor" << endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	cout << "RobotomyRequestForm Assignation Operator" << endl;
	if (this == &src)
		return *this;
	return *this;
}

void	RobotomyRequestForm::beExecute(Bureaucrat const &bureau) const
{
	if (RR_EXEC < bureau.getGrade())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::NotSignedException();
	else
	{
		std::srand(std::time(0));
		int snooze = std::rand();
		if (snooze %2 == 0)
			cout << "THE SOUND OF A DRILL !!" << endl << _target << " has been robotomized" << endl;
		else
			cout << "Sorry bro, your drill is broken and " << _target << " couldn't be robotized"<< endl;
	}
}

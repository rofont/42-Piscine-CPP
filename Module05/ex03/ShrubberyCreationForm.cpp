/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:16:03 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 16:52:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

using std::cout;
using std::endl;

ShrubberyCreationForm::ShrubberyCreationForm(string target) : AForm("ShrubberyCreationForm", SC_SIGN, SC_EXEC), _target(target)
{
	cout << "ShrubberyCreationForm Constructor" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy)
{
	cout << "ShrubberyCreationForm Copy Constructor" << endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	cout << "ShrubberyCreationForm  Destructor" << endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	cout << "ShrubberyCreationForm Assignation Operator" << endl;
	if (this == &src)
		return *this;
	return *this;
}

void	ShrubberyCreationForm::beExecute(Bureaucrat const &bureau) const
{
	if (SC_EXEC < bureau.getGrade())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::NotSignedException();
	else
	{
		cout << bureau.getName() << " executed " << getNameForm() << endl;
		std::ofstream file;
		file.open((_target + "_shrubbery").c_str());
		file << "       *      " << endl;
		file << "      /*\\      " << endl;
		file << "     /\\ *\\     " << endl;
		file << "    /\\O \\*\\    " << endl;
		file << "   /*/\\/ \\/\\   " << endl;
		file << "  /\\O\\/ \\*\\/\\  " << endl;
		file << " /\\*\\/ \\*\\/\\/\\ " << endl;
		file << "/\\O\\/ \\/*/\\/O/\\" << endl;
		file << "      | |      " << endl;
		file << "      | |      " << endl;
		file << endl;
		file.close();
	}
}

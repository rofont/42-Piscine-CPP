/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:56 by romain            #+#    #+#             */
/*   Updated: 2023/11/29 08:40:08 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

using std::string;
using std::ostream;
using std::exception;

class Bureaucrat;

class Form
{
	public:
		Form(string name, unsigned int sign, unsigned int exec);
		Form(Form &copy);
		~Form(void);

		Form	&operator=(Form const &src);

		const string		&getNameForm(void) const;
		const bool			&getSigned(void) const;
		const unsigned int	&getGradeSign(void) const;
		const unsigned int	&getGradeExec(void) const;

		void	beSigned(Bureaucrat &bureau);

		exception	GradeTooHighException(void);
		exception	GradeTooLowException(void);

	private:
		Form(void);

		string const			_name;
		bool					_signed;
		unsigned int const		_gradeSign;
		unsigned int const		_gradeExec;
};

ostream &operator<<(ostream &out, Form const &form);

#endif
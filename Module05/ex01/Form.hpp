/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:56 by romain            #+#    #+#             */
/*   Updated: 2023/11/28 21:25:33 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

using std::string;
using std::ostream;
using std::exception;

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(Form const &copy);
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
		string			_name;
		bool			_signed;
		unsigned int	_gradeSign;
		unsigned int	_gradeExec;
};

ostream &operator<<(ostream &out, Form const &form);

#endif
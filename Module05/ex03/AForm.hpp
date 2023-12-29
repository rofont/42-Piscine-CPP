/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:56 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 22:17:58 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

using std::string;
using std::ostream;
using std::exception;

class Bureaucrat;

class AForm
{
	public:
		AForm(string name, unsigned int sign, unsigned int exec);
		AForm(AForm &copy);
		virtual ~AForm(void);

		AForm	&operator=(AForm const &src);

		const string		&getNameForm(void) const;
		const bool			&getSigned(void) const;
		const unsigned int	&getGradeSign(void) const;
		const unsigned int	&getGradeExec(void) const;

		void	beSigned(Bureaucrat &bureau);
		virtual	void	beExecute(Bureaucrat const &bureau) const = 0;

		exception	GradeTooHighException(void) const;
		exception	GradeTooLowException(void) const;
		exception 	NotSignedException(void) const;

	private:
		AForm(void);

		string const			_name;
		bool					_signed;
		unsigned int const		_gradeSign;
		unsigned int const		_gradeExec;
};

ostream &operator<<(ostream &out, AForm const &form);

#endif
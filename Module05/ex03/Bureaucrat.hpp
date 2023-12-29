/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:49:38 by rofontai          #+#    #+#             */
/*   Updated: 2023/12/28 11:18:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// COLORS----------------------------------------------------------------------
# define BCK "\x1B[30m"
# define RED "\x1B[31m"
# define GRE "\x1B[32m"
# define YEL "\x1B[33m"
# define BLE "\x1B[34m"
# define MAG "\x1B[35m"
# define CYA "\x1B[36m"
# define WHT "\x1B[37m"
//-----------------------------------------------------------------------------

# include <iostream>
# include <string>
# include "AForm.hpp"

using std::string;
using std::ostream;
using std::exception;

class AForm;
class Bureaucrat
{
	public:
		Bureaucrat(string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);

		Bureaucrat				&operator=(Bureaucrat const &src);

		const string			&getName(void) const;
		const unsigned int		&getGrade(void) const;

		void					increment(void);
		void					decrement(void);

		exception				GradeTooHighException(void);
		exception				GradeTooLowException(void);

		void					signForm(AForm &form);
		void					executeForm(AForm &form);


	private:

		Bureaucrat(void);
		const string			_name;
		unsigned int			_grade;
};

ostream &operator<<(ostream &out, Bureaucrat const &bureau);

#endif
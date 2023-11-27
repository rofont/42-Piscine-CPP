/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:49:38 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/27 15:07:29 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

using std::string;
using std::ostream;
using std::exception;

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


	private:

		Bureaucrat(void);
		const string			_name;
		unsigned int			_grade;
};

ostream &operator<<(ostream &out, Bureaucrat const &bureau);

#endif
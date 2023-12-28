/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:16:08 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 16:47:23 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# define SC_SIGN 145
# define SC_EXEC 137

class ShrubberyCreationForm : public AForm
{
	private:
		string _target;

	public:
		ShrubberyCreationForm(string target);
		ShrubberyCreationForm(ShrubberyCreationForm & copy);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

		void	beExecute(Bureaucrat const &bureau) const;

};

#endif
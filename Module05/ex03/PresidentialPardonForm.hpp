/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:34:07 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 10:48:46 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

# define PPF_SIGN 25
# define PPF_EXEC 5

class PresidentialPardonForm : public AForm
{
	private:
		string _target;
	public:
		PresidentialPardonForm(string target);
		PresidentialPardonForm(PresidentialPardonForm &copy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

		void	beExecute(Bureaucrat const &bureau) const;
};

#endif
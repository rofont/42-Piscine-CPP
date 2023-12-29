/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:16:08 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 10:49:22 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# define RR_SIGN 72
# define RR_EXEC 45

class RobotomyRequestForm : public AForm
{
	private:
		string _target;

	public:
		RobotomyRequestForm(string target);
		RobotomyRequestForm(RobotomyRequestForm & copy);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

		void	beExecute(Bureaucrat const &bureau) const;

};

#endif
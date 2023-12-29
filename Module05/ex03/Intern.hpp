/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:23:58 by romain            #+#    #+#             */
/*   Updated: 2023/12/28 22:08:40 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

class Intern
{
	private:

	public:
	Intern(void);
	Intern(Intern &copy);
	~Intern(void);

	Intern &operator=(Intern const &src);

	AForm *makePPF(string &target);
	AForm *makeRRF(string &target);
	AForm *makeSCF(string &target);

	AForm	*makeForm(string form, string target);

	exception FormNotFound(void) const;
};

#endif
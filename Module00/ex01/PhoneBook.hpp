/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/27 15:46:25 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:

	PhoneBook();
	~PhoneBook();

	void	display_contact(int i) const;
	void	add_contact(void);
	void	display(int nb);
	void	search_contact(void);
	void	exit_exec(void) const;

	private:

	Contact	_contact[8];
	int 	_index;
	int		_nb_contact;
};


#endif
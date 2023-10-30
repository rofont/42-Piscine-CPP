/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:31 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/30 15:38:26 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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

# include "Contact.hpp"
# include <iomanip>

using std::cout;
using std::cin;
using std::endl;

class PhoneBook
{
	public:

	PhoneBook();
	~PhoneBook();

	void	display_contact(int i) const;
	void	add_contact(void);
	void	display(int nb);
	void	search_contact(void);
	void	display_menu(void) const;
	void	exit_exec(void) const;

	private:

	Contact	_contact[8];
	int 	_index;
	int		_nb_contact;
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:26 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/30 15:31:04 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using std::string;

class Contact
{
	public:

	Contact();
	~Contact();

	void	set_first(string first);
	void	set_last(string last);
	void	set_nick(string nick);
	void	set_phone(string phone);
	void	set_secret(string secret);

	string	get_first(void) const;
	string	get_last(void) const;
	string	get_nick(void) const;
	string	get_phone(void) const;
	string	get_secret(void) const;

	private:

	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_phone_number;
	string	_darkest_secret;
};

#endif
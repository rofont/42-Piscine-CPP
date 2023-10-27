/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:26 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/27 14:10:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
# include <sstream>
# include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::istringstream;

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

	void	get_first(void) const;
	void	get_last(void) const;
	void	get_nick(void) const;
	void	get_phone(void) const;
	void	get_secret(void) const;


	private:

	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_phone_number;
	string	_darkest_secret;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/30 10:42:39 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

// default constructor and destructor
Contact::Contact()
{
}

Contact::~Contact()
{
}

// set fonctions
void	Contact::set_first(string first)
{
	_first_name = first;
}

void	Contact::set_last(string last)
{
	_last_name = last;
}

void	Contact::set_nick(string nick)
{
	_nickname = nick;
}

void	Contact::set_phone(string phone)
{
	_phone_number = phone;
}

void	Contact::set_secret(string secret)
{
	_darkest_secret = secret;
}

// get fonctions
string	Contact::get_first(void) const
{
	return _first_name;
}

string	Contact::get_last(void) const
{
	return _last_name;
}

string	Contact::get_nick(void) const
{
	return _nickname;
}

string	Contact::get_phone(void) const
{
	return _phone_number;
}

string	Contact::get_secret(void) const
{
	return _darkest_secret;
}
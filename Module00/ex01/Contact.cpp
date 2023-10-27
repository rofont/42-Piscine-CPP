/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/27 13:58:32 by romain           ###   ########.fr       */
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
void	Contact::get_first(void) const
{
	cout <<GRE "first name: " WHT<< _first_name << endl;
}

void	Contact::get_last(void) const
{
	cout <<GRE "last name: " WHT<< _last_name << endl;
}

void	Contact::get_nick(void) const
{
	cout <<GRE "nickname: " WHT<< _nickname << endl;
}

void	Contact::get_phone(void) const
{
	cout <<GRE "phone number: " WHT<< _phone_number << endl;
}

void	Contact::get_secret(void) const
{
	cout <<GRE "darkset secret: " WHT<< _darkest_secret << endl;
}
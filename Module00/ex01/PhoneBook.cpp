/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:28 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/27 15:47:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0), _nb_contact(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::display_contact(int i) const
{
	if (i < 1 || i > 8 || i > _nb_contact)
	{
		cout << endl <<RED "this contact does not exist" WHT<< endl;
		return ;
	}
	if (i >= 1 && i <= 8)
	{
		cout <<MAG "Contact #" << i << endl;
		_contact[i-1].get_first();
		_contact[i-1].get_last();
		_contact[i-1].get_nick();
		_contact[i-1].get_phone();
		_contact[i-1].get_secret();
	}
}

void	PhoneBook::display(int nb)
{
	for (int i = 0; i < nb; i++)
		display_contact(i);
}


void	PhoneBook::add_contact(void)
{
	string name;
	if (_index == 7)
		_index = 0;
	cout << " First name: ";
	getline(cin,name);
	_contact[_index].set_first(name);
	cout << " Last name: ";
	getline(cin,name);
	_contact[_index].set_last(name);
	cout << " Nickname: ";
	getline(cin,name);
	_contact[_index].set_nick(name);
	cout << " Phone number: ";
	getline(cin,name);
	_contact[_index].set_phone(name);
	cout << " Darknest secret: ";
	getline(cin,name);
	_contact[_index].set_secret(name);
	_index++;
	if (_nb_contact != 8)
		_nb_contact++;
}

void	PhoneBook::exit_exec(void) const
{
		cout << CYA "Bye !" WHT<< endl;
		exit(EXIT_SUCCESS);
}

void	PhoneBook::search_contact(void)
{
	string search;
	if (_nb_contact == 0)
	{
		cout << " There is no contact. Please ADD a contact before SEARCH" << endl;
		return ;
	}
	cout << endl << "Which contact do you want ?" << endl;
	cout << "the number must be between 1 and " << _nb_contact << endl;
	cout << "> ";
	getline(cin, search);
	int i = atoi(search.c_str());
	display_contact(i);
}
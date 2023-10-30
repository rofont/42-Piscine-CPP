/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:28 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/30 15:42:10 by rofontai         ###   ########.fr       */
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
	if (cin.eof() || cin.fail())
		exit(EXIT_FAILURE);
	if (i >= 1 && i <= 8)
	{
		cout <<MAG "Contact #" << i << endl;
		cout <<GRE "first name: " WHT<< _contact[i-1].get_first() << endl;
		cout <<GRE "last name: " WHT<< _contact[i-1].get_last() << endl;
		cout <<GRE "nickname: " WHT<< _contact[i-1].get_nick() << endl;
		cout <<GRE "phone number: " WHT<< _contact[i-1].get_phone() << endl;
		cout <<GRE "darknest secret: " WHT<< _contact[i-1].get_secret() << endl;
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
	if (cin.eof())
		exit (EXIT_FAILURE);
	if (_index == 8)
		_index = 0;
	cout <<GRE " First name: " WHT;
	getline(cin,name);
	_contact[_index].set_first(name);
	if (cin.eof())
		exit (EXIT_FAILURE);
	cout <<GRE " Last name: " WHT;
	getline(cin,name);
	_contact[_index].set_last(name);
	if (cin.eof())
		exit (EXIT_FAILURE);
	cout <<GRE " Nickname: " WHT;
	getline(cin,name);
	_contact[_index].set_nick(name);
	if (cin.eof())
		exit (EXIT_FAILURE);
	cout <<GRE " Phone number: " WHT;
	getline(cin,name);
	_contact[_index].set_phone(name);
	if (cin.eof())
		exit (EXIT_FAILURE);
	cout <<GRE " Darknest secret: " WHT;
	getline(cin,name);
	_contact[_index].set_secret(name);
	_index++;
	if (_nb_contact != 8)
		_nb_contact++;
	if (cin.eof())
		exit (EXIT_FAILURE);
}

void	PhoneBook::exit_exec(void) const
{
		cout << CYA "Bye !" WHT<< endl;
		exit(EXIT_SUCCESS);
}


void	PhoneBook::display_menu(void) const
{
	cout <<YEL "|----------|----------|----------|----------|" << endl;
	cout << "|     Index|First name| Last name|  Nickname|" << endl;
	cout << "|----------|----------|----------|----------|" << endl;
	for (int i = 0; i < _nb_contact; i++)
	{
		string first_name = _contact[i].get_first();
		string last_name = _contact[i].get_last();
		string nickname = _contact[i].get_nick();
		if (first_name.size() > 10)
			first_name = first_name.substr(0, 9) + ".";
		if (last_name.size() > 10)
			last_name = last_name.substr(0, 9) + ".";
		if (nickname.size() > 10)
			nickname = nickname.substr(0, 9) + ".";
		cout <<YEL "|" << WHT << std::setw(10) << i+1 <<YEL "|";
		cout << WHT << std::setw(10) << first_name <<YEL "|";
		cout << WHT << std::setw(10) << last_name <<YEL "|";
		cout << WHT << std::setw(10) << nickname <<YEL "|" << endl;
		cout << "|----------|----------|----------|----------|" WHT<< endl;
	}
}


void	PhoneBook::search_contact(void)
{
	string search;
	if (cin.eof() || cin.fail())
		exit(EXIT_FAILURE);
	if (_nb_contact == 0)
	{
		cout <<RED " There is no contact. Please ADD a contact before SEARCH" WHT<< endl;
		return ;
	}
	display_menu();
	cout << endl << "Which contact do you want ?" << endl;
	// cout << "the number must be between 1 and " << _nb_contact << endl;
	cout << "> ";
	getline(cin, search);
	int i = atoi(search.c_str());
	if (i < 1 || i > 8 || i > _nb_contact || search.size() > 1)
	{
		cout << endl <<RED "This contact does not exist" WHT<< endl;
		return ;
	}
	display_contact(i);
}
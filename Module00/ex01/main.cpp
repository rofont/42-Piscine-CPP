/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/01 09:16:21 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (int ac, char **av)
{
	(void)ac;
	(void)av;
	PhoneBook book;

	string temp;
	cout << "Welcome in my PhoneBook";
	while (42)
	{
		if (cin.eof() || cin.fail())
			exit (EXIT_FAILURE);
		cout << endl << "ADD, SEARCH or EXIT" << endl;
		cout << "> ";
		std::getline(cin, temp);
		if (temp == "ADD")
			book.add_contact();
		else if (temp == "SEARCH")
			book.search_contact();
		else if (temp == "EXIT")
			book.exit_exec();
		else if (cin.eof() || cin.fail())
			exit (EXIT_FAILURE);
		else
			cout << RED "Invalid command" WHT<< endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/30 12:58:33 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (int ac, char **av)
{
	(void)ac;
	(void)av;
	PhoneBook book;

	string temp;
	while (42)
	{
		if (cin.eof() || cin.fail())
			exit (EXIT_FAILURE);
		cout << "\nADD, SEARCH or EXIT" << endl;
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
			cout << endl << RED "Invalid command" WHT<< endl;
	}
	return 0;
}
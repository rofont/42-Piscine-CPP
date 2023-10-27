/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:44:50 by rofontai          #+#    #+#             */
/*   Updated: 2023/10/27 15:48:53 by romain           ###   ########.fr       */
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
		cout << "\nADD, SEARCH or EXIT" << endl;
		cout << "> ";
		std::getline(cin, temp);
		if (temp == "ADD")
			book.add_contact();
		else if (temp == "SEARCH")
			book.search_contact();
		else if (temp == "EXIT")
			book.exit_exec();
		else
			cout << endl << RED "TRY AGAIN" WHT<< endl;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:51:20 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/15 14:09:21 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <numeric>

void printTitle(const std::string& title) {
	std::cout << std::endl << YEL << "--------------------------------------" << std::endl;
	std::cout << CYA << title << WHT << std::endl;
	std::cout << YEL << "--------------------------------------" << WHT << std::endl << std::endl;
}

int main(void)
{
	printTitle("TEST WITH VECTOR");
		std::vector<int> myInt(10);
		std::iota(myInt.begin(), myInt.end(), 1);

		// for (size_t i = 0; i != myInt.size(); i++)
		// 	std::cout << "myInt[" << i << "] = " << myInt[i] << std::endl;

		try {
			int valFind = 10;
			std::vector<int>::iterator it = easyfind(myInt, valFind);
			std::cout << "Find " << *it << std::endl;
			valFind = 11;
			it = easyfind(myInt, valFind);
			std::cout << "Find " << *it << std::endl;

		}
		catch (std::exception &e) {
			std::cerr << RED << e.what() << WHT << std::endl;
		}

	printTitle("TEST WITH DEQUE");
		std::deque<int> myDequeInt(10);
		std::iota(myDequeInt.begin(), myDequeInt.end(), 0);

		// for (size_t i = 0; i != myDequeInt.size(); i++)
		// 	std::cout << "myDequeInt[" << i << "] = " << myDequeInt[i] << std::endl;

		try {
			int valFind = 1;
			std::deque<int>::iterator it = easyfind(myDequeInt, valFind);
			std::cout << "Find " << *it << std::endl;
			valFind = 10;
			it = easyfind(myDequeInt, valFind);
			std::cout << "Find " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << RED << e.what() << WHT << std::endl;
		}

	printTitle("TEST WITH LIST");
		std::list<int> myListInt(10);
		std::iota(myListInt.begin(), myListInt.end(), 10);

		// for (size_t i = 0; i != myListInt.size(); i++)
		// 	std::cout << "myListInt[" << i << "] = " << myListInt[i] << std::endl;

		try {
			int valFind = 15;
			std::list<int>::iterator it = easyfind(myListInt, valFind);
			std::cout << "Find " << *it << std::endl;
			valFind = 21;
			it = easyfind(myListInt, valFind);
			std::cout << "Find " << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << RED << e.what() << WHT << std::endl;
		}

	return 0;
}
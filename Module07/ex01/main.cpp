/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:38:57 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/11 10:56:21 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

using std::cout;
using std::endl;

void printTitle(const std::string& title) {
	std::cout << std::endl << YEL << "--------------------------------------" << std::endl;
	std::cout << CYA << title << WHT << std::endl;
	std::cout << YEL << "--------------------------------------" << WHT << std::endl << std::endl;
}

int main(void)
{
	printTitle("TAB DE INT");
		int tabInt[5] = {1, 2, 3, 4, 5};
		for (size_t i = 0; i < 5; i++) {
			cout << "tabInt[" << i << "] = " << tabInt[i] << endl;
		}
		cout << "AFTER" << endl;
		Iter(tabInt, 5, &add);
		for (size_t i = 0; i < 5; i++) {
			cout << "tabInt[" << i << "] = " << tabInt[i] << endl;
		}

	printTitle("TAB DE STRING");
		std::string tabString[5] = {"BEN", "PAUL", "JACQUES", "BILL", "BOULE"};
		for (size_t i = 0; i < 5; i++) {
			cout << "tabString[" << i << "] = " << tabString[i] << endl;
		}
		cout << "AFTER" << endl;
		Iter(tabString, 5, &toLower);
		for (size_t i = 0; i < 5; i++) {
			cout << "tabString[" << i << "] = " << tabString[i] << endl;
		}
	printTitle("TAB DE CHAR");
		int tabChar[5] = {'a', 'b', 'c', 'd', 'e'};
		for (size_t i = 0; i < 5; i++) {
			cout << "tabChar[" << i << "] = " << static_cast<char>(tabChar[i]) << endl;
		}
		cout << "AFTER" << endl;
		Iter(tabChar, 5, &add);
		for (size_t i = 0; i < 5; i++) {
			cout << "tabChar[" << i << "] = " << static_cast<char>(tabChar[i]) << endl;
		}

	return 0;
}
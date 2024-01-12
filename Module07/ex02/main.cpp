/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:57:56 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/11 21:29:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

using std::cout;
using std::endl;
using std::string;
using std::exception;

void printTitle(const std::string& title) {
	std::cout << std::endl << YEL << "--------------------------------------" << std::endl;
	std::cout << CYA << title << WHT << std::endl;
	std::cout << YEL << "--------------------------------------" << WHT << std::endl << std::endl;
}

int main(void)
{
	printTitle("TEST CONSTRUCTOR");
		Array<int> tabInt;
		cout << "Size of tabInt = " << tabInt.size() << endl;
		Array<string> tabString;
		cout << "Size of tabString = " << tabString.size() << endl;
		Array<char> tabChar(8);
		cout << "Size of tabChar = " << tabChar.size() << endl;
		Array<double> tabDouble(6);
		cout << "Size of tabDouble = " << tabDouble.size() << endl;
		Array<char> tabTank(tabChar);
		cout << "Size of tabTank = " << tabTank.size() << endl;

	printTitle("ADD IN ELEMENTS");
		for (unsigned int i = 0; i < tabDouble.size(); i++) {
			try {
				tabDouble[i] = i + 0.5;
				cout << "tabDouble[" << i << "] = " << tabDouble[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}

	printTitle("TEST OPERATOR");
		Array<double> douTab = tabDouble;
		cout << "Size of douTab = " << douTab.size() << endl;

	printTitle("MODIF ASSIGANTION");
		for (unsigned int i = 0; i < tabDouble.size(); i++) {
			try {
				tabDouble[i] = i + 10.5;
				cout << "tabDouble[" << i << "] = " << tabDouble[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}
		cout << endl;
		for (unsigned int i = 0; i < douTab.size(); i++) {
			try {
				cout << "douTab[" << i << "] = " << douTab[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}

	printTitle("ADD IN ELEMENTS OTHER CAST");
		Array<int> array1(8);
		for (unsigned int i = 0; i < 10; i++) {
			try {
				array1[i] = i * 2;
				cout << "array1[" << i << "] = " << array1[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}

	printTitle("TEST OPERATOR OTHER CAST");
		Array<int> array2 = array1;
		cout << "Size of array2 = " << array2.size() << endl;

	printTitle("MODIF ASSIGANTION OTHER CAST");
		for (unsigned int i = 0; i < array1.size(); i++) {
			try {
				array1[i] += 10;
				cout << "array1[" << i << "] = " << array1[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}
		cout << endl;
		for (unsigned int i = 0; i < array2.size(); i++) {
			try {
				cout << "array2[" << i << "] = " << array2[i] << endl;
			}
			catch (std::exception &e) {
				cout <<RED << e.what() << WHT << endl;
			}
		}
}
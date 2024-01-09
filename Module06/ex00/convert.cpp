/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:17:07 by romain            #+#    #+#             */
/*   Updated: 2024/01/08 21:26:10 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

//PRINT MSG
void	f_printChar(string &target) {
	char c = target[0];

	if (c < 32)
		cout << CHAR << NO_DISPLAY << endl;
	else
		cout << CHAR << "'" << c << "'" << endl;

	cout << INT << static_cast<int>(c) << endl;
	cout << FLOAT << fixed << setprecision(1) << static_cast<float>(c) << "f" << endl;
	cout << DOUBLE << fixed << setprecision(1) << static_cast<double>(c) << endl;
}

void	f_printInt(string &target) {
	int i = std::stoi(target);

	if (i < 127 && i >= 0) {
		if (i < 32)
			cout << CHAR << NO_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(i) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSSIBLE << endl;

	cout << INT << i << endl;
	cout << FLOAT << fixed << setprecision(1) << static_cast<float>(i) << "f" << endl;
	cout << DOUBLE << fixed << setprecision(1) << static_cast<double>(i) << endl;
}

void	f_printFloat(string &target) {
	float f = std::stof(target);

	if (f < 127 && f >= 0) {
		if (f < 32)
			cout << CHAR << NO_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(f) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSSIBLE << endl;

	if (f < INT_MIN || f > INT_MAX)
		cout << INT << IMPOSSIBLE << endl;
	else
		cout << INT << static_cast<int>(f) << endl;

	cout << FLOAT << fixed << setprecision(1) << f << "f" << endl;
	cout << DOUBLE << fixed << setprecision(1) << static_cast<double>(f) << endl;
}

void	f_printDouble(string &target) {
	double d = std::stod(target);

	if (d < 127 && d >= 0) {
		if (d < 32)
			cout << CHAR << NO_DISPLAY << endl;
		else
			cout << CHAR << "'" << static_cast<char>(d) << "'" << endl;
	}
	else
		cout << CHAR << IMPOSSIBLE << endl;

	if (d < INT_MIN || d > INT_MAX)
		cout << INT << IMPOSSIBLE << endl;
	else
		cout << INT << static_cast<int>(d) << endl;

	cout << FLOAT << fixed << setprecision(1) << static_cast<float>(d) << "f" << endl;
	cout << DOUBLE << fixed << setprecision(1) << d << endl;
}

void	f_printScientist(string &target) {
	if (target[0] == '-') {
		cout << CHAR << IMPOSSIBLE << endl;
		cout << INT << IMPOSSIBLE << endl;
		cout << FLOAT << "-inff" << endl;
		cout << DOUBLE << "-inf" << endl;
	}
	else if (target[0] == '+') {
		cout << CHAR << IMPOSSIBLE << endl;
		cout << INT << IMPOSSIBLE << endl;
		cout << FLOAT << "+inff" << endl;
		cout << DOUBLE << "+inf" << endl;
	}
	else {
		cout << CHAR << IMPOSSIBLE << endl;
		cout << INT << IMPOSSIBLE << endl;
		cout << FLOAT << "nanf" << endl;
		cout << DOUBLE << "nan" << endl;
	}
}

void	f_printImpossible(void) {
	cout << CHAR << IMPOSSIBLE << endl;
	cout << INT << IMPOSSIBLE << endl;
	cout << FLOAT << IMPOSSIBLE << endl;
	cout << DOUBLE << IMPOSSIBLE << endl;
}

//CHECK TARGET
bool	f_isChar(string &target) {
	if (target.length() == 1 && !isdigit(target[0]))
		return true;
	return false;
}

bool	f_isInt(string &target) {
	try {
		std::stoi(target);
		return true;
	}
	catch (std::exception &e) {
		return false;
	}
}

bool	f_isFloat(string &target) {
	try {
		std::stof(target);
		return true;
	}
	catch (std::exception &e) {
		return false;
	}
}

bool	f_isDouble(string &target) {
	try {
		std::stod(target);
		return true;
	}
	catch (std::exception &e) {
		return false;
	}
}

bool	f_isScientist(string &target) {
	if (target == "-inf" || target == "-inff" || target == "+inf" || target == "+inff" || target == "nan" || target == "nanf")
		return true;
	return false;
}
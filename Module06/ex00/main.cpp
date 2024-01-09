/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:40:16 by romain            #+#    #+#             */
/*   Updated: 2024/01/08 21:36:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

enum Type {Char, Int, Float, Double, Scientist, Impossible};

using std::cerr;
using std::endl;
using std::cout;

bool	f_checkTarget(string &target) {
	if (f_isScientist(target))
		return true;

	size_t id = target.find('f');
	if (id != string::npos) {
		id = target.find('f', id + 1);
		if (id != string::npos) {
			cerr << "You can do better with 'f', please use your brain 🧠" << endl;
			return false;
		}
	}

	id = target.find('.');
	if (id != string::npos) {
		id = target.find('.', id + 1);
		if (id != string::npos) {
			cerr << "🤔 You can do better with '.' !!" << endl;
			return false;
		}
	}
	return true;
}

Type	f_getTargetType(string &target) {
	if (f_isScientist(target))
		return Scientist;
	else if (f_isChar(target))
		return Char;
	else if (f_isInt(target))
		return Int;
	else if (f_isFloat(target))
		return Float;
	else if (f_isDouble(target))
		return Double;
	return Impossible;
}


int main(int ac, char **av)
{
	if (ac != 2) {
		cerr << "Error" << endl
			<< "the number of arguments is wrong. Thank you for using the models:" << endl
			<< "./Convert <char>, ./Convert <int>, ./Convert <float>, ./Convert <double>" << endl;
		return 1;
	}
	string target = av[1];
	if (f_checkTarget(target)) {
		switch (f_getTargetType(target)) {
			case Char:
				f_printChar(target);
				break;
			case Int:
				f_printInt(target);
				break;
			case Float:
				f_printFloat(target);
				break;
			case Double:
				f_printDouble(target);
				break;
			case Scientist:
				f_printScientist(target);
				break;
			default:
				f_printImpossible();
		}
	}
	return 0;
}
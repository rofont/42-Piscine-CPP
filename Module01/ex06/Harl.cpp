/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/06 16:08:48 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl(void)
{
	cout << "Harl has been created" << endl << endl;
}

Harl::~Harl(void)
{
	cout << endl << "Harl has been destroyed" << endl;
}

void Harl::complain (string level)
{
	void (Harl::*tabfct[4])() = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
	string tab[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	int i = 0;
	while (i < 4)
	{
		if (tab[i] == level)
			break;
		i++;
	}
	switch(i)
	{
		default:
			cout << "[ This level of complaint is unacceptable. ]" << endl;
		case 0:
			(*this.*tabfct[0])();
		case 1:
			(*this.*tabfct[1])();
		case 2:
			(*this.*tabfct[2])();
		case 3:
			(*this.*tabfct[3])();
	}
}

void Harl::debug(void)
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << endl;
}

void Harl::info(void)
{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << endl;
}

void Harl::warning(void)
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void)
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}
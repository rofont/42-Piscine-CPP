/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:58 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/06 15:06:56 by rofontai         ###   ########.fr       */
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
	void (Harl::*tabfct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == tab[i])
		{
			(*this.*tabfct[i])();
			return ;
		}
	}
	cout << "This level of complaint is unacceptable." << endl;
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
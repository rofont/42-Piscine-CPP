/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:45:21 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/27 15:09:32 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main ()
{
	Bureaucrat Paul("Paul", 42);
	Bureaucrat Jean("Jean", 10);

	cout << Paul << endl;
	cout << Jean << endl;
	Jean = Paul;
	cout << Paul << endl;
	cout << Jean << endl;

	return 0;
}

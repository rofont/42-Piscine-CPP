/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:57:56 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/11 11:44:20 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

using std::cout;
using std::endl;

int main(void)
{
	int *a = new int(131);
	cout << &a << endl;
	cout << *a << endl;
}
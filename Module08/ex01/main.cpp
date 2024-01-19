/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:28:37 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/18 22:29:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span vec(10);
	try {
		for (int i = 0; i < 10; i++)
			vec.addNumber(10+i);

		for (int i = 0; i < 10; i++)
			std::cout << vec.getNuumberVec(i) << std::endl;

		std::cout << "End of program" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
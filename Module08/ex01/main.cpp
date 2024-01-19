/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:28:37 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/19 15:48:53 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void printTitle(const std::string& title) {
	std::cout << std::endl << YEL << "--------------------------------------" << std::endl;
	std::cout << CYA << title << WHT << std::endl;
	std::cout << YEL << "--------------------------------------" << WHT << std::endl << std::endl;
}

int randomNum(void) {
	return (std::rand()%100);
}


int main(void)
{
	Span vec(10);
	printTitle("FILL VECTOR OF SPAN");
		try {
		std::vector<int> random;
		for (size_t i = 0; i < NB; i++)
			random.push_back(rand());
		vec.filladdNumber(random.begin(), random.end());
		for (int i = 0; i < NB; i++)
				std::cout << i << " = " << vec.getNumberVec(i) << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	printTitle("TEST LONGEST SPAN");
		try {
			int result = vec.longestSpan();
			std::cout << "The longest Span is " << result << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	printTitle("TEST SHORTEST SPAN");
		try {
			int shortest = vec.shortestSpan();
			for (int i = 0; i < NB; i++)
				std::cout << i << " = " << vec.getNumberVec(i) << std::endl;
			std::cout << "The shortest Span is " << shortest << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	return 0;
}
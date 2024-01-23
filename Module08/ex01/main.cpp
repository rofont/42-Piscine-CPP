/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:28:37 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/23 11:11:02 by rofontai         ###   ########.fr       */
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
	printTitle("TEST SUBJECT");
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	printTitle("TEST ADD NUMBER");
		Span sparow(10);
		try {
			sparow.fillSpanRandom(11);
			sparow.printSpan();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

	//CREATE VEC FOR OTHER TESTS
	printTitle("FILL VECTOR OF SPAN");
		Span vec(NB);
		try {
			srand(unsigned (time(0)));
			std::vector<int> random;
			for (size_t i = 0; i < NB; i++)
				random.push_back(rand()%1000);
			vec.filladdNumber(random.begin(), random.end());
			vec.printSpan();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	printTitle("TEST LONGEST SPAN");
		Span vecCopy(vec);
		try {
			int result = vecCopy.longestSpan();
			std::cout << "The longest Span is " << result << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	printTitle("TEST SHORTEST SPAN");
		try {
			Span vecAssign = vec;
			int shortest = vec.shortestSpan();
			vec.printSpan();
			std::cout << "The shortest Span is " << shortest << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	return 0;
}
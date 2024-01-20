/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:28:37 by rofontai          #+#    #+#             */
/*   Updated: 2024/01/19 20:48:14 by romain           ###   ########.fr       */
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
	printTitle("TEST WITH NEG NUMBERS");
		Span neg(10);
		try {
			std::vector<int> test = {-20, -100, -1, -30, -11234, 20, 100, 1, 0, 2004055};
			neg.filladdNumber(test.begin(), test.end());
			// neg.printSpan();
			int plus = neg.longestSpan();
			std::cout << "The longest Span is " << plus << std::endl;
			int minus = neg.shortestSpan();
			std::cout << "The shortest Span is " << minus << std::endl;
			// neg.printSpan();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}


	return 0;
}
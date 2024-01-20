/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 21:03:03 by romain            #+#    #+#             */
/*   Updated: 2024/01/19 22:10:59 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void printTitle(const std::string& title) {
	std::cout << std::endl << YEL << "--------------------------------------" << std::endl;
	std::cout << CYA << title << WHT << std::endl;
	std::cout << YEL << "--------------------------------------" << WHT << std::endl << std::endl;
}

int main(void)
{
	printTitle("MAIN TEST");
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	printTitle("LIST TEST");
		std::list<int> listTest;
		listTest.push_back(5);
		listTest.push_back(17);
		std::cout << "top = " << listTest.back() << std::endl;
		listTest.pop_back();
		std::cout << "size = " << listTest.size() << std::endl;
		listTest.push_back(3);
		listTest.push_back(5);
		listTest.push_back(737);
		//[...]
		listTest.push_back(0);
		std::list<int>::iterator itlist = listTest.begin();
		std::list<int>::iterator itelist = listTest.end();
		++itlist;
		--itlist;
		while (itlist != itelist)
		{
			std::cout << *itlist << std::endl;
			++itlist;
		}
		std::list<int> t(listTest);

	return 0;
}
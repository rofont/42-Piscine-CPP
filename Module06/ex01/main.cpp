/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:07:14 by romain            #+#    #+#             */
/*   Updated: 2024/01/10 08:48:19 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct data
{
	int i;
	std::string str;
}				Data;

uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}


int main(void)
{
	Data myData;
	Data *newData;

	myData.i = 42;
	myData.str = "Network";

	std::cout << &myData << std::endl;
	std::cout << "myData: " << myData.i << " " << myData.str <<  std::endl;

	uintptr_t result = serialize(&myData);
	newData = deserialize(result);

	std::cout << &newData << std::endl;
	std::cout << "newData: " << newData->i << " " << newData->str <<  std::endl;
	return 0;
}
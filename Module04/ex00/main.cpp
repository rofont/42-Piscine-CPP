/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 21:19:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;
using std::endl;

int main()
{
	cout << CYA "----- CONSTRUCTOR -----" WHT << endl;
	const Animal* meta = new Animal();
	const Animal* dogi = new Dog();
	const Animal* cati = new Cat();
	const WrongAnimal* wrongA = new WrongAnimal();
	const WrongAnimal* wrongC = new WrongCat();

	cout << endl;

	cout << CYA "----- GET -----" WHT << endl;
	cout << "meta: " << meta->getType() << endl;
	cout << "dogi: " << dogi->getType() << endl;
	cout << "cati: " << cati->getType() << endl;
	cout << endl;
	cout << "wrongA: " << wrongA->getType() << endl;
	cout << "wrongC: " << wrongC->getType() << endl;
	cout << endl;

	cout << CYA "----- SOUND -----" WHT<< endl;
	meta->makeSound();
	cati->makeSound();
	dogi->makeSound();
	cout << endl;
	wrongA->makeSound();
	wrongC->makeSound();
	cout << endl;

	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
	delete meta;
	delete dogi;
	delete cati;
	cout << endl;
	delete wrongA;
	delete wrongC;

	return 0;
}

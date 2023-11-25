/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/24 21:19:07 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;

int main()
{
	cout <<CYA "----- MAIN EX00 -----" << endl;

	cout << CYA "----- CONSTRUCTOR -----" WHT << endl;
	// const Animal* meta = new Animal();
	const Animal* dogi = new Dog();
	const Animal* cati = new Cat();
	const WrongAnimal* wrongA = new WrongAnimal();
	const WrongAnimal* wrongC = new WrongCat();

	cout << endl;

	cout << CYA "----- GET -----" WHT << endl;
	// cout << "meta: " << meta->getType() << endl;
	cout << "dogi: " << dogi->getType() << endl;
	cout << "cati: " << cati->getType() << endl;
	cout << endl;
	cout << "wrongA: " << wrongA->getType() << endl;
	cout << "wrongC: " << wrongC->getType() << endl;
	cout << endl;

	cout << CYA "----- SOUND -----" WHT<< endl;
	// meta->makeSound();
	cati->makeSound();
	dogi->makeSound();
	cout << endl;
	wrongA->makeSound();
	wrongC->makeSound();
	cout << endl;

	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
	// delete meta;
	delete dogi;
	delete cati;
	cout << endl;
	delete wrongA;
	delete wrongC;

	cout << endl <<CYA "----- MAIN EX01 -----" << endl;

	cout << CYA "----- CONSTRUCTOR -----" WHT << endl;
	Animal *tabAnimal[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			tabAnimal[i] = new Cat();
		else
			tabAnimal[i] = new Dog();
	}
	cout << endl;

	cout << CYA "----- GET/SET-----" WHT << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			tabAnimal[i]->setIdea("GREAT", i);
		else
			tabAnimal[i]->setIdea("BAD", i);
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			cout << tabAnimal[i]->getType() << ": ID_" << tabAnimal[i]->getIdea(i) << endl;
		else
			cout << tabAnimal[i]->getType() << ": ID_" << tabAnimal[i]->getIdea(i) << endl;
	}
	cout << endl;

	cout << CYA "----- SOUND -----" WHT<< endl;
	for (int i = 0; i < 10; i++)
		tabAnimal[i]->makeSound();
	cout << endl;

	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
	for (int i = 0; i < 10; i++)
		delete tabAnimal[i];

	cout << CYA "----- DEEP COPY-----" WHT << endl;
	Cat original;
	Cat *copy = new Cat(original);
	copy->setIdea("salut", 1);

	cout << original.getIdea(1) << endl;
	cout << copy->getIdea(1) << endl;

	delete copy;

	return 0;
}

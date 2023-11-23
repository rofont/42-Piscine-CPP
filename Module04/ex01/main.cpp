/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/22 21:30:39 by romain           ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* z = new WrongCat();
	cout << endl;

	cout << CYA "----- GET -----" WHT << endl;
	cout << "j: " << j->getType() << endl;
	cout << "i: " << i->getType() << endl;
	cout << endl;
	cout << "x: " << x->getType() << endl;
	cout << "z: " << z->getType() << endl;
	cout << endl;

	cout << CYA "----- SOUND -----" WHT<< endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	cout << endl;
	x->makeSound();
	z->makeSound();
	cout << endl;

	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
	delete j;
	delete i;
	cout << endl;
	delete x;
	delete z;

	cout <<CYA "----- MAIN EX01 -----" << endl;

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
	return 0;
}

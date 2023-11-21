/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/21 15:42:59 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Animal.hpp"
// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
// #include "Brain.hpp"

// using std::cout;
// using std::endl;

// int main()
// {
// 	cout << CYA "----- CONSTRUCTOR -----" WHT << endl;
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	const WrongAnimal* x = new WrongAnimal();
// 	const WrongAnimal* z = new WrongCat();
// 	cout << endl;

// 	cout << CYA "----- GET -----" WHT << endl;
// 	cout << "meta: " << meta->getType() << endl;
// 	cout << "j: " << j->getType() << endl;
// 	cout << "i: " << i->getType() << endl;
// 	cout << endl;
// 	cout << "x: " << x->getType() << endl;
// 	cout << "z: " << z->getType() << endl;
// 	cout << endl;

// 	cout << CYA "----- SOUND -----" WHT<< endl;
// 	meta->makeSound();
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	cout << endl;
// 	x->makeSound();
// 	z->makeSound();
// 	cout << endl;

// 	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
// 	delete meta;
// 	delete j;
// 	delete i;
// 	cout << endl;
// 	delete x;
// 	delete z;
// 	return 0;
// }

//MAIN JB

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
int	main()
{
	std::cout <<CYA "Creating animals." WHT<< std::endl;
	Animal	*animalArray[10];
	for(int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animalArray[i] = new Cat();
		else
			animalArray[i] = new Dog();
	}
	std::cout << "Creating animals done." << std::endl;
	std::cout << std::endl;
	std::cout << "Making animals sound." << std::endl;
	for(int i = 0; i < 10; i++)
		animalArray[i]->makeSound();
	std::cout << "Making animals sound done." << std::endl;
	std::cout << std::endl;
	std::cout << "Getting ideas from animals." << std::endl;

	// for(int i = 0; i < 10; i++)
	// {
	// 	if (i % 2 == 0)
	// 		std::cout << ((Cat *)animalArray[i])->getBrain()->getIdea() << std::endl;
	// 	else
	// 		std::cout << ((Dog *)animalArray[i])->getBrain()->getIdea() << std::endl;
	// }
	std::cout << "Getting ideas from animals done." << std::endl;
	std::cout << std::endl;
	std::cout << "Deep copy dog test." << std::endl;
	Dog *dogTest = new Dog();
	Dog copyDog = (*(Dog *)dogTest);
	Dog assignOpeDog;
	assignOpeDog = *dogTest;
	std::cout << "dogTest address:" << " " << dogTest << std::endl;
	std::cout << "copyDog address:" << " " << &copyDog << std::endl;
	std::cout << "assignOpeDog address:" << " " << &assignOpeDog << std::endl;
	std::cout << "Deep copy dog test done." << std::endl;
	std::cout << std::endl;
	std::cout << "Deep copy cat test." << std::endl;
	Cat *catTest = new Cat();
	Cat copyCat = (*(Cat *)catTest);
	Cat assignOpeCat;
	assignOpeCat = *catTest;
	std::cout << "catTest address:" << " " << catTest << std::endl;
	std::cout << "copyCat address:" << " " << &copyCat << std::endl;
	std::cout << "assignOpeCat address:" << " " << &assignOpeCat << std::endl;
	std::cout << "Deep copy cat test done." << std::endl;
	std::cout << std::endl;
	std::cout << "Deleting animals." << std::endl;
	for(int i = 0; i < 10; i++)
		delete animalArray[i];
	delete dogTest;
	delete catTest;
	std::cout << "Deleting animals done." << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:42:53 by rofontai          #+#    #+#             */
/*   Updated: 2023/11/20 15:23:47 by rofontai         ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* z = new WrongCat();
	cout << endl;

	cout << CYA "----- GET -----" WHT << endl;
	cout << "meta: " << meta->getType() << endl;
	cout << "j: " << j->getType() << endl;
	cout << "i: " << i->getType() << endl;
	cout << endl;
	cout << "x: " << x->getType() << endl;
	cout << "z: " << z->getType() << endl;
	cout << endl;

	cout << CYA "----- SOUND -----" WHT<< endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	cout << endl;
	x->makeSound();
	z->makeSound();
	cout << endl;

	cout << CYA "----- DESTRUCTOR -----" WHT << endl;
	delete meta;
	delete j;
	delete i;
	cout << endl;
	delete x;
	delete z;

	return 0;
}

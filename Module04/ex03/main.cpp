/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:57:13 by romain            #+#    #+#             */
/*   Updated: 2023/11/23 22:43:37 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

using std::cout;
using std::endl;

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	cout << endl;
	src->learnMateria(new Ice());
	cout << endl;
	src->learnMateria(new Cure());
	cout << endl;
	ICharacter* me = new Character("me");
	cout << endl;
	AMateria* tmp;
	cout << endl;
	tmp = src->createMateria("ice");
	cout << endl;
	me->equip(tmp);
	cout << endl;
	// tmp = src->createMateria("cure");
	cout << endl;
	me->equip(tmp);
	cout << endl;
	ICharacter* bob = new Character("bob");
	cout << endl;
	me->use(0, *bob);
	cout << endl;
	me->use(1, *bob);
	cout << endl;
	delete bob;
	cout << endl;
	delete me;
	cout << endl;
	delete src;
	cout << endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:57:13 by romain            #+#    #+#             */
/*   Updated: 2023/11/27 10:53:49 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"


using std::cout;
using std::endl;

int main(void)
{
	cout <<CYA "----- TEST SUBJECT MAIN -----" WHT<< endl << endl;
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
	tmp = src->createMateria("cure");
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



// ----- TEST  FRANCOIS-----
// void	copyMaterias(void)
// {
// 	AMateria* tmp = new Ice();
// 	AMateria* tmp2 = new Cure();

// 	std::cout << std::endl << "-- copyMaterias() ----" << std::endl;
// 	std::cout << "tmp type: " << tmp->getType() << " (should be ice)" << std::endl;
// 	std::cout << "tmp2 type: " << tmp2->getType() << " (should be cure)" << std::endl;
// 	std::cout << "*tmp = *tmp2" << std::endl;
// 	*tmp = *tmp2;
// 	std::cout << "tmp type: " << tmp->getType() << " (should now be cure)" << std::endl;
// 	delete tmp;
// 	delete tmp2;
// }

// void	copyCharacters(void)
// {
// 	ICharacter* a = new Character("Sézanne");
// 	ICharacter* b = new Character("Andréanne");

// 	std::cout << std::endl << "-- copyCharacters() ----" << std::endl;
// 	std::cout << "a name: " << a->getName() << " (should be Sézanne)" << std::endl;
// 	std::cout << "b name: " << b->getName() << " (should be Andréanne)" << std::endl;
// 	std::cout << "a = b" << std::endl;
// 	*(Character *) a = *(Character *) b;
// 	std::cout << "a name: " << a->getName() << " (should now be Andréanne)" << std::endl;
// 	std::cout << "a equips with ice" << std::endl;
// 	a->equip(new Ice()); // destructor of characters deletes materias
// 	// this character will be deleted before it unequips the materia
// 	// If the materia was unequiped, this scope should keep the materia's address and delete it
// 	std::cout << "a = b" << std::endl;
// 	*(Character *) b = *(Character *) a;
// 	std::cout << "a and b now should use ice and be named Andréanne:" << std::endl;
// 	b->use(0, *a);
// 	a->use(0, *b);
// 	std::cout << "b equips with cure" << std::endl;
// 	b->equip(new Cure());
// 	std::cout << "b should use cure:" << std::endl;
// 	b->use(1, *b);
// 	std::cout << "Attempting to use the second materia, a shouldn't do anything:" << std::endl;
// 	a->use(1, *a);
// 	std::cout << "even though we made a = b, a doesn't keep track of b's new items. a doesn't have a second item." << std::endl;
// 	delete a;
// 	delete b;
// }

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	Ice *ice = new Ice();
// 	Cure *cure = new Cure();
// 	src->learnMateria(ice);
// 	src->learnMateria(cure);
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");

// 	std::cout << "-- \"me\" ices and then cures bob ----" << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	{
// 		std::cout << "-- bob gets ice ----" << std::endl;
// 		bob->equip(src->createMateria("ice"));
// 		AMateria* tmp = src->createMateria("cure");
// 		std::cout << "-- bob gets cure ----" << std::endl;
// 		bob->equip(tmp);
// 		std::cout << "-- bob uses all his materias on himself ----" << std::endl;
// 		for (int i = 0; i < 4; ++i)
// 			bob->use(i, *bob);
// 		bob->unequip(1);
// 		delete tmp;
// 	}
// 	delete bob;
// 	delete me;
// 	delete src;
// 	copyMaterias();
// 	copyCharacters();
// 	return 0;
// }

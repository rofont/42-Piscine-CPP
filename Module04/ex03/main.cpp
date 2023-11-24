/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:57:13 by romain            #+#    #+#             */
/*   Updated: 2023/11/24 12:11:45 by rofontai         ###   ########.fr       */
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

	cout <<CYA "----- TEST  CHAT-----" WHT<< endl;
	cout << endl;
	Character player("Player1");
	cout << endl;
    AMateria *iceMateria = new Ice();
    cout << endl;
	AMateria *cureMateria = new Cure();
	cout << endl;
    player.equip(iceMateria);
    cout << endl;
	player.equip(cureMateria);
	cout << endl;
    ICharacter *target = new Character("Target1");
    cout << endl;
	player.use(0, *target);
    cout << endl;
	player.use(1, *target);
	cout << endl;
    IMateriaSource *materiaSource = new MateriaSource();
    cout << endl;
	materiaSource->learnMateria(new Ice());
    cout << endl;
	materiaSource->learnMateria(new Cure());
	cout << endl;
    AMateria *newIce = materiaSource->createMateria("ice");
    cout << endl;
	AMateria *newCure = materiaSource->createMateria("cure");
	cout << endl;
    std::cout <<CYA "Testing complete." WHT<< std::endl;
	cout << endl;
    delete iceMateria;
	cout << endl;
    delete cureMateria;
	cout << endl;
    delete target;
	cout << endl;
    delete materiaSource;
	cout << endl;
    delete newIce;
	cout << "salut " << endl;
    delete newCure;
	cout << endl;

	return 0;
}

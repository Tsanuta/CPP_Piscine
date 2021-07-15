/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:40:25 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 12:21:09 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	// Subjet tests
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter		*me = new Character("me");
	AMateria		*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter		*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// Added tests
	IMateriaSource	*src2 = new MateriaSource();
	AMateria		*tmp8 = new Cure();

	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(tmp8);
	delete tmp8;

	ICharacter		*me2 = new Character("me");
	AMateria		*tmp2;
	AMateria		*tmp2bis;

	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	tmp2bis = src2->createMateria("cure");
	me2->equip(tmp2bis);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);

	delete tmp2;

	tmp2 = src2->createMateria("unkown");
	if (tmp2 == 0)
		std::cout << "OK" << std::endl;

	ICharacter		*bob2 = new Character("bob");

	me2->use(0, *bob2);
	std::cout << "XP : "<< tmp2bis->getXP() << std::endl;
	me2->use(1, *bob2);
	std::cout << "XP : "<< tmp2bis->getXP() << std::endl;
	me2->use(1, *bob2);
	std::cout << "XP : "<< tmp2bis->getXP() << std::endl;
	me2->use(2, *bob2);
	me2->use(3, *bob2);
	me2->use(4, *bob2);

	me2->unequip(1);

	delete tmp2bis;

	//test copy
	Character		*me2copy = new Character("me");

	*me2copy = *static_cast<Character*>(me2);
	delete me2;
	me2copy->use(0, *bob2);
	me2copy->use(1, *bob2);
	me2copy->use(2, *bob2);
	me2copy->use(3, *bob2);

	delete bob2;
	delete me2copy;
	delete src2;

	return 0;


}

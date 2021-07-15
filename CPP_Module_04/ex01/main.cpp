/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:12:26 by olidon            #+#    #+#             */
/*   Updated: 2020/12/09 11:34:15 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "TeslaCannon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "NightStalkers.hpp"

int main()
{
	// Test from subject
	Character	*moi = new Character("moi");

	std::cout << *moi;

	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	std::cout << std::endl;

	delete moi;

	// More tests
	Enemy		*m = new SuperMutant();

	Character	*bob = new Character("bob");

	std::cout << *bob;
	std::cout << "Must do nothing" << std::endl;
	bob->attack(m);
	std::cout << "Nothing done" << std::endl;
	bob->equip(pf);
	bob->attack(m);
	bob->attack(m);
	bob->attack(m);
	std::cout << *bob;
	bob->recoverAP();
	bob->recoverAP();
	std::cout << *bob;
	bob->recoverAP();
	std::cout << *bob;
	bob->equip(pr);
	bob->attack(m);
	std::cout << "Should not be dead because of Supermutant shiel" << std::endl;
	bob->attack(m);
	std::cout << "Should be dead now" << std::endl;
	std::cout << *bob;

	Enemy		*n = new SuperMutant();

	bob->attack(n);
	bob->attack(n);
	bob->attack(n);
	bob->attack(n);
	bob->attack(n);
	std::cout << *bob;
	bob->attack(n);
	std::cout << *bob;
	bob->attack(n);
	std::cout << *bob;

	Enemy		*o = new NightStalkers();
	TeslaCannon	*tc = new TeslaCannon();

	bob->equip(tc);
	bob->recoverAP();
	std::cout << *bob;
	bob->attack(o);
	bob->attack(o);
	bob->attack(o);
	std::cout << *bob;
	bob->attack(o);

	delete bob;
	delete pr;
	delete pf;
	delete tc;
	delete n;
	delete o;
	return 0;
}

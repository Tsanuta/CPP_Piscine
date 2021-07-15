/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:04:15 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	// Subjet tests
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	ISquad			*vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine*	cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// Added tests
	std::cout << std::endl;
	ISpaceMarine	*bob2 = new TacticalMarine;
	ISpaceMarine	*jim2 = new AssaultTerminator;
	ISquad			*vlc2 = new Squad;
	ISpaceMarine	*cur2;

	std::cout << vlc2->push(bob2) << std::endl;
	std::cout << vlc2->push(jim2) << std::endl;
	std::cout << vlc2->push(jim2) << std::endl;
	std::cout << vlc2->push(NULL) << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		cur2 = vlc2->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	cur2 = vlc2->getUnit(2);
	if (cur2 == NULL)
		std::cout << "ptr is null" << std::endl;

	// TESTER LES CLONE DE SPACEMARINE et COPIE de SQUAD avec marines
	std::cout << std::endl;
	Squad			*vlcbis = new Squad;
	ISpaceMarine	*bobbis = new TacticalMarine;

	std::cout << vlcbis->push(bobbis) << std::endl;
	*vlcbis = *static_cast<Squad*>(vlc2);
	delete vlc2;
	for (int i = 0; i < vlcbis->getCount(); ++i)
	{
		cur2 = vlcbis->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	cur2 = vlcbis->getUnit(2);
	if (cur2 == NULL)
		std::cout << "ptr is null" << std::endl;

	delete vlcbis;
	return 0;
}

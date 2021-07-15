/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:28:03 by olidon            #+#    #+#             */
/*   Updated: 2020/11/26 18:01:08 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine				&TacticalMarine::operator=(TacticalMarine const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine				*TacticalMarine::clone() const
{
	return new TacticalMarine;
}

void						TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void						TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void						TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

/* ************************************************************************** */

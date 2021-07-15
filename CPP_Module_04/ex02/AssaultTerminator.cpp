/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:25:47 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine				*AssaultTerminator::clone() const
{
	// clone() returns a copy of the current object
	return new AssaultTerminator;
}

void						AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void						AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void						AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

/* ************************************************************************** */

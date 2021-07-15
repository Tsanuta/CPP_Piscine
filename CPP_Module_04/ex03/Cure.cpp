/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:11:43 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure				&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->setXP(rhs.getXP());
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria			*Cure::clone() const
{
	AMateria *clone = new Cure();

	clone->setXP(this->getXP());
	return clone;
}

void				Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
		this->setXP((this->getXP() + 10));
}

/* ************************************************************************** */

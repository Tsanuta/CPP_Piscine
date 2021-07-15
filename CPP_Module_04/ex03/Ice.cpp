/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon  <olidon @student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:11:43 by olidon            #+#    #+#             */
/*   Updated: 2020/11/04 22:28:04 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice				&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->setXP(rhs.getXP());
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria			*Ice::clone() const
{
	AMateria *clone = new Ice();

	clone->setXP(this->getXP());
	return clone;
}

void				Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->setXP((this->getXP() + 10));
}

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:48:39 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 17:59:51 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	_xp = 0;
}

AMateria::AMateria(const AMateria &src) : _type(src.getType())
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria			&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		_xp = rhs._xp;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const 	&AMateria::getType() const
{
	return _type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}

void				AMateria::use(ICharacter &)
{
	_xp += 10;
}

void				AMateria::setXP(unsigned int xp)
{
	_xp = xp;
}

/* ************************************************************************** */

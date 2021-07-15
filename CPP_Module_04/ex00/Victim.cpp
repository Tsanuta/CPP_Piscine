/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:48:15 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:02:33 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim()
{
}

Victim::Victim(std::string const &name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &src) : _name(src.getName())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim				&Victim::operator=(Victim const &)
{
	return *this;
}

std::ostream		&operator<<(std::ostream &o, Victim const &i)
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Victim::getName() const
{
	return _name;
}

void				Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}


/* ************************************************************************** */

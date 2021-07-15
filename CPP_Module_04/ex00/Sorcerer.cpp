/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:07:40 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:02:56 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) : _name(src.getName()), _title(src.getTitle())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer		&Sorcerer::operator=(Sorcerer const &)
{
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and i like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Sorcerer::getName() const
{
	return _name;
}

std::string const	&Sorcerer::getTitle() const
{
	return _title;
}

void			Sorcerer::polymorph(Victim const &rhs) const
{
	rhs.getPolymorphed();
}

/* ************************************************************************** */

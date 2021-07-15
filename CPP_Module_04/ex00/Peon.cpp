/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:05:03 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:04:05 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon()
{
}

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}


Peon::Peon(const Peon &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon			&Peon::operator=(Peon const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

/* ************************************************************************** */

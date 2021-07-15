/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherPeon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:05:03 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:20:38 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AnotherPeon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AnotherPeon::AnotherPeon()
{
}

AnotherPeon::AnotherPeon(std::string const &name) : Victim(name)
{
	std::cout << "Another Zog zog." << std::endl;
}


AnotherPeon::AnotherPeon(const AnotherPeon &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AnotherPeon::~AnotherPeon()
{
	std::cout << "Another Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AnotherPeon			&AnotherPeon::operator=(AnotherPeon const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				AnotherPeon::getPolymorphed() const
{
	std::cout << _name << " has been turned into an other pink pony!" << std::endl;
}

/* ************************************************************************** */

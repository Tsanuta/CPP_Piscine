/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:39:03 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist			&PowerFist::operator=(PowerFist const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}


/* ************************************************************************** */

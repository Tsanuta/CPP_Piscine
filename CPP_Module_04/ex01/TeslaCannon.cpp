/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TeslaCannon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:15 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TeslaCannon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TeslaCannon::TeslaCannon() : AWeapon("Tesla Cannon", 1, 5)
{
}

TeslaCannon::TeslaCannon(const TeslaCannon &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TeslaCannon::~TeslaCannon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TeslaCannon				&TeslaCannon::operator=(TeslaCannon const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			TeslaCannon::attack() const
{
	std::cout << "* few *" << std::endl;
	return ;
}

/* ************************************************************************** */

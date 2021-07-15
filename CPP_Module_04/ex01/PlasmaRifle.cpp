/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:31:15 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const &)
{
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:06:50 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:01:25 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &src) : _name(src.getName())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon				&AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&AWeapon::getName() const
{
	return _name;
}

int					AWeapon::getAPCost() const
{
	return _apcost;
}

int					AWeapon::getDamage() const
{
	return _damage;
}

/* ************************************************************************** */

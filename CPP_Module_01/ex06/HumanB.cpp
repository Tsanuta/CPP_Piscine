/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:30:59 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:55 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::setWeapon(Weapon &WeaponB)
{
	this->_WeaponB = &WeaponB;
	return ;
}

void		HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_WeaponB->getType() << std::endl;
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}

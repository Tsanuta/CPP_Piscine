/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:11:05 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_WeaponA->getType() << std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon &WeaponA) : _name(name), _WeaponA(&WeaponA)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

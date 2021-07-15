/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:07:00 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:38:04 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return this->_type;
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

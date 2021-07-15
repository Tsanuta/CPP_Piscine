/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:21 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:11 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->_name << " (" << this->_type << ") Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

void	Zombie::setNameAndType(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
	return ;
}

Zombie::Zombie(void)
{
	this->announce();
	return ;
}


Zombie::~Zombie(void)
{
	// std::cout << this->_name << "Zombie Destroyed" << std::endl;
	return ;
}

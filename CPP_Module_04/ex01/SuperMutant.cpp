/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:05:33 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:26:50 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant			&SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this != &rhs)
		this->_hit_point = rhs._hit_point;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				SuperMutant::takeDamage(int damage)
{
	if (damage < 3)
		return ;
	if (this->_hit_point - (damage - 3) >= 0)
		this->_hit_point -= (damage - 3);
	else
		this->_hit_point = 0;
	return ;
}

/* ************************************************************************** */

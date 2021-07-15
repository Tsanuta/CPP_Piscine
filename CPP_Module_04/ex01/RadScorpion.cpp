/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:26:31 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:14:43 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion			&RadScorpion::operator=(RadScorpion const &rhs)
{
	if (this != &rhs)
		this->_hit_point = rhs._hit_point;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/* ************************************************************************** */

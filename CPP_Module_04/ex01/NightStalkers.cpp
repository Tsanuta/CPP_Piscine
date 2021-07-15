/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NightStalkers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:26:31 by olidon            #+#    #+#             */
/*   Updated: 2020/11/25 14:58:30 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NightStalkers.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NightStalkers::NightStalkers() : Enemy(50, "NightStalkers")
{
	std::cout << "A night Stalker appears" << std::endl;
}

NightStalkers::NightStalkers(const NightStalkers &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NightStalkers::~NightStalkers()
{
	std::cout << "Night Stalker died" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NightStalkers			&NightStalkers::operator=(NightStalkers const &rhs)
{
	if (this != &rhs)
		this->_hit_point = rhs._hit_point;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:26 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:00 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return(new Zombie(name, this->_type));
}

Zombie	*ZombieEvent::randomChump(void)
{
	int	rand_number;

	std::string rand_name[7] = {"Bob", "Jimi", "Ann", "Simon", "Julia", "Nick", "Marc"};
	rand_number = rand() % 7;
	return(new Zombie(rand_name[rand_number], this->_type));
}

ZombieEvent::ZombieEvent(void)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	// std::cout << "Event Destroyed" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:59:19 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:18 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n)
{
	this->_ZombieHordePtr = new Zombie[this->_n];
	std::string rand_name[7] = {"Bob", "Jim", "Ann", "Simon", "Julia", "Nick", "Marc"};
	for (int i = 0; i < this->_n; i++)
		this->_ZombieHordePtr[i].setNameAndType(rand_name[rand() % 7], "Horder");
	return ;
}

void	ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_n; i++)
		this->_ZombieHordePtr[i].announce();
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Zombie Horde Destroyed" << std::endl;
	delete [] this->_ZombieHordePtr;
	return ;
}

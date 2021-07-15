/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:56:48 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:39:28 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 50;
	_max_energy_point = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;
	std::cout << "Your new designation is SC4V-TP(default). ScavTrap. Let's get this party started!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 50;
	_max_energy_point = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;
	std::cout << "Your new designation is SC4V-TP(parametric). " << _name << ". Let's get this party started!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "SC4V-TP is cloned" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << _name << " is destroyed." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	_name = rhs._name;
	std::cout << "SC4V-TP " << _name << " becomes the exact copy of " << rhs._name << "." << std::endl;
	_hit_point = rhs._hit_point;
	_max_hit_point = rhs._max_hit_point;
	_energy_point = rhs._energy_point;
	_max_energy_point = rhs._max_energy_point;
	_level = rhs._level;
	_melee = rhs._melee;
	_ranged = rhs._ranged;
	_armor = rhs._armor;
	return *this;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::cout << "SC4V-TP " << _name << " gives you a new challenge : " << std::endl;
	std::string	sentence[5] = {"Kill a stupid FR4G-TP",
							   "Kill ennemy with ranged attack",
							   "Kill ennemy with melee attack",
							   "Dance with B4R-BOT in Moxxi's Up Over bar.",
							   "Break the law in front of CU5TM-TP."};

	std::cout << sentence[rand() % 5] << std::endl;
	return ;
}

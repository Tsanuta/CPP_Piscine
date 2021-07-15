/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:48:11 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:40:00 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 120;
	_max_energy_point = 120;
	_level = 1;
	_melee = 60;
	_ranged = 30;
	_armor = 30;
	std::cout << "Your new designation is 5UP4-TP(default). SuperTrap." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	srand(static_cast<unsigned int>(time(0)));
	_name = name;
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 120;
	_max_energy_point = 120;
	_level = 1;
	_melee = 60;
	_ranged = 30;
	_armor = 30;
	std::cout << "Your new designation is 5UP4-TP(parametric). " << _name << "." << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	std::cout << "5UP4-TP is cloned" << std::endl;
	*this = src;
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << "5UP4-TP " << _name << " is destroyed." << std::endl;
	return ;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	_name = rhs._name;
	std::cout << "5UP4-TP " << _name << " becomes the exact copy of " << rhs._name << "." << std::endl;
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

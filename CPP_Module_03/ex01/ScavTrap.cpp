/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:56:48 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:38:40 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("NoName")
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

ScavTrap::ScavTrap(std::string name) : _name(name)
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage !" << std::endl;
	std::cout << "I am a tornado of death and bullets!" << std::endl;
	return ;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " melee attack " << target << ", causing " << _melee << " points of damage !" << std::endl;
	std::cout << "Ha ha ha! Fall before your robot overlord!" << std::endl;
	return ;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC4V-TP " << _name << " takes " << amount << " points of damage ! ";
	if (static_cast<long>(amount) - static_cast<long>(_armor) <= 0)
		std::cout << "But his armor prevents him to take damages" << std::endl;
	else
	{
		std::cout << "But his armor absorbs " << _armor << " points. ";
		if (static_cast<long>(_hit_point) - (static_cast<long>(amount) - static_cast<long>(_armor)) <= 0)
		{
			_hit_point = 0;
			std::cout << "Bringing him to " << _hit_point << "HP." << std::endl;
			std::cout << "I'm too pretty to die!" << std::endl;
		}
		else
		{
			_hit_point -= (amount - _armor);
			std::cout << "Bringing him to " << _hit_point << "HP." << std::endl;
			std::cout << "Ow hohoho, that hurts! Yipes!" << std::endl;
		}
	}
	return ;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TP " << _name << " is repaired " << amount << " points ! ";
	if (_hit_point + amount > _max_hit_point)
	{
		_hit_point = _max_hit_point;
		std::cout << "Bringing him to " << _hit_point << "HP." << std::endl;
	}
	else
	{
		_hit_point += amount;
		std::cout << "Bringing him to " << _hit_point << "HP." << std::endl;
	}
	std::cout << "I found health!" << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer()
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:52:04 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:38:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("NoName")
{
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "Your new designation is CL4P-TP(default). ClapTrap. Waiting for inheritance." << std::endl;
	_hit_point = 0;
	_max_hit_point = 0;
	_energy_point = 0;
	_max_energy_point = 0;
	_level = 0;
	_melee = 0;
	_ranged = 0;
	_armor = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "Your new designation is CL4P-TP(default). ClapTrap. Waiting for inheritance." << std::endl;
	_hit_point = 0;
	_max_hit_point = 0;
	_energy_point = 0;
	_max_energy_point = 0;
	_level = 0;
	_melee = 0;
	_ranged = 0;
	_armor = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "CL4P-TP is cloned" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP " << _name << " is destroyed." << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	std::cout << "CL4P-TP " << _name << " becomes the exact copy of " << rhs._name << "." << std::endl;
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

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage !" << std::endl;
	std::cout << "I am a tornado of death and bullets!" << std::endl;
	return ;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _name << " melee attack " << target << ", causing " << _melee << " points of damage !" << std::endl;
	std::cout << "Ha ha ha! Fall before your robot overlord!" << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "CL4P-TP " << _name << " takes " << amount << " points of damage ! ";
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

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << _name << " is repaired " << amount << " points ! ";
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

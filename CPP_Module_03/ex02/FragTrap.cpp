/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:58:22 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:38:54 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 100;
	_max_energy_point = 100;
	_level = 1;
	_melee = 30;
	_ranged = 30;
	_armor = 30;
	std::cout << "Your new designation is FR4G-TP(default). FragTrap. You are a merciless killing machine. Got it?" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 100;
	_max_hit_point = 100;
	_energy_point = 100;
	_max_energy_point = 100;
	_level = 1;
	_melee = 30;
	_ranged = 30;
	_armor = 30;
	std::cout << "Your new designation is FR4G-TP(parametric). " << _name << ". You are a merciless killing machine. Got it?" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FR4G-TP is cloned" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " is destroyed." << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	_name = rhs._name;
	std::cout << "FR4G-TP " << _name << " becomes the exact copy of " << rhs._name << "." << std::endl;
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string	attack[5] = {"Funzerker",
							 "Shhhhh...trap",
							 "Miniontrap",
							 "Clap-in-the-Box",
							 "One Shot Wonder"};

	std::string	sentence[5] = {"Don't ask me where this ammo's coming from!",
							   "I'm a robot ninja...",
							   "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
							   "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
							   "Kill, reload! Kill, reload! KILL! RELOAD!"};

	if (static_cast<long>(_energy_point) - 25 < 0)
		std::cout << "No more energy. Crap, no more shots left!" << std::endl;
	else
	{
		std::cout << "FR4G-TP " << _name << " activates VaultHunter.EXE." << std::endl;
		std::cout << "Look out everybody, things are about to get awesome!" << std::endl;
		_energy_point -= 25;
		std::cout << "Using " << attack[rand() % 5] << " action package on " << target << " and gives " << rand() % 40 << " point of damages." << std::endl;
		std::cout << sentence[rand() % 5] << std::endl;
	}
	return ;
}

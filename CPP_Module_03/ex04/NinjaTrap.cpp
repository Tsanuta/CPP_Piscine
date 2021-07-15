/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:30:17 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 17:13:37 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 60;
	_max_hit_point = 60;
	_energy_point = 120;
	_max_energy_point = 120;
	_level = 1;
	_melee = 60;
	_ranged = 5;
	_armor = 0;
	std::cout << "Your new designation is INAC(default). Interplanetary Ninja Assassin Claptrap." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	srand(static_cast<unsigned int>(time(0)));
	_hit_point = 60;
	_max_hit_point = 60;
	_energy_point = 120;
	_max_energy_point = 120;
	_level = 1;
	_melee = 60;
	_ranged = 5;
	_armor = 0;
	std::cout << "Your new designation is INAC(parametric). Interplanetary Ninja Assassin Claptrap. " << _name << ". Let's get this party started!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	std::cout << "INAC is cloned" << std::endl;
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "INAC " << _name << " is destroyed." << std::endl;
	return ;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	_name = rhs._name;
	std::cout << "INAC " << _name << " becomes the exact copy of " << rhs._name << "." << std::endl;
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

void		NinjaTrap::ninjaShoebox(NinjaTrap &rhs)
{
	std::cout << "INAC " << _name << " meets another INAC. An endless ninjutsu combat occurs." << std::endl;
	rhs.rangedAttack(_name);
	return ;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &rhs)
{
	std::cout << "INAC " << _name << " meets a ClapTrap." << std::endl;
	rhs.meleeAttack(_name);
	return ;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &rhs)
{
	std::cout << "INAC " << _name << " meets a ScavTrap the gatekeeper." << std::endl;
	rhs.challengeNewcomer();
	return ;
}

void		NinjaTrap::ninjaShoebox(FragTrap &rhs)
{
	std::cout << "INAC " << _name << " meets a FragTrap the reprogrammed combat ClapTrap." << std::endl;
	rhs.vaulthunter_dot_exe(_name);
	return ;
}

void		NinjaTrap::ninjaShoebox(SuperTrap &rhs)
{
	std::cout << "INAC " << _name << " meets a SuperTrap." << std::endl;
	rhs.meleeAttack(_name);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:38:14 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:01:45 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"



/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name)
{
	_weapon_equiped = false;
	_action_point = 40;
}

Character::Character(const Character &src) : _name(src.getName())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character			&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_action_point = rhs._action_point;
		_weapon_equiped = rhs._weapon_equiped;
		if (_weapon_equiped == true)
			_weapon = rhs._weapon;
	}
	return *this;
}

std::ostream		&operator<<(std::ostream &o, Character const &i)
{
	if (i.getWeaponEquiped() == true)
		o << i.getName() << " has " << i.getActionPoint() << " AP and wields a " << i.getAWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getActionPoint() << " AP and is unarmed" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Character::recoverAP()
{
	if (_action_point + 10 > 40)
		_action_point = 40;
	else
		_action_point += 10;
}

void				Character::equip(AWeapon *rhs)
{
	_weapon_equiped = true;
	_weapon = rhs;
}

void				Character::attack(Enemy *rhs)
{
	if (getWeaponEquiped() == true)
	{
		if (_action_point - _weapon->getAPCost() >= 0)
		{
			_action_point -= _weapon->getAPCost();
			std::cout << _name << " attacks " << rhs->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			rhs->takeDamage(_weapon->getDamage());
			if (rhs->getHP() == 0)
			{
				delete rhs;
			}
		}
	}
}

std::string const	&Character::getName() const
{
	return _name;
}

int					Character::getActionPoint() const
{
	return _action_point;
}

AWeapon				*Character::getAWeapon() const
{
	return _weapon;
}

bool				Character::getWeaponEquiped() const
{
	return _weapon_equiped;
}

/* ************************************************************************** */

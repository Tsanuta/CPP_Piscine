/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:33:12 by olidon            #+#    #+#             */
/*   Updated: 2020/12/09 11:30:21 by olidon           ###   ########lyon.fr   */
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
	for (int i = 0; i < 4; ++i)
		_materia_slots[i] = NULL;
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
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_slots[i])
			delete _materia_slots[i];
		_materia_slots[i] = NULL;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character			&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		// Suppress old materia already on character
		for (int i = 0; i < 4; ++i)
		{
			if (_materia_slots[i])
				delete _materia_slots[i];
			_materia_slots[i] = NULL;
		}
		// Deep copy of rhs materia
		for (int i = 0; i < 4; ++i)
		{
			if (rhs._materia_slots[i])
				_materia_slots[i] = rhs._materia_slots[i]->clone();
			else
				_materia_slots[i] = NULL;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_slots[i] == NULL)
		{
			_materia_slots[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_materia_slots[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && _materia_slots[idx])
		_materia_slots[idx]->use(target);
}

/* ************************************************************************** */

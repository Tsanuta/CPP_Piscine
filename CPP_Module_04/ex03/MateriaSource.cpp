/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:05:29 by olidon            #+#    #+#             */
/*   Updated: 2020/12/09 11:28:01 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_learned_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_learned_materia[i])
			delete _learned_materia[i];
		_learned_materia[i] = NULL;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource				&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_learned_materia[i])
				delete _learned_materia[i];
			_learned_materia[i] = NULL;
		}
		for (int i = 0; i < 4; ++i)
		{
			if (rhs._learned_materia[i])
				_learned_materia[i] = rhs._learned_materia[i]->clone();
			else
				_learned_materia[i] = NULL;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void						MateriaSource::learnMateria(AMateria *rhs)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_learned_materia[i] == NULL)
		{
			_learned_materia[i] = rhs;
			return ;
		}
	}
}

AMateria					*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_learned_materia[i] && _learned_materia[i]->getType() == type)
			return _learned_materia[i]->clone();
	}
	return 0;
}

/* ************************************************************************** */

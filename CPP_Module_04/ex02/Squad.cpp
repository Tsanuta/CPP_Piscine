/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:59:16 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	_squad = NULL;
	_count = 0;
}

Squad::Squad(const Squad &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	t_squad		*tmp;
	t_squad		*list;

	list = _squad;
	tmp = _squad;
	if (list)
	{
		while (list)
		{
			delete list->unit;
			tmp = list->next;
			delete list;
			list = tmp;
		}
		_squad = NULL;
	}
	_count = 0;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad					&Squad::operator=(Squad const &rhs)
{
	t_squad		*rhslist;
	t_squad		*tmp;
	t_squad		*list;

	if (this != &rhs)
	{
		// delete existing squad
		list = _squad;
		tmp = _squad;
		if (list)
		{
			while (list)
			{
				delete list->unit;
				tmp = list->next;
				delete list;
				list = tmp;
			}
			_squad = NULL;
		}
		_count = 0;
		// copy rhs existing squad to new squad this
		if (rhs._squad)
		{
			rhslist = rhs._squad;
			while (rhslist)
			{
				this->push(rhslist->unit->clone());
				rhslist = rhslist->next;
			}
		}
		_count = rhs._count;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int						Squad::getCount() const
{
	return _count;
}

ISpaceMarine			*Squad::getUnit(int rhs) const
{
	t_squad		*list;
	int			i;

	i = 0;
	if (_squad && rhs < _count)
	{
		list = _squad;
		while (i <= rhs)
		{
			if (i == rhs)
				return list->unit;
			list = list->next;
			i++;
		}
	}
	return NULL;
}

int						Squad::push(ISpaceMarine *rhs)
{
	t_squad		*list;

	if (rhs != NULL && _squadexist(rhs) == 1)
	{
		_count += 1;
		if (_squad == NULL)
		{
			_squad = new t_squad;
			_squad->unit = rhs;
			_squad->next = NULL;
		}
		else
		{
			list = _squad;
			while (list->next)
				list = list->next;
			list->next = new t_squad;
			list->next->unit = rhs;
			list->next->next = NULL;
		}
	}
	return getCount();
}

int						Squad::_squadexist(ISpaceMarine *rhs) const
{
	t_squad		*list;

	if (_squad == NULL)
		return 1;
	else
	{
		list = _squad;
		while (list->next)
		{
			if (list->unit == rhs)
				return 0;
			list = list->next;
		}
		if (list->unit == rhs)
			return 0;
		return 1;
	}
}

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:51:25 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 18:02:04 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const &type) : _hit_point(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &src) : _type(src.getType())
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy				&Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
		_hit_point = rhs._hit_point;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const	&Enemy::getType() const
{
	return _type;
}

int					Enemy::getHP() const
{
	return _hit_point;
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	if (_hit_point - damage >= 0)
		_hit_point -= damage;
	else
		_hit_point = 0;
}

/* ************************************************************************** */

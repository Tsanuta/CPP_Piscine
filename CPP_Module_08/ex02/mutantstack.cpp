/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 17:56:31 by olidon            #+#    #+#             */
/*   Updated: 2021/01/06 12:48:54 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template< typename T >
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template< typename T >
MutantStack<T>::MutantStack(const MutantStack<T> &src) : std::stack<T>(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template< typename T >
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template< typename T >
MutantStack<T>		&MutantStack<T>::operator=(MutantStack<T> const &rhs)
{
	std::stack<T>::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template< typename T >
typename MutantStack<T>::iterator					MutantStack<T>::begin()
{
	return this->c.begin();
}

template< typename T >
typename MutantStack<T>::iterator					MutantStack<T>::end()
{
	return this->c.end();
}

template< typename T >
typename MutantStack<T>::const_iterator				MutantStack<T>::begin() const
{
	return this->c.begin();
}

template< typename T >
typename MutantStack<T>::const_iterator				MutantStack<T>::end() const
{
	return this->c.end();
}

template< typename T >
typename MutantStack<T>::reverse_iterator			MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template< typename T >
typename MutantStack<T>::reverse_iterator			MutantStack<T>::rend()
{
	return this->c.rend();
}

template< typename T >
typename MutantStack<T>::const_reverse_iterator		MutantStack<T>::rbegin() const
{
	return this->c.rbegin();
}

template< typename T >
typename MutantStack<T>::const_reverse_iterator		MutantStack<T>::rend() const
{
	return this->c.rend();
}

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:20:09 by olidon            #+#    #+#             */
/*   Updated: 2021/01/06 13:00:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span				&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_multiset = rhs._multiset;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Span::addNumber(int const n)
{
	if (_multiset.size() >= _n)
		throw std::length_error("Span is full already");
	else
		_multiset.insert(n);
}

void				Span::addNumber(int begin, int end)
{
	while (begin < end)
	{
		if (_multiset.size() >= _n)
			throw std::out_of_range("Out of range iterator");
		else
		{
			_multiset.insert(begin);
			begin++;
		}
	}
}

int					Span::shortestSpan() const
{
	if (_multiset.size() <= 1)
		throw std::length_error("Span has no span");

	std::multiset<int>::iterator	it = _multiset.begin();
	std::multiset<int>::iterator	it_next = ++_multiset.begin();
	int								shortest_span = (*it_next - *it);

	while(it_next != _multiset.end())
	{
		if (shortest_span > *it_next - *it)
			shortest_span = *it_next - *it;
		it++;
		it_next++;
	}
	return shortest_span;
}

int					Span::longestSpan() const
{
	if (_multiset.size() <= 1)
		throw std::length_error("Span has no span");
	return *(--_multiset.end()) - *_multiset.begin();
	// end est un pointeur apres la derniere veleur : prendre le end - 1
}

/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:29:39 by olidon            #+#    #+#             */
/*   Updated: 2020/12/14 13:41:41 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConversion::ScalarConversion()
{
}

ScalarConversion::ScalarConversion(std::string const value)
{
	//need to go through stringstream to convert value in long double
	std::stringstream	ss(value);

	ss >> _value;
}

ScalarConversion::ScalarConversion(const ScalarConversion &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConversion::~ScalarConversion()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScalarConversion				&ScalarConversion::operator=(ScalarConversion const &rhs)
{
	this->_value = rhs._value;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int							ScalarConversion::convertValueInt()
{
	if (this->_value < INT_MIN || this->_value > INT_MAX)
		throw impossibleException();
	return static_cast<int>(this->_value);
}

float						ScalarConversion::convertValueFloat()
{
	if (this->_value < -__FLT_MAX__ || this->_value > __FLT_MAX__)
		throw impossibleException();
	return static_cast<float>(this->_value);
}

char						ScalarConversion::convertValueChar()
{
	if ((this->_value >= 0 && this->_value <= 31) || _value == 127)
		throw nonDisplayableException();
	if (this->_value >= 0 && this->_value <= 126)
		return static_cast<char>(this->_value);
	else
		throw impossibleException();
}

double						ScalarConversion::convertValueDouble()
{
	if (this->_value < -__DBL_MAX__ || this->_value > __DBL_MAX__)
		throw impossibleException();
	return static_cast<double>(this->_value);
}

/* ************************************************************************** */

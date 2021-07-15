/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:59 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 20:46:05 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int		Fixed::_bits = 8;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value) : _value(value << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(static_cast<int>(roundf(value * (1 << _bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = rhs._value;
	return *this;
}

int 			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void			Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int				Fixed::toInt() const
{
	return _value >> _bits;
}

float			Fixed::toFloat() const
{
	return _value / static_cast<float>(1 << _bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:59 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 20:47:29 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int		Fixed::_bits = 8;

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value) : _value(value << _bits)
{
	// std::cout << "Copy from int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(static_cast<int>(roundf(value * (1 << _bits))))
{
	// std::cout << "Copy from float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	_value = rhs.getRawBits();
	return *this;
}

bool			Fixed::operator>(Fixed const &rhs) const
{
	if (_value > rhs._value)
		return true;
	return false;
}

bool			Fixed::operator<(Fixed const &rhs) const
{
	if (_value < rhs._value)
		return true;
	return false;
}

bool			Fixed::operator>=(Fixed const &rhs) const
{
	if (_value >= rhs._value)
		return true;
	return false;
}

bool			Fixed::operator<=(Fixed const &rhs) const
{
	if (_value <= rhs._value)
		return true;
	return false;
}

bool			Fixed::operator==(Fixed const &rhs) const
{
	if (_value == rhs._value)
		return true;
	return false;
}

bool			Fixed::operator!=(Fixed const &rhs) const
{
	if (_value != rhs._value)
		return true;
	return false;
}

Fixed			Fixed::operator+(Fixed const &rhs)
{
	Fixed	plus(toFloat() + rhs.toFloat());

	return plus;
}

Fixed			Fixed::operator-(Fixed const &rhs)
{
	Fixed	minus(toFloat() - rhs.toFloat());

	return minus;
}

Fixed			Fixed::operator*(Fixed const &rhs)
{
	Fixed	multi(toFloat() * rhs.toFloat());

	return multi;
}

Fixed			Fixed::operator/(Fixed const &rhs)
{
	Fixed	div(toFloat() / rhs.toFloat());

	return div;
}

Fixed			&Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed			&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed	postinc(*this);

	operator++();
	return postinc;
}

Fixed			Fixed::operator--(int)
{
	Fixed	postdec(*this);

	operator--();
	return postdec;
}

Fixed			&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed const		&Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed			&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed const		&Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

int 			Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
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

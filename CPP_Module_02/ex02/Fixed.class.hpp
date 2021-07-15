/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:53 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 21:19:31 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <cmath>

class	Fixed {

public:
	Fixed();											// default constructor
	Fixed(Fixed const &src);							// copy constructor
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();												// destructor
	Fixed				&operator=(Fixed const &rhs);		// overload assignation
	bool				operator>(Fixed const &rhs) const;	// overload greater
	bool				operator<(Fixed const &rhs) const;	// overload lower
	bool				operator>=(Fixed const &rhs) const;	// overload greater or equal
	bool				operator<=(Fixed const &rhs) const;	// overload lower or equal
	bool				operator==(Fixed const &rhs) const;	// overload is equal
	bool				operator!=(Fixed const &rhs) const;	// overload is not equal
	Fixed				operator+(Fixed const &rhs);		// add
	Fixed				operator-(Fixed const &rhs);		// sub
	Fixed				operator*(Fixed const &rhs);		// multi
	Fixed				operator/(Fixed const &rhs);		// div
	Fixed				&operator++();						// pre increment
	Fixed				&operator--();						// pre decrement
	Fixed				operator++(int);					// post increment
	Fixed				operator--(int);					// post decrement
	int 				getRawBits() const;
	void				setRawBits(int const raw);
	float				toFloat() const;
	int					toInt() const;
	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
	static Fixed const	&max(Fixed const &lhs, Fixed const &rhs);

private:
	int					_value;
	static const int	_bits;

};

std::ostream			&operator<<(std::ostream &o, Fixed const &rhs);

#endif

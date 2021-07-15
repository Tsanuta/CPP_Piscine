/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:53 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 21:19:29 by olidon           ###   ########lyon.fr   */
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
	~Fixed();											// destructor
	Fixed				&operator=(Fixed const &rhs);	// overload assignation
	int 				getRawBits() const;
	void				setRawBits(int const raw);
	float				toFloat() const;
	int					toInt() const;

private:
	int					_value;
	static const int	_bits;

};

std::ostream			&operator<<(std::ostream &o, Fixed const &rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:53 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 21:19:45 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class	Fixed {

public:
	Fixed();											// default constructor
	Fixed(Fixed const &src);							// copy constructor
	~Fixed();											// destructor
	Fixed				&operator=(Fixed const &rhs);	// overload assignation
	int 				getRawBits() const;
	void				setRawBits(int const raw);

private:
	int					_value;
	static const int	_bits;

};

#endif

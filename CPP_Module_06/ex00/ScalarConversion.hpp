/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:30:59 by olidon            #+#    #+#             */
/*   Updated: 2020/12/14 13:41:34 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_H
# define SCALARCONVERSION_H

# include <stdlib.h>
# include <iostream>
# include <string>
# include <stdexcept>
# include <climits>
# include <sstream>

class	ScalarConversion {

public:
	ScalarConversion(std::string const value);
	ScalarConversion(ScalarConversion const &src);
	~ScalarConversion(void);

	ScalarConversion			&operator=(ScalarConversion const &rhs);
	int							convertValueInt(void);
	float						convertValueFloat(void);
	char						convertValueChar(void);
	double						convertValueDouble(void);
	class	nonDisplayableException : public std::exception {
		public:
			virtual const char		*what() const throw() {
				return "Non displayable"; }
	};
	class	impossibleException : public std::exception {
		public:
			virtual const char		*what() const throw() {
				return "impossible"; }
	};

private:
	ScalarConversion(void);
	long double			_value;

};

#endif

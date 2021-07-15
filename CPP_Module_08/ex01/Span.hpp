/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:21:02 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 17:39:13 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
# include <set>
# include <stdexcept>

class	Span {

public:

	Span(unsigned int const n);
	Span(Span const &src);
	~Span();

	Span				&operator=(Span const &rhs);
	void				addNumber(int const n);
	void				addNumber(int begin, int end);
	int					shortestSpan() const;
	int					longestSpan() const;

private:
	Span();
	unsigned int		_n;
	std::multiset<int>	_multiset;

};

// std::ostream		&operator<<(std::ostream &o, Span const &i);

#endif

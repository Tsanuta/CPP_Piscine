/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:39:41 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 14:24:24 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <string>

template<typename T>
void	swap(T & x, T & y)
{
	T tmp = x;

	x = y;
	y = tmp;
	return ;
}

template<typename T>
T const	&max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template<typename T>
T const	&min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
T const	&max(T &x, T &y)
{
	return (x > y ? x : y);
}

template<typename T>
T const	&min(T &x, T &y)
{
	return (x < y ? x : y);
}

#endif

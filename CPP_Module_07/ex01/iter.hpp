/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:25:40 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 12:40:57 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>

template<typename T>
void	iter(T * array, size_t size, void (*fct)(T &))
{
	for (size_t i = 0; i < size; ++i)
		(*fct)(array[i]);
}

template<typename T>
void	iter(T const *array, size_t size, void (*fct)(T const &))
{
	for (size_t i = 0; i < size; ++i)
		(*fct)(array[i]);
}

#endif

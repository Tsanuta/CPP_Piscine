/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 20:29:48 by olidon            #+#    #+#             */
/*   Updated: 2021/01/05 14:42:49 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <string>
# include <set>
# include <stdexcept>

template< template < typename, typename > class T >
typename T< int, std::allocator<int> >::iterator	easyfind(T< int, std::allocator<int> > &container, int const occurence)
{
	return std::find(container.begin(), container.end(), occurence);
}

#endif

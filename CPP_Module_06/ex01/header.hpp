/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:24:24 by olidon            #+#    #+#             */
/*   Updated: 2020/11/16 21:33:56 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <string>
# include <sstream>
# include <stdlib.h>
# include <time.h>

struct			Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void);
Data	*deserialize(void *raw);

#endif

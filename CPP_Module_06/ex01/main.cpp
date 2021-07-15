/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:20:11 by olidon            #+#    #+#             */
/*   Updated: 2020/12/14 16:28:59 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int		main(void)
{
	void		*sedata = serialize();

	struct Data	*desedata = deserialize(sedata);

	std::cout << "s1: " << desedata->s1 << std::endl;
	std::cout << "n: " << desedata->n << std::endl;
	std::cout << "s2: " << desedata->s2 << std::endl;

	delete [] static_cast<char *>(sedata);
	delete desedata;

	return 0;
}

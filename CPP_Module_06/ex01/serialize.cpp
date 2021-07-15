/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:20:48 by olidon            #+#    #+#             */
/*   Updated: 2020/11/30 17:58:34 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

char	ft_rand_alphanum()
{
	const char	alphanum[] = {"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	return alphanum[rand() % (static_cast<int>(sizeof(alphanum)) - 1)];
}

void	*serialize(void)
{
	srand(static_cast<unsigned int>(time(NULL)));

	char	*cdata = new char[16 + sizeof(int)];

	for (int i = 0; i < 8; i++)
		cdata[i] = ft_rand_alphanum();
	// cdata[0] = 'a';
	// cdata[1] = 'b';
	// cdata[2] = 'c';
	// cdata[3] = 'd';
	// cdata[4] = 'e';
	// cdata[5] = 'f';
	// cdata[6] = 'g';
	// cdata[7] = 'h';

	// *reinterpret_cast<int *>(cdata + 8) = 15551;
	*reinterpret_cast<int *>(cdata + 8) = rand();

	for (size_t i = 8 + sizeof(int); i < 16 + sizeof(int); ++i)
		cdata[i] = ft_rand_alphanum();
	// cdata[8 + sizeof(int)] = 'i';
	// cdata[9 + sizeof(int)] = 'j';
	// cdata[10 + sizeof(int)] = 'k';
	// cdata[11 + sizeof(int)] = 'l';
	// cdata[12 + sizeof(int)] = 'm';
	// cdata[13 + sizeof(int)] = 'n';
	// cdata[14 + sizeof(int)] = 'o';
	// cdata[15 + sizeof(int)] = 'p';

	return cdata;
}

Data	*deserialize(void *raw)
{
	struct Data			*sdata = new struct Data();
	std::stringstream	s1s2;
	char				*cdata;

	cdata = static_cast<char *>(raw);
	for (int i = 0; i < 8; ++i)
		s1s2 << cdata[i];
	sdata->n = *reinterpret_cast<int *>(cdata + 8);
	for (size_t i = 8 + sizeof(int); i < 16 + sizeof(int); ++i)
		s1s2 << cdata[i];
	sdata->s1 = s1s2.str().substr(0, 8);
	sdata->s2 = s1s2.str().substr(8, 15);

	return sdata;
}

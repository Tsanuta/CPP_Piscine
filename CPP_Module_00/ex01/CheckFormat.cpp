/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckFormat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:47:32 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/10/20 16:22:37 by user42           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "CheckFormat.hpp"

bool	ft_is_alpha(std::string buff)
{
	for (unsigned long i = 0; i < buff.size(); i++)
	{
		if (isalpha(buff[i]) == 0)
		{
			std::cout << "Only letters in a name" << std::endl;
			return (1);
		}
	}
	return (0);
}

bool	ft_is_num(std::string buff)
{
	if (buff.length() != 10)
	{
		std::cout << "Only 10 digits without spaces" << std::endl;
		return (1);
	}
	for (unsigned long i = 0; i < buff.size(); i++)
	{
		if (isdigit(buff[i]) == 0)
		{
			std::cout << "Only 10 digits without spaces" << std::endl;
			return (1);
		}
	}
	return (0);
}

bool	ft_is_birthdate(std::string buff)
{
	if (buff.length() != 8)
	{
		std::cout << "Only 8 digits without spaces" << std::endl;
		return (1);
	}
	for (unsigned long i = 0; i < buff.size(); i++)
	{
		if (isdigit(buff[i]) == 0)
		{
			std::cout << "Only 8 digits without spaces" << std::endl;
			return (1);
		}
	}
	return (0);
}

bool	ft_is_email(std::string buff)
{
	size_t	i;
	int		at;
	int		point;

	i = 0;
	at = 0;
	point = 0;
	while (buff[i])
	{
		if (buff[i] == '@')
			at = 1;
		if (at == 1 && buff[i] == '.')
			point = 1;
		i++;
	}
	if (at == 0 || point == 0)
	{
		std::cout << "Email must contain an @ and a point." << std::endl;
		return (1);
	}
	return (0);

}

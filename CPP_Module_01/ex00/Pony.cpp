/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 23:49:16 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:36:33 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::print_pony_details(void) const
{
	std::cout << "Eye color : " << Eye_color << std::endl;
	std::cout << "Poney color : " << Pony_color << std::endl;
	std::cout << "Age : " << Age << std::endl;
	std::cout << "Speed : " << Speed << std::endl;
	return ;
}

void	Pony::run(void)
{
	if (Speed != 0)
		std::cout << "Pony is already running." << std::endl;
	else
	{
		Speed = 5;
		std::cout << "Pony is now running at 5km/h." << std::endl;
	}
	return ;
}

void	Pony::faster(void)
{
	if (Speed == 0)
		std::cout << "Pony is not running." << std::endl;
	else
	{
		Speed = Speed + 5;
		std::cout << "Pony is now running at " << Speed << "km/h." << std::endl;
	}
	return ;
}

Pony::Pony(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	Eye_color = "Blue";
	Pony_color = "Brown";
	Age = rand() % 30;
	Speed = 0;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony destroyed with destructor" << std::endl;
	return ;
}

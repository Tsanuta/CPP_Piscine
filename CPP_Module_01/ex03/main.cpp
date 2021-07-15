/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:18 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:08 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <ctime>

int		main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	// Create an New Horde
	ZombieHorde	Horde1(5);
	ZombieHorde	Horde2(4);

	Horde1.announce();
	Horde2.announce();

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:18 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:36:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>

int		main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	// Create de zombie with name and type
	Zombie		Zombie_Lana("Lana", "Walker");
	// Create an Event for a future zombie
	ZombieEvent	Event;
	// Create new Zombie without initialisation
	Zombie		*Zombie_Jim;
	Zombie		*Zombie_Random1;
	Zombie		*Zombie_Random2;

	// Set Zombie type
	Event.setZombieType("Runner");
	// Initialise new Zombie with name and inherite type Runner
	Zombie_Jim = Event.newZombie("Jim");
	// Do the same but create a Zombie with random name instead
	Zombie_Random1 = Event.randomChump();
	// Change the type
	Event.setZombieType("Creeper");
	// New zombie type Creeper with random name
	Zombie_Random2 = Event.randomChump();
	// Delete the Zombies
	delete Zombie_Jim;
	delete Zombie_Random1;
	delete Zombie_Random2;
	return (0);
}

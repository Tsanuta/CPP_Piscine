/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:19:44 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:32:05 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	FragTrap1("FragTrap1");
	FragTrap	FragTrap2(FragTrap1);
	FragTrap	FragTrapClone;

	FragTrapClone = FragTrap2;

	FragTrap1.takeDamage(55);
	FragTrap1.takeDamage(55);
	FragTrap1.takeDamage(55);
	FragTrap1.takeDamage(55);
	FragTrap1.beRepaired(100);
	FragTrap1.meleeAttack("Alpha Skag");
	FragTrap1.rangedAttack("Badass Nomad");
	FragTrap1.vaulthunter_dot_exe("Badass Psycho");
	FragTrap1.vaulthunter_dot_exe("Alpha Psycho");
	FragTrap1.vaulthunter_dot_exe("Recycler Bot");

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:19:44 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 17:17:02 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main(void)
{
	FragTrap	FragTrap1("FragTrap1");
	FragTrap	FragTrap2(FragTrap("FragTrap2"));
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

	ScavTrap	ScavTrap1("ScavTrap1");
	ScavTrap	ScavTrap2(ScavTrap("ScavTrap2"));
	ScavTrap	ScavTrapClone;

	ScavTrapClone = ScavTrap2;

	ScavTrap1.takeDamage(55);
	ScavTrap1.takeDamage(55);
	ScavTrap1.beRepaired(100);
	ScavTrap1.meleeAttack("Alpha Skag");
	ScavTrap1.rangedAttack("Badass Nomad");
	ScavTrap1.challengeNewcomer();
	ScavTrap1.challengeNewcomer();
	ScavTrap1.challengeNewcomer();

	ClapTrap	ClapTrap1("ClapTrap1");
	ClapTrap	ClapTrap2(ClapTrap("ClapTrap2"));
	ClapTrap	ClapTrapClone;

	ClapTrapClone = ClapTrap2;

	ClapTrap1.takeDamage(55);
	ClapTrap1.beRepaired(100);
	ClapTrap1.meleeAttack("Alpha Skag");
	ClapTrap1.rangedAttack("Badass Nomad");

	return 0;
}

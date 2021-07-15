/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:19:44 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 17:17:56 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
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

	ClapTrap	ClapTrap1;


	NinjaTrap	NinjaTrap1("NinjaTrap1");
	NinjaTrap	NinjaTrap2(NinjaTrap("NinjaTrap2"));
	NinjaTrap	NinjaTrapClone;

	NinjaTrapClone = NinjaTrap2;

	NinjaTrap1.takeDamage(55);
	NinjaTrap1.takeDamage(55);
	NinjaTrap1.beRepaired(100);
	NinjaTrap1.meleeAttack("Alpha Skag");
	NinjaTrap1.rangedAttack("Badass Nomad");
	NinjaTrap1.ninjaShoebox(NinjaTrap2);
	NinjaTrap1.ninjaShoebox(ScavTrap1);
	NinjaTrap1.ninjaShoebox(FragTrap1);
	NinjaTrap1.ninjaShoebox(ClapTrap1);
	return 0;
}

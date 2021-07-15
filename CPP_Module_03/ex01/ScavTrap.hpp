/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:57:05 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:41:51 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <cstdlib>

class	ScavTrap {

public:
	ScavTrap();													// Canonical
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);								// Canonical
	~ScavTrap();												// Canonical

	ScavTrap		&operator=(ScavTrap const &rhs);			// Canonical

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			challengeNewcomer();
private:
	unsigned int	_hit_point;
	unsigned int	_max_hit_point;
	unsigned int	_energy_point;
	unsigned int	_max_energy_point;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee;
	unsigned int	_ranged;
	unsigned int	_armor;

};

#endif

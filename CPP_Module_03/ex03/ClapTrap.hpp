/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:51:00 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:41:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <cstdlib>

class	ClapTrap {

public:
	ClapTrap();												// Canonical
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);								// Canonical
	~ClapTrap();											// Canonical

	ClapTrap		&operator=(ClapTrap const &rhs);			// Canonical

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:
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

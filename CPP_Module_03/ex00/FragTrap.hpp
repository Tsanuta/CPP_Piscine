/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:52:11 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/20 17:49:55 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include <cstdlib>

class	FragTrap {

public:
	FragTrap();													// Canonical
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);								// Canonical
	~FragTrap();												// Canonical

	FragTrap		&operator=(FragTrap const &rhs);			// Canonical

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			vaulthunter_dot_exe(std::string const &target);

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

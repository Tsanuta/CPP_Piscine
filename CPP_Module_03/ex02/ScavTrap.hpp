/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:57:05 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:41:49 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:
	ScavTrap();													// Canonical
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);								// Canonical
	~ScavTrap();												// Canonical

	ScavTrap		&operator=(ScavTrap const &rhs);			// Canonical

	void			challengeNewcomer();

};

#endif

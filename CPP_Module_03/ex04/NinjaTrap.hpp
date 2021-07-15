/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:29:27 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 17:13:11 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include <cstdlib>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap;

class	NinjaTrap : public virtual ClapTrap {

public:
	NinjaTrap();										// Canonical
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);					// Canonical
	~NinjaTrap();										// Canonical

	NinjaTrap		&operator=(NinjaTrap const &rhs);	// Canonical

	void			ninjaShoebox(NinjaTrap &rhs);
	void			ninjaShoebox(ClapTrap &rhs);
	void			ninjaShoebox(FragTrap &rhs);
	void			ninjaShoebox(ScavTrap &rhs);
	void			ninjaShoebox(SuperTrap &rhs);

};

#endif

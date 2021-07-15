/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:44:51 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:41:36 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include <iostream>
# include <cstdlib>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap();										// Canonical
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);					// Canonical
	~SuperTrap();										// Canonical

	SuperTrap		&operator=(SuperTrap const &rhs);	// Canonical

};

#endif

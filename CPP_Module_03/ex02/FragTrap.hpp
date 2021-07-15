/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 18:52:11 by Tsanuta           #+#    #+#             */
/*   Updated: 2020/11/23 16:41:49 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <cstdlib>

class	FragTrap : public ClapTrap {

public:
	FragTrap();													// Canonical
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);								// Canonical
	~FragTrap();												// Canonical

	FragTrap		&operator=(FragTrap const &rhs);			// Canonical

	void			vaulthunter_dot_exe(std::string const &target);

};

#endif

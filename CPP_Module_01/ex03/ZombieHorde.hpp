/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:59:34 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:22 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde {

public:
	void	announce(void) const;
	ZombieHorde(int n);
	~ZombieHorde(void);

private:
	int		_n;
	Zombie	*_ZombieHordePtr;

};

#endif

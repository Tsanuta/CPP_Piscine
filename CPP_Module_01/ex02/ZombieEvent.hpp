/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:29 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:03 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {

public:
	void		setZombieType(std::string type);
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump(void);
	ZombieEvent(void);
	~ZombieEvent(void);

private:
	std::string	_type;
};

#endif

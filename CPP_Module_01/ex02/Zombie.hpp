/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:23 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:36:56 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

public:
	void		announce(void) const;
	Zombie(std::string name, std::string type);
	~Zombie(void);

private:
	std::string	_name;
	std::string	_type;
};

#endif

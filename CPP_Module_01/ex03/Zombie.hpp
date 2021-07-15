/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:59:23 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:15 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

public:
	void		announce(void) const;
	void		setNameAndType(std::string name, std::string type);
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);

private:
	std::string	_name;
	std::string	_type;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:48:52 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:38:07 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

public:
	std::string	getType() const;
	void		setType(std::string type);
	Weapon(std::string type);
	~Weapon(void);

private:
	std::string	_type;

};

#endif

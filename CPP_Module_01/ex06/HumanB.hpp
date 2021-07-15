/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:14:39 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:58 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
	void		attack() const;
	void		setWeapon(Weapon &WeaponB);
	HumanB(std::string name);
	~HumanB(void);

private:
	std::string	_name;
	Weapon		*_WeaponB;

};

#endif

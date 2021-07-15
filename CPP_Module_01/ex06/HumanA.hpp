/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:11:10 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:51 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
	void		attack() const;
	HumanA(std::string name, Weapon &WeaponA);
	~HumanA(void);

private:
	std::string	_name;
	Weapon		*_WeaponA;

};

#endif

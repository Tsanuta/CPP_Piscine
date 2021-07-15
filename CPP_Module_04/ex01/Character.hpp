/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:37:10 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:22:00 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character {

public:
	Character(std::string const &name);
	Character(Character const &src);
	~Character();

	Character			&operator=(Character const &rhs);

	void				recoverAP();
	void				equip(AWeapon *rhs);
	void				attack(Enemy *rhs);
	std::string const	&getName() const;
	int					getActionPoint() const;
	AWeapon				*getAWeapon() const;
	bool				getWeaponEquiped() const;

private:
	Character();
	std::string const	_name;
	int					_action_point;
	AWeapon				*_weapon;
	bool				_weapon_equiped;

};

std::ostream			&operator<<(std::ostream &o, Character const &i);

#endif

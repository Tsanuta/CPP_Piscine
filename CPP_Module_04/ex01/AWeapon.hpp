/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:06:54 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:22:21 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

class	AWeapon {

public:

	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon();

	AWeapon				&operator=(AWeapon const &rhs);
	std::string const	&getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;

protected:
	AWeapon();
	std::string const	_name;
	int					_apcost;
	int					_damage;

};

std::ostream		&operator<<(std::ostream &o, AWeapon const &i);

#endif

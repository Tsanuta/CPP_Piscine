/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:50:17 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:22:39 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>
# include <string>

class Enemy {

public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &src);
	virtual ~Enemy();

	Enemy				&operator=(Enemy const &rhs);

	std::string const	&getType() const;
	int					getHP() const;
	virtual void		takeDamage(int damage);

protected:
	Enemy();
	int					_hit_point;
	std::string const	_type;

};

#endif

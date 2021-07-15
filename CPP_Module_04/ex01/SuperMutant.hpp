/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:55:28 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	SuperMutant(SuperMutant const &src);
	virtual 		~SuperMutant();

	SuperMutant		&operator=(SuperMutant const &rhs);

	void			takeDamage(int damage);

private:


};

#endif

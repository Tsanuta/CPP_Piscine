/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:38:05 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion();
	RadScorpion(RadScorpion const &src);
	virtual			~RadScorpion();

	RadScorpion		&operator=(RadScorpion const &rhs);

private:

};

#endif

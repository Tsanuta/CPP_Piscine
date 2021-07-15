/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NightStalkers.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:38:05 by olidon            #+#    #+#             */
/*   Updated: 2020/11/25 15:07:49 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NIGHTSTALKERS_H
# define NIGHTSTALKERS_H

# include <iostream>
# include <string>
# include "Enemy.hpp"

class NightStalkers : public Enemy {

public:

	NightStalkers();
	NightStalkers(NightStalkers const &src);
	virtual			~NightStalkers();

	NightStalkers	&operator=(NightStalkers const &rhs);

private:

};

#endif

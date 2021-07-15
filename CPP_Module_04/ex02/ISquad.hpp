/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:01:21 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class	ISquad {

public:
	virtual					~ISquad() {}
	virtual int				getCount() const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:00:35 by olidon            #+#    #+#             */
/*   Updated: 2020/12/02 16:37:58 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class	Squad : public ISquad {

public:

	Squad();
	Squad(Squad const &src);
	virtual			~Squad();

	Squad			&operator=(Squad const &rhs);

	int				getCount() const;
	ISpaceMarine	*getUnit(int rhs) const;
	int				push(ISpaceMarine *rhs);

private:
	typedef struct			s_squad
	{
		ISpaceMarine		*unit;
		struct s_squad		*next;
	}						t_squad;

	t_squad					*_squad;
	int						_count;

	int						_squadexist(ISpaceMarine *unit) const;

};

#endif

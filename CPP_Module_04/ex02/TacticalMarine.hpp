/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:20:11 by olidon            #+#    #+#             */
/*   Updated: 2020/12/02 16:37:54 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine();
	TacticalMarine(TacticalMarine const &src);
	virtual			~TacticalMarine();

	TacticalMarine	&operator=(TacticalMarine const &rhs);

	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

private:

};

#endif

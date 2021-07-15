/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:21:45 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &src);
	virtual					~AssaultTerminator();

	AssaultTerminator		&operator=(AssaultTerminator const &rhs);

	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

private:

};

#endif

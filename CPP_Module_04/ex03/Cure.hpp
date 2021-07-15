/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:10:48 by olidon            #+#    #+#             */
/*   Updated: 2020/12/02 15:10:37 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Cure : public AMateria {

public:

	Cure();
	Cure(Cure const &src);
	virtual				~Cure();

	Cure				&operator=(Cure const &rhs);

	AMateria			*clone() const;
	void				use(ICharacter &target);

private:


};

#endif

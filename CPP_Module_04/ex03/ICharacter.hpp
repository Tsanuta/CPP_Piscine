/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:35:42 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>
# include <string>

class	AMateria;

class	ICharacter {

public:

	virtual 					~ICharacter() {}
	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter &target) = 0;

};

#endif

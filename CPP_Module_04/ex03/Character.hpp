/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:32:09 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:45:02 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter {

public:

	Character(std::string const &name);
	Character(Character const &src);
	virtual				~Character();

	Character			&operator=(Character const &rhs);

	std::string const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);

private:
	Character();
	AMateria			*_materia_slots[4];
	std::string const	_name;
};

#endif

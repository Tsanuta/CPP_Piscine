/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:49:38 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria {

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria();

	AMateria			&operator=(AMateria const &rhs);

	std::string const 	&getType() const;	//Returns the materia type
	void				setXP(unsigned int xp);
	unsigned int		getXP() const;		//Returns the Materia's XP
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);

private:
	unsigned int		_xp;
	std::string const	_type;

};

#endif

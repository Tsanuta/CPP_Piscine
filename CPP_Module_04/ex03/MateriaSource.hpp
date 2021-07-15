/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:06:30 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	MateriaSource(MateriaSource const &src);
	virtual			~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &rhs);

	void			learnMateria(AMateria *);
	AMateria		*createMateria(std::string const &type);

private:
	AMateria		*_learned_materia[4];

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:38:56 by olidon            #+#    #+#             */
/*   Updated: 2020/12/01 15:12:48 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	IMateriaSource {

public:

	virtual				~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif

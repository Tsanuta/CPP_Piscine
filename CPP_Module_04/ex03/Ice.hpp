/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon  <olidon @student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:10:48 by olidon            #+#    #+#             */
/*   Updated: 2020/11/04 22:25:04 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Ice : public AMateria {

public:

	Ice();
	Ice(Ice const &src);
	virtual				~Ice();

	Ice					&operator=(Ice const &rhs);

	AMateria			*clone() const;
	void				use(ICharacter &target);

private:


};

#endif

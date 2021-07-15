/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:48:02 by olidon            #+#    #+#             */
/*   Updated: 2020/12/07 12:19:12 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>
# include <string>

class	Victim {

public:
	Victim(std::string const &name);
	Victim(Victim const &src);
	virtual 			~Victim();

	Victim				&operator=(Victim const &rhs);
	std::string const	&getName() const;
	virtual void		getPolymorphed() const;

protected:
	Victim();
	std::string const	_name;

};

std::ostream		&operator<<(std::ostream &o, Victim const &i);

#endif

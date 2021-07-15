/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:07:46 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:21:01 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"
# include "AnotherPeon.hpp"

class	Sorcerer {

public:

	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &src);
	~Sorcerer();

	Sorcerer			&operator=(Sorcerer const &rhs);
	std::string const	&getName() const;
	std::string const	&getTitle() const;
	void				polymorph(Victim const &rhs) const;

private:
	Sorcerer();
	std::string const	_name;
	std::string const	_title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i);

#endif

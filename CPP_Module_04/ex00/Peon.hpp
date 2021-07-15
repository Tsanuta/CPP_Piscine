/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:05:14 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:20:46 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Peon : public Victim {

public:
	Peon(std::string const &name);
	Peon(Peon const &src);
	virtual				~Peon();

	Peon				&operator=(Peon const &rhs);
	void				getPolymorphed() const;

private:
	Peon();

};

#endif

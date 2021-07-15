/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherPeon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:05:14 by olidon            #+#    #+#             */
/*   Updated: 2020/12/05 17:20:28 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANOTHERPEON_H
# define ANOTHERPEON_H

# include <iostream>
# include <string>
# include "Victim.hpp"

class	AnotherPeon : public Victim {

public:
	AnotherPeon(std::string const &name);
	AnotherPeon(AnotherPeon const &src);
	virtual				~AnotherPeon();

	AnotherPeon			&operator=(AnotherPeon const &rhs);
	void				getPolymorphed() const;

private:
	AnotherPeon();

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:58:22 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:40 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include <iostream>
# include "Brain.hpp"

class Human {

public:
	const Brain		&getBrain(void) const;
	std::string		identify(void) const;
	Human();
	~Human();

private:
	const			Brain *_Brain;
};

#endif

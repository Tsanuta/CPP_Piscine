/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:57:25 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:37 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain		&Human::getBrain(void) const
{
	return (*this->_Brain);
}

std::string	Human::identify(void) const
{
	return (this->getBrain().identify());
}

Human::Human(void) : _Brain(new Brain)
{
	return ;
}

Human::~Human(void)
{
	delete _Brain;
	return ;
}

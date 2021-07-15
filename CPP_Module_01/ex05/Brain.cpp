/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:57:09 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:37:30 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	address;

	address << std::hex << this;
	// std::cout << std::hex << this << std::endl;
	return (address.str());
}

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

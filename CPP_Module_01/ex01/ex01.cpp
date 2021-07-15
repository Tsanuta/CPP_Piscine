/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:50:06 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:36:41 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main(void)
{
	memoryLeak();
	return (0);
}

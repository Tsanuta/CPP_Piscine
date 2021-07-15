/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 23:48:54 by olidon            #+#    #+#             */
/*   Updated: 2020/11/19 15:40:57 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony Bob;
	Bob.print_pony_details();
	Bob.run();
	Bob.faster();
	Bob.print_pony_details();
	return ;
}

void	ponyOnTheHeap(void)
{
	Pony *Run = new Pony;

	Run->print_pony_details();
	Run->run();
	Run->faster();
	Run->print_pony_details();
	delete Run;
	return ;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}

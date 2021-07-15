/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:20:26 by olidon            #+#    #+#             */
/*   Updated: 2020/12/14 16:24:50 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));

	switch(rand() %3) {
		case 0: std::cout << "A" << std::endl; return (new A());
		case 1: std::cout << "B" << std::endl; return (new B());
		case 2: std::cout << "C" << std::endl; return (new C());
	}
	return NULL;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify_from_reference(Base &p)
{
	try {
		Base test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl; }
	catch (const std::exception &) {
		try {
			Base test = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl; }
		catch (const std::exception &) {
			try {
				Base test = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl; }
			catch (const std::exception &) {
				std::cerr << "Unkown" << std::endl;
			}
		}
	}
}

int		main(void)
{
	Base	*base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);

	delete base;
	return 0;
}

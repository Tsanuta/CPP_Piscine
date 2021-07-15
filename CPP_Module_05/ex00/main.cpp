/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:48:34 by olidon            #+#    #+#             */
/*   Updated: 2020/12/11 13:31:33 by olidon           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	// No exception
	try
	{
		Bureaucrat *vog = new Bureaucrat("Vogon", 10);
		std::cout << *vog << std::endl;
		delete vog;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too high exception
	try
	{
		Bureaucrat *vog = new Bureaucrat("Vogon", 0);
		std::cout << *vog << std::endl;
		delete vog;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// No exception
	try
	{
		Bureaucrat *vog = new Bureaucrat("Vogon", 150);
		std::cout << *vog << std::endl;
		delete vog;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too low exception
	try
	{
		Bureaucrat *vog = new Bureaucrat("Vogon", 151);
		std::cout << *vog << std::endl;
		delete vog;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// Grade too low exception
	Bureaucrat *vog2 = new Bureaucrat("Vogon", 150);
	std::cout << *vog2 << std::endl;
	vog2->incrementGrade();
	std::cout << *vog2 << std::endl;
	vog2->decrementGrade();
	try
	{
		vog2->decrementGrade();
		std::cout << *vog2 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete vog2;
	// Grade too high exception
	Bureaucrat *vog3 = new Bureaucrat("Vogon", 1);
	std::cout << *vog3 << std::endl;
	try
	{
		vog3->incrementGrade();
		std::cout << *vog3 << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	delete vog3;
	return 0;
}
